using UnityEngine;
using System.Collections;
using Windows.Kinect;

public class cowboyMove : MonoBehaviour {

    private KinectSensor _Sensor;
    private BodyFrameReader _Reader;
    private Body[] _Data = null;
    public GameObject cowboyLeftHand;
    public GameObject cowboyRightHand;
    public GameObject cowboyLeftWrist;
    public GameObject cowboyRightWrist;
    public GameObject cowboyLeftForearm;
    public GameObject cowboyRightForearm;
    public GameObject cowboyLeftUpperarm;
    public GameObject cowboyRightUpperarm;
    public GameObject cowboyLeftThigh;
    public GameObject cowboyRightThigh;
    public GameObject cowboyLeftCalf;
    public GameObject cowboyRightCalf;
    public GameObject cowboyLeftAnkle;
    public GameObject cowboyRightAnkle;
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
                        (_Data[idx].Joints[JointType.HandRight].Position.X);
                    float verticalHandLeft =
                        (_Data[idx].Joints[JointType.HandRight].Position.Y);
                    float depthHandLeft =
                        (_Data[idx].Joints[JointType.HandRight].Position.Z);

                    cowboyLeftHand.transform.position =
                        new Vector3(
                        horizontalHandLeft * 50,
                        verticalHandLeft * 50,
                        depthHandLeft * 50);

                    float horizontalHandRight =
                        (_Data[idx].Joints[JointType.HandLeft].Position.X);
                    float verticalHandRight =
                        (_Data[idx].Joints[JointType.HandLeft].Position.Y);
                    float depthHandRight =
                        (_Data[idx].Joints[JointType.HandLeft].Position.Z);

                    cowboyRightHand.transform.position =
                        new Vector3(
                        horizontalHandRight * 50,
                        verticalHandRight * 50,
                        depthHandRight * 50);

                    //WRISTS
                    float horizontalWristLeft =
                        (_Data[idx].Joints[JointType.WristRight].Position.X);
                    float verticalWristLeft =
                        (_Data[idx].Joints[JointType.WristRight].Position.Y);
                    float depthWristLeft =
                        (_Data[idx].Joints[JointType.WristRight].Position.Z);

                    cowboyLeftWrist.transform.position =
                        new Vector3(
                        horizontalWristLeft * 50,
                        verticalWristLeft * 50,
                        depthWristLeft * 50);

                    float horizontalWristRight =
                        (_Data[idx].Joints[JointType.WristLeft].Position.X);
                    float verticalWristRight =
                        (_Data[idx].Joints[JointType.WristLeft].Position.Y);
                    float depthWristRight =
                        (_Data[idx].Joints[JointType.WristLeft].Position.Z);

                    cowboyRightWrist.transform.position =
                        new Vector3(
                        horizontalWristRight * 50,
                        verticalWristRight * 50,
                        depthWristRight * 50);

                    //ELBOWS
                    float horizontalLeftForearm =
                        (_Data[idx].Joints[JointType.ElbowRight].Position.X);
                    float verticalLeftForearm =
                        (_Data[idx].Joints[JointType.ElbowRight].Position.Y);
                    float depthLeftForearm =
                        (_Data[idx].Joints[JointType.ElbowRight].Position.Z);

                    cowboyLeftForearm.transform.position =
                        new Vector3(
                        horizontalLeftForearm * 50,
                        verticalLeftForearm * 50,
                        depthLeftForearm * 50);

                    float horizontalRightForearm =
                        (_Data[idx].Joints[JointType.ElbowLeft].Position.X);
                    float verticalRightForearm =
                        (_Data[idx].Joints[JointType.ElbowLeft].Position.Y);
                    float depthRightForearm =
                        (_Data[idx].Joints[JointType.ElbowLeft].Position.Z);

                    cowboyRightForearm.transform.position =
                        new Vector3(
                        horizontalRightForearm * 50,
                        verticalRightForearm * 50,
                        depthRightForearm * 50);

                    //SHOULDERS
                    float horizontalLeftUpperarm =
                        (_Data[idx].Joints[JointType.ShoulderRight].Position.X);
                    float verticalLeftUpperarm =
                        (_Data[idx].Joints[JointType.ShoulderRight].Position.Y);
                    float depthLeftUpperarm =
                        (_Data[idx].Joints[JointType.ShoulderRight].Position.Z);

                    cowboyLeftUpperarm.transform.position =
                        new Vector3(
                        horizontalLeftUpperarm * 50,
                        verticalLeftUpperarm * 50,
                        depthLeftUpperarm * 50);

                    float horizontalRightUpperarm =
                        (_Data[idx].Joints[JointType.ShoulderLeft].Position.X);
                    float verticalRightUpperarm =
                        (_Data[idx].Joints[JointType.ShoulderLeft].Position.Y);
                    float depthRightUpperarm =
                        (_Data[idx].Joints[JointType.ShoulderLeft].Position.Z);

                    cowboyRightUpperarm.transform.position =
                        new Vector3(
                        horizontalRightUpperarm * 50,
                        verticalRightUpperarm * 50,
                        depthRightUpperarm * 50);

                    //NECK
                    float horizontalNeck =
                        (_Data[idx].Joints[JointType.Neck].Position.X);
                    float verticalNeck =
                        (_Data[idx].Joints[JointType.Neck].Position.Y);
                    float depthNeck =
                        (_Data[idx].Joints[JointType.Neck].Position.Z);

                    cowboyNeck.transform.position =
                        new Vector3(
                        horizontalNeck * 50,
                        verticalNeck * 50,
                        depthNeck * 50);

                    //HEAD
                    float horizontalHead =
                        (_Data[idx].Joints[JointType.Head].Position.X);
                    float verticalHead =
                        (_Data[idx].Joints[JointType.Head].Position.Y);
                    float depthHead =
                        (_Data[idx].Joints[JointType.Head].Position.Z);

                    cowboyHead.transform.position =
                        new Vector3(
                        horizontalHead * 50,
                        verticalHead * 50,
                        depthHead * 50);

                    //SPINE
                    float horizontalSpine =
                        (_Data[idx].Joints[JointType.SpineMid].Position.X);
                    float verticalSpine =
                        (_Data[idx].Joints[JointType.SpineMid].Position.Y);
                    float depthSpine =
                        (_Data[idx].Joints[JointType.SpineMid].Position.Z);

                    cowboySpine.transform.position =
                        new Vector3(
                        horizontalSpine * 50,
                        verticalSpine * 50,
                        depthSpine * 50);

                    //PELVIS
                    float horizontalPelvis =
                        (_Data[idx].Joints[JointType.SpineBase].Position.X);
                    float verticalPelvis =
                        (_Data[idx].Joints[JointType.SpineBase].Position.Y);
                    float depthPelvis =
                        (_Data[idx].Joints[JointType.SpineBase].Position.Z);

                    cowboyPelvis.transform.position =
                        new Vector3(
                        horizontalPelvis * 50,
                        verticalPelvis * 50,
                        depthPelvis * 50);

                    //HIPS
                    float horizontalLeftThigh =
                        (_Data[idx].Joints[JointType.HipRight].Position.X);
                    float verticalLeftThigh =
                        (_Data[idx].Joints[JointType.HipRight].Position.Y);
                    float depthLeftThigh =
                        (_Data[idx].Joints[JointType.HipRight].Position.Z);

                    cowboyLeftThigh.transform.position =
                        new Vector3(
                        horizontalLeftThigh * 50,
                        verticalLeftThigh * 50,
                        depthLeftThigh * 50);

                    float horizontalRightThigh =
                        (_Data[idx].Joints[JointType.HipLeft].Position.X);
                    float verticalRightThigh =
                        (_Data[idx].Joints[JointType.HipLeft].Position.Y);
                    float depthRightThigh =
                        (_Data[idx].Joints[JointType.HipLeft].Position.Z);

                    cowboyRightThigh.transform.position =
                        new Vector3(
                        horizontalRightThigh * 50,
                        verticalRightThigh * 50,
                        depthRightThigh * 50);




                    //KNEES
                    float horizontalLeftCalf =
                        (_Data[idx].Joints[JointType.KneeRight].Position.X);
                    float verticalLeftCalf =
                        (_Data[idx].Joints[JointType.KneeRight].Position.Y);
                    float depthLeftCalf =
                        (_Data[idx].Joints[JointType.KneeRight].Position.Z);

                    cowboyLeftCalf.transform.position =
                        new Vector3(
                        horizontalLeftCalf * 50,
                        verticalLeftCalf * 50,
                        depthLeftCalf * 50);

                    float horizontalRightCalf =
                        (_Data[idx].Joints[JointType.KneeLeft].Position.X);
                    float verticalRightCalf =
                        (_Data[idx].Joints[JointType.KneeLeft].Position.Y);
                    float depthRightCalf =
                        (_Data[idx].Joints[JointType.KneeLeft].Position.Z);

                    cowboyRightCalf.transform.position =
                        new Vector3(
                        horizontalRightCalf * 50,
                        verticalRightCalf * 50,
                        depthRightCalf * 50);

                    //ANKLE
                    float horizontalLeftAnkle =
                        (_Data[idx].Joints[JointType.AnkleRight].Position.X);
                    float verticalLeftAnkle =
                        (_Data[idx].Joints[JointType.AnkleRight].Position.Y);
                    float depthLeftAnkle =
                        (_Data[idx].Joints[JointType.AnkleRight].Position.Z);

                    cowboyLeftAnkle.transform.position =
                        new Vector3(
                        horizontalLeftAnkle * 50,
                        verticalLeftAnkle * 50,
                        depthLeftAnkle * 50);

                    float horizontalRightAnkle =
                        (_Data[idx].Joints[JointType.AnkleLeft].Position.X);
                    float verticalRightAnkle =
                        (_Data[idx].Joints[JointType.AnkleLeft].Position.Y);
                    float depthRightAnkle =
                        (_Data[idx].Joints[JointType.AnkleLeft].Position.Z);

                    cowboyRightAnkle.transform.position =
                        new Vector3(
                        horizontalRightAnkle * 50,
                        verticalRightAnkle * 50,
                        depthRightAnkle * 50);


                    //FEET
                    float horizontalLeftFoot =
                        (_Data[idx].Joints[JointType.FootRight].Position.X);
                    float verticalLeftFoot =
                        (_Data[idx].Joints[JointType.FootRight].Position.Y);
                    float depthLeftFoot =
                        (_Data[idx].Joints[JointType.FootRight].Position.Z);

                    cowboyLeftFoot.transform.position =
                        new Vector3(
                        horizontalLeftFoot * 50,
                        verticalLeftFoot * 50,
                        depthLeftFoot * 50);

                    float horizontalRightFoot =
                        (_Data[idx].Joints[JointType.FootLeft].Position.X);
                    float verticalRightFoot =
                        (_Data[idx].Joints[JointType.FootLeft].Position.Y);
                    float depthRightFoot =
                        (_Data[idx].Joints[JointType.FootLeft].Position.Z);

                    cowboyRightFoot.transform.position =
                        new Vector3(
                        horizontalRightFoot * 50,
                        verticalRightFoot * 50,
                        depthRightFoot * 50);

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
