using UnityEngine;
using System.Collections;

public class CameraController : MonoBehaviour {
    public GameObject centerObject;
    private Vector3 rotateCenter;
	// Use this for initialization
	void Start () {
        rotateCenter = centerObject.transform.position;

    }
	
	// Update is called once per frame
	void LateUpdate () {
        if (Input.GetKey(KeyCode.LeftArrow))
        {
            transform.RotateAround(rotateCenter, Vector3.up, 2);
        }
        if (Input.GetKey(KeyCode.RightArrow))
        {
            transform.RotateAround(rotateCenter, Vector3.up, -2);
        }
    }
}
