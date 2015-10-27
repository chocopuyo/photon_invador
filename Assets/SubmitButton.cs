using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class SubmitButton : MonoBehaviour {
	[SerializeField]
	private Text textArea = null;
	[SerializeField]
	private Text inputField = null;
	public void Submit(){
		textArea.text += "\n"+inputField.text;
		inputField.text = "";
	}

}
