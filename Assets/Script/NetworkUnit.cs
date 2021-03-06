﻿using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class NetworkUnit : Photon.MonoBehaviour {
	/// <summary>
	/// bullet object
	/// </summary>
	[SerializeField]
	private GameObject BulletGameObject;
    private Vector3 correctPlayerPos = Vector3.zero; // We lerp towards this
    private Quaternion correctPlayerRot = Quaternion.identity; // We lerp towards this
	private float time = 0f;
    void Update()
    {
        if (!photonView.isMine)
        {
			if(this.correctPlayerPos.x != 0f){
            transform.position = Vector3.Lerp(transform.position, this.correctPlayerPos, Time.deltaTime );
            transform.rotation = Quaternion.Lerp(transform.rotation, this.correctPlayerRot, Time.deltaTime * 5);
			}
        }else{
		if (Input.GetKey(KeyCode.LeftArrow)) {
			transform.position = new Vector3(transform.position.x - 1f,0f ,0f);
		} else if(Input.GetKey(KeyCode.RightArrow)){
			transform.position = new Vector3(transform.position.x + 1f,0f ,0f);
		} else if(Input.GetKey(KeyCode.Space)){
			if(GameObject.Find("Bullet(Clone)")==null){
				var bullet = Instantiate(BulletGameObject);
				bullet.transform.position = transform.position;

			}
	
	}
		}
    }

    void OnPhotonSerializeView(PhotonStream stream, PhotonMessageInfo info)
    {
        UnityEngine.Debug.Log("point");
        if (stream.isWriting)
        {
            var pointText = GameObject.Find("Point").GetComponent<Text>();
            string point = pointText.text;
            // We own this player: send the others our data
            stream.SendNext(transform.position);
            stream.SendNext(transform.rotation);
            UnityEngine.Debug.Log(pointText.text);
            stream.SendNext(pointText.text);
            UnityEngine.Debug.Log("point2");
        }
        else
        {
            // Network player, receive data
            this.correctPlayerPos = (Vector3)stream.ReceiveNext();
            this.correctPlayerRot = (Quaternion)stream.ReceiveNext();
            UnityEngine.Debug.Log((Vector3)stream.ReceiveNext());
            var pointText = GameObject.Find("EnemyPoint").GetComponent<Text>();
            UnityEngine.Debug.Log("point3");
            pointText.text = (string)stream.ReceiveNext();
 
        }
    }
}