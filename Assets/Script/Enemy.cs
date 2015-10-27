using UnityEngine;
using System.Collections;

public class Enemy : MonoBehaviour {

	[SerializeField]
	private float moveSpeedPerSec = 1f;
	private float elapsedTime = 0f;
	private float direction = 1f;
	// Update is called once per frame
	void Awake(){
	}
	void Update () {
		elapsedTime += Time.deltaTime;
		if(elapsedTime > 1f/moveSpeedPerSec){
			elapsedTime = 0f;
			transform.position = new Vector3(transform.position.x + 1f * direction,transform.position.y,0f);
		}
	
		if(transform.position.x > 86){
			direction = -1;
		}else if(transform.position.x < -86){
			direction = 1;
		}
	}

	//衝突が始まったときに１度だけ呼ばれる関数（接触したオブジェのタグを表示する） 
	void OnCollisionEnter(Collision col){
		GameObject.Destroy(gameObject);
	}

}
