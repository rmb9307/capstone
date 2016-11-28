using UnityEngine;
using System.Collections;
using Windows.Kinect;

public class CubeScript : MonoBehaviour {

    private KinectSensor _Sensor;
    private BodyFrameReader _Reader;
    private Body[] _Data = null;

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
                    if (_Data[idx].HandRightState != HandState.Closed)
                    {
                        float horizontal =
                            (float)(_Data[idx].Joints[JointType.HandRight].Position.X
                            * 0.1);
                        float vertical =
                            (float)(_Data[idx].Joints[JointType.HandRight].Position.Y
                            * 0.1);

                        //if (firstdeep == -1)
                        //{
                            float firstdeep =
                                (float)(_Data[idx].Joints[JointType.HandRight].Position.Z
                                * 0.1);
                        //}
                        float deep =
                            (float)(_Data[idx].Joints[JointType.HandRight].Position.Z
                            * 0.1) - firstdeep;

                        this.gameObject.transform.position = new Vector3(
                            this.gameObject.transform.position.x + horizontal,
                            this.gameObject.transform.position.y + vertical,
                            this.transform.position.z + deep);
                    }
                    if (_Data[idx].HandLeftState != HandState.Closed)
                    {
                       float angley =
                            (float)(_Data[idx].Joints[JointType.HandLeft].Position.X);
                       float anglex =
                            (float)(_Data[idx].Joints[JointType.HandLeft].Position.Y);
                       float anglez =
                            (float)(_Data[idx].Joints[JointType.HandLeft].Position.Z);

                        this.gameObject.transform.rotation =
                            Quaternion.Euler(
                            this.gameObject.transform.rotation.x + anglex * 100,
                            this.gameObject.transform.rotation.y + angley * 100,
                            this.gameObject.transform.rotation.z + anglez * 100);
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
