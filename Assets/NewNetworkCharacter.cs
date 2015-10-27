
using UnityEngine;
using UnityEngine.UI;

public class NewNetworkCharacter : Photon.MonoBehaviour
{
	private Text text = null;
	private string ttext = "";
    private Vector3 correctPlayerPos = Vector3.zero; // We lerp towards this
    private Quaternion correctPlayerRot = Quaternion.identity; // We lerp towards this
    // Update is called once per frame
	void Start(){
		text = GameObject.Find("Canvas/Text").GetComponent<Text>();
	}
    void Update()
    {
        if (!photonView.isMine)
        {
            transform.position = Vector3.Lerp(transform.position, this.correctPlayerPos, Time.deltaTime * 5);
            transform.rotation = Quaternion.Lerp(transform.rotation, this.correctPlayerRot, Time.deltaTime * 5);
        }
    }

    void OnPhotonSerializeView(PhotonStream stream, PhotonMessageInfo info)
    {
        if (stream.isWriting)
        {
            // We own this player: send the others our data
            stream.SendNext(transform.position);
            stream.SendNext(transform.rotation);
			stream.SendNext(text.text);

            myThirdPersonController myC = GetComponent<myThirdPersonController>();
            stream.SendNext((int)myC._characterState);
			UnityEngine.Debug.Log ("aaaaa");
        }
        else
        {
            // Network player, receive data
            this.correctPlayerPos = (Vector3)stream.ReceiveNext();
            this.correctPlayerRot = (Quaternion)stream.ReceiveNext();
			this.ttext = (string)stream.ReceiveNext();
			UnityEngine.Debug.Log (ttext);
			if(text.text.Length < ttext.Length){
				text.text = ttext;
			}

            myThirdPersonController myC = GetComponent<myThirdPersonController>();
            myC._characterState = (CharacterState)stream.ReceiveNext();
			UnityEngine.Debug.Log ("bbb");
        }
    }
}
