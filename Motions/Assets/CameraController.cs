using UnityEngine;
using System.Collections;

public class CameraController : MonoBehaviour {
	public GameObject player;
	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void LateUpdate () {
		if (Input.GetKeyDown(KeyCode.LeftArrow)){
		transform.RotateAround(Vector3.zero, Vector3.up, 20);
		}
		if (Input.GetKeyDown(KeyCode.RightArrow)){
		transform.RotateAround(Vector3.zero, Vector3.up, -20);
		}
		if (Input.GetKeyDown(KeyCode.UpArrow)){
		transform.RotateAround(Vector3.zero, Vector3.forward, 20);
		}
		if (Input.GetKeyDown(KeyCode.DownArrow)){
		transform.RotateAround(Vector3.zero, Vector3.forward, -20);
		}
	}
}
