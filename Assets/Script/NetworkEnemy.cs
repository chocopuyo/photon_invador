using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class NetworkEnemy : Photon.MonoBehaviour
{
    /// <summary>
    /// bullet object
    /// </summary>
    [SerializeField]
    private GameObject BulletGameObject;
    private Vector3 correctPlayerPos = Vector3.zero; // We lerp towards this
    private Quaternion correctPlayerRot = Quaternion.identity; // We lerp towards this
    private float time = 0f;


	[SerializeField]
	private float moveSpeedPerSec = 1f;
	private float elapsedTime = 0f;
	private float direction = 1f;

    void Update()
    {
        if (!photonView.isMine)
        {
            if (this.correctPlayerPos.x != 0f)
            {
                transform.position = this.correctPlayerPos;
                transform.rotation = this.correctPlayerRot;
                //transform.position = Vector3.Lerp(transform.position, this.correctPlayerPos, Time.deltaTime);
                //transform.rotation = Quaternion.Lerp(transform.rotation, this.correctPlayerRot, Time.deltaTime * 5);
            }
        }
        else
        {
            elapsedTime += Time.deltaTime;
            if (elapsedTime > 1f / moveSpeedPerSec)
            {
                elapsedTime = 0f;
                transform.position = new Vector3(transform.position.x + 1f * direction, transform.position.y, 0f);

                //transform.position = new Vector3(transform.position.x + 1f * GameManager.direction, transform.position.y, 0f);
            }

            if (transform.position.x > 86)
            {
                direction = -1;
                //GameManager.direction = -1;
            }
            else if (transform.position.x < -86)
            {

                //GameManager.direction = 1;
                direction = 1;
            }
            //if (Input.GetKey(KeyCode.LeftArrow))
            //{
            //    transform.position = new Vector3(transform.position.x - 1f, 0f, 0f);
            //}
            //else if (Input.GetKey(KeyCode.RightArrow))
            //{
            //    transform.position = new Vector3(transform.position.x + 1f, 0f, 0f);
            //}
            //else if (Input.GetKey(KeyCode.Space))
            //{
            //    if (GameObject.Find("Bullet(Clone)") == null)
            //    {
            //        var bullet = Instantiate(BulletGameObject);
            //        bullet.transform.position = transform.position;

            //    }

            //}
        }
    }

    void OnPhotonSerializeView(PhotonStream stream, PhotonMessageInfo info)
    {
        if (stream.isWriting)
        {
            // We own this player: send the others our data
            stream.SendNext(transform.position);
            stream.SendNext(transform.rotation);
        }
        else
        {
            // Network player, receive data
            this.correctPlayerPos = (Vector3)stream.ReceiveNext();
            this.correctPlayerRot = (Quaternion)stream.ReceiveNext();


        }
    }
	void OnCollisionEnter(Collision col)
	{
	    var pointText = GameObject.Find("Point").GetComponent<Text>();
        var point = int.Parse(pointText.text);
	    pointText.text = (point+1).ToString();
        if (photonView.isMine)
	    {
	        PhotonNetwork.Destroy(gameObject);
	    }
	    else
	    {
            this.photonView.RPC("DestroyRpc", PhotonTargets.AllBuffered);
        }
    }

    [PunRPC]
    public IEnumerator DestroyRpc()
    {
        GameObject.Destroy(this.gameObject);
        yield return 0; // if you allow 1 frame to pass, the object's OnDestroy() method gets called and cleans up references.
        //PhotonNetwork.UnAllocateViewID(this.photonView.viewID);
    }
}