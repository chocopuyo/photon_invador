using UnityEngine;
using System.Collections;

public class Bullet : MonoBehaviour {
	[SerializeField]
	private float bulletSpeed = 1f;
	// Update is called once per frame
	void Start(){
		transform.position = new Vector3(transform.position.x,transform.position.y + 2f,0f);
	}
	void Update () {
		transform.position = new Vector3(transform.position.x,transform.position.y + bulletSpeed,0f);
		if(transform.position.y > 110){
			GameObject.Destroy(gameObject);
		}
	}
	//衝突が始まったときに１度だけ呼ばれる関数（接触したオブジェのタグを表示する） 
	void OnCollisionEnter(Collision col){
		GameObject.Destroy(gameObject);
	}
}
