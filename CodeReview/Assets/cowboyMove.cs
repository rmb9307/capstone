using UnityEngine;
using System.Collections;
using Windows.Kinect;

public class cowboyMove : MonoBehaviour {

    private KinectSensor _Sensor;
    private BodyFrameReader _Reader;
    private Body[] _Data = null;
    public GameObject cowboyLeftHand;
    public GameObject cowboyRightHand;
    public GameObject cowboyLeftForearm;
    public GameObject cowboyRightForearm;
    public GameObject cowboyLeftUpperarm;
    public GameObject cowboyRightUpperarm;
    public GameObject cowboyLeftThigh;
    public GameObject cowboyRightThigh;
    public GameObject cowboyLeftCalf;
    public GameObject cowboyRightCalf;
    public GameObject cowboyLeftFoot;
    public GameObject cowboyRightFoot;
    public GameObject cowboyPelvis;
    public GameObject cowboySpine;
    public GameObject cowboyNeck;
    public GameObject cowboyHead;


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

                    //HANDS
                    float horizontalHandLeft =
                        (_Data[idx].Joints[JointType.WristRight].Position.X);
                    float verticalHandLeft =
                        (_Data[idx].Joints[JointType.WristRight].Position.Y);
                    float depthHandLeft =
                        (_Data[idx].Joints[JointType.WristRight].Position.Z);

                    cowboyLeftHand.transform.position =
                        new Vector3(
                        horizontalHandLeft * 5,
                        verticalHandLeft * 5,
                        depthHandLeft * 5);

                    float horizontalHandRight =
                        (_Data[idx].Joints[JointType.WristLeft].Position.X);
                    float verticalHandRight =
                        (_Data[idx].Joints[JointType.WristLeft].Position.Y);
                    float depthHandRight =
                        (_Data[idx].Joints[JointType.WristLeft].Position.Z);

                    cowboyRightHand.transform.position =
                        new Vector3(
                        horizontalHandRight * 5,
                        verticalHandRight * 5,
                        depthHandRight * 5);

                    //ELBOWS
                    float horizontalLeftForearm =
                        (_Data[idx].Joints[JointType.ElbowRight].Position.X);
                    float verticalLeftForearm =
                        (_Data[idx].Joints[JointType.ElbowRight].Position.Y);
                    float depthLeftForearm =
                        (_Data[idx].Joints[JointType.ElbowRight].Position.Z);

                    cowboyLeftForearm.transform.position =
                        new Vector3(
                        horizontalLeftForearm * 5,
                        verticalLeftForearm * 5,
                        depthLeftForearm * 5);

                    float horizontalRightForearm =
                        (_Data[idx].Joints[JointType.ElbowLeft].Position.X);
                    float verticalRightForearm =
                        (_Data[idx].Joints[JointType.ElbowLeft].Position.Y);
                    float depthRightForearm =
                        (_Data[idx].Joints[JointType.ElbowLeft].Position.Z);

                    cowboyRightForearm.transform.position =
                        new Vector3(
                        horizontalRightForearm * 5,
                        verticalRightForearm * 5,
                        depthRightForearm * 5);

                    //SHOULDERS
                    float horizontalLeftUpperarm =
                        (_Data[idx].Joints[JointType.ShoulderRight].Position.X);
                    float verticalLeftUpperarm =
                        (_Data[idx].Joints[JointType.ShoulderRight].Position.Y);
                    float depthLeftUpperarm =
                        (_Data[idx].Joints[JointType.ShoulderRight].Position.Z);

                    cowboyLeftUpperarm.transform.position =
                        new Vector3(
                        horizontalLeftUpperarm * 5,
                        verticalLeftUpperarm * 5,
                        depthLeftUpperarm * 5);

                    float horizontalRightUpperarm =
                        (_Data[idx].Joints[JointType.ShoulderLeft].Position.X);
                    float verticalRightUpperarm =
                        (_Data[idx].Joints[JointType.ShoulderLeft].Position.Y);
                    float depthRightUpperarm =
                        (_Data[idx].Joints[JointType.ShoulderLeft].Position.Z);

                    cowboyRightUpperarm.transform.position =
                        new Vector3(
                        horizontalRightUpperarm * 5,
                        verticalRightUpperarm * 5,
                        depthRightUpperarm * 5);

                    //NECK
                    float horizontalNeck =
                        (_Data[idx].Joints[JointType.Neck].Position.X);
                    float verticalNeck =
                        (_Data[idx].Joints[JointType.Neck].Position.Y);
                    float depthNeck =
                        (_Data[idx].Joints[JointType.Neck].Position.Z);

                    cowboyNeck.transform.position =
                        new Vector3(
                        horizontalNeck * 5,
                        verticalNeck * 5,
                        depthNeck * 5);

                    //HEAD
                    float horizontalHead =
                        (_Data[idx].Joints[JointType.Head].Position.X);
                    float verticalHead =
                        (_Data[idx].Joints[JointType.Head].Position.Y);
                    float depthHead =
                        (_Data[idx].Joints[JointType.Head].Position.Z);

                    cowboyHead.transform.position =
                        new Vector3(
                        horizontalHead * 5,
                        verticalHead * 5,
                        depthHead * 5);

                    //SPINE
                    float horizontalSpine =
                        (_Data[idx].Joints[JointType.SpineMid].Position.X);
                    float verticalSpine =
                        (_Data[idx].Joints[JointType.SpineMid].Position.Y);
                    float depthSpine =
                        (_Data[idx].Joints[JointType.SpineMid].Position.Z);

                    cowboySpine.transform.position =
                        new Vector3(
                        horizontalSpine * 5,
                        verticalSpine * 5,
                        depthSpine * 5);

                    //PELVIS
                    float horizontalPelvis =
                        (_Data[idx].Joints[JointType.SpineBase].Position.X);
                    float verticalPelvis =
                        (_Data[idx].Joints[JointType.SpineBase].Position.Y);
                    float depthPelvis =
                        (_Data[idx].Joints[JointType.SpineBase].Position.Z);

                    cowboyPelvis.transform.position =
                        new Vector3(
                        horizontalPelvis * 5,
                        verticalPelvis * 5,
                        depthPelvis * 5);

                    //HIPS
                    float horizontalLeftThigh =
                        (_Data[idx].Joints[JointType.HipRight].Position.X);
                    float verticalLeftThigh =
                        (_Data[idx].Joints[JointType.HipRight].Position.Y);
                    float depthLeftThigh =
                        (_Data[idx].Joints[JointType.HipRight].Position.Z);

                    cowboyLeftThigh.transform.position =
                        new Vector3(
                        horizontalLeftThigh * 5,
                        verticalLeftThigh * 5,
                        depthLeftThigh * 5);

                    float horizontalRightThigh =
                        (_Data[idx].Joints[JointType.HipLeft].Position.X);
                    float verticalRightThigh =
                        (_Data[idx].Joints[JointType.HipLeft].Position.Y);
                    float depthRightThigh =
                        (_Data[idx].Joints[JointType.HipLeft].Position.Z);

                    cowboyRightThigh.transform.position =
                        new Vector3(
                        horizontalRightThigh * 5,
                        verticalRightThigh * 5,
                        depthRightThigh * 5);

                    //KNEES
                    float horizontalLeftCalf =
                        (_Data[idx].Joints[JointType.KneeRight].Position.X);
                    float verticalLeftCalf =
                        (_Data[idx].Joints[JointType.KneeRight].Position.Y);
                    float depthLeftCalf =
                        (_Data[idx].Joints[JointType.KneeRight].Position.Z);

                    cowboyLeftCalf.transform.position =
                        new Vector3(
                        horizontalLeftCalf * 5,
                        verticalLeftCalf * 5,
                        depthLeftCalf * 5);

                    float horizontalRightCalf =
                        (_Data[idx].Joints[JointType.KneeLeft].Position.X);
                    float verticalRightCalf =
                        (_Data[idx].Joints[JointType.KneeLeft].Position.Y);
                    float depthRightCalf =
                        (_Data[idx].Joints[JointType.KneeLeft].Position.Z);

                    cowboyRightCalf.transform.position =
                        new Vector3(
                        horizontalRightCalf * 5,
                        verticalRightCalf * 5,
                        depthRightCalf * 5);

                    //FEET
                    float horizontalLeftFoot =
                        (_Data[idx].Joints[JointType.AnkleRight].Position.X);
                    float verticalLeftFoot =
                        (_Data[idx].Joints[JointType.AnkleRight].Position.Y);
                    float depthLeftFoot =
                        (_Data[idx].Joints[JointType.AnkleRight].Position.Z);

                    cowboyLeftFoot.transform.position =
                        new Vector3(
                        horizontalLeftFoot * 5,
                        verticalLeftFoot * 5,
                        depthLeftFoot * 5);

                    float horizontalRightFoot =
                        (_Data[idx].Joints[JointType.AnkleLeft].Position.X);
                    float verticalRightFoot =
                        (_Data[idx].Joints[JointType.AnkleLeft].Position.Y);
                    float depthRightFoot =
                        (_Data[idx].Joints[JointType.AnkleLeft].Position.Z);

                    cowboyRightFoot.transform.position =
                        new Vector3(
                        horizontalRightFoot * 5,
                        verticalRightFoot * 5,
                        depthRightFoot * 5);

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
