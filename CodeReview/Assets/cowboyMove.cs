using UnityEngine;
using System.Collections;
using Windows.Kinect;

public class cowboyMove : MonoBehaviour {

    private KinectSensor _Sensor;
    private BodyFrameReader _Reader;
    private Body[] _Data = null;
    public GameObject cowboyLeftHand;

    // Use this for initialization
    void Start () {
        _Sensor = KinectSensor.GetDefault();

        if (_Sensor != null)
        {
            _Reader = _Sensor.BodyFrameSource.OpenReader();

            if (!_Sensor.IsOpen)
            {
                _Sensor.Open();
            }
        }
    }
	
	// Update is called once per frame
	void Update () {
        if (_Reader != null)
        {
            var frame = _Reader.AcquireLatestFrame();

            if (frame != null)
            {
                if (_Data == null)
                {
                    _Data = new Body[_Sensor.BodyFrameSource.BodyCount];
                }

                frame.GetAndRefreshBodyData(_Data);

                frame.Dispose();
                frame = null;

                int idx = -1;
                for (int i = 0; i < _Sensor.BodyFrameSource.BodyCount; i++)
                {
                    if (_Data[i].IsTracked)
                    {
                        idx = i;
                    }
                }
                if (idx > -1)
                {
                    if (_Data[idx].HandLeftState != HandState.Closed)
                    {
                        float horizontal =
                            (_Data[idx].Joints[JointType.HandLeft].Position.X);
                        float vertical =
                            (_Data[idx].Joints[JointType.HandLeft].Position.Y);
                        float depth =
                            (_Data[idx].Joints[JointType.HandLeft].Position.Z);

                        cowboyLeftHand.transform.position =
                            new Vector3(
                            cowboyLeftHand.transform.position.x + horizontal,
                            cowboyLeftHand.transform.position.y + vertical,
                            cowboyLeftHand.transform.position.z + depth);
                    }
                }
            }
        }
    }

    void OnApplicationQuit()
    {
        if (_Reader != null)
        {
            _Reader.Dispose();
            _Reader = null;
        }

        if (_Sensor != null)
        {
            if (_Sensor.IsOpen)
            {
                _Sensor.Close();
            }
            _Sensor = null;
        }
    }
}
