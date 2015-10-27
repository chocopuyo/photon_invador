using UnityEngine;
using System.Collections;

public class unit : MonoBehaviour {

	/// <summary>
	/// bullet object
	/// </summary>
	[SerializeField]
	private GameObject BulletGameObject;

	// Update is called once per frame
	void Update () {
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
