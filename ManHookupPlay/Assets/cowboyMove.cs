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
                        horizontalHandLeft * 40,
                        verticalHandLeft * 40,
                        depthHandLeft * 40);

                    float horizontalHandRight =
                        (_Data[idx].Joints[JointType.HandLeft].Position.X);
                    float verticalHandRight =
                        (_Data[idx].Joints[JointType.HandLeft].Position.Y);
                    float depthHandRight =
                        (_Data[idx].Joints[JointType.HandLeft].Position.Z);

                    cowboyRightHand.transform.position =
                        new Vector3(
                        horizontalHandRight * 40,
                        verticalHandRight * 40,
                        depthHandRight * 40);

                    //WRISTS
                    float horizontalWristLeft =
                        (_Data[idx].Joints[JointType.WristRight].Position.X);
                    float verticalWristLeft =
                        (_Data[idx].Joints[JointType.WristRight].Position.Y);
                    float depthWristLeft =
                        (_Data[idx].Joints[JointType.WristRight].Position.Z);

                    cowboyLeftWrist.transform.position =
                        new Vector3(
                        horizontalWristLeft * 40,
                        verticalWristLeft * 40,
                        depthWristLeft * 40);

                    float horizontalWristRight =
                        (_Data[idx].Joints[JointType.WristLeft].Position.X);
                    float verticalWristRight =
                        (_Data[idx].Joints[JointType.WristLeft].Position.Y);
                    float depthWristRight =
                        (_Data[idx].Joints[JointType.WristLeft].Position.Z);

                    cowboyRightWrist.transform.position =
                        new Vector3(
                        horizontalWristRight * 40,
                        verticalWristRight * 40,
                        depthWristRight * 40);

                    //ELBOWS
                    float horizontalLeftForearm =
                        (_Data[idx].Joints[JointType.ElbowRight].Position.X);
                    float verticalLeftForearm =
                        (_Data[idx].Joints[JointType.ElbowRight].Position.Y);
                    float depthLeftForearm =
                        (_Data[idx].Joints[JointType.ElbowRight].Position.Z);

                    cowboyLeftForearm.transform.position =
                        new Vector3(
                        horizontalLeftForearm * 40,
                        verticalLeftForearm * 40,
                        depthLeftForearm * 40);

                    float horizontalRightForearm =
                        (_Data[idx].Joints[JointType.ElbowLeft].Position.X);
                    float verticalRightForearm =
                        (_Data[idx].Joints[JointType.ElbowLeft].Position.Y);
                    float depthRightForearm =
                        (_Data[idx].Joints[JointType.ElbowLeft].Position.Z);

                    cowboyRightForearm.transform.position =
                        new Vector3(
                        horizontalRightForearm * 40,
                        verticalRightForearm * 40,
                        depthRightForearm * 40);

                    //SHOULDERS
                    float horizontalLeftUpperarm =
                        (_Data[idx].Joints[JointType.ShoulderRight].Position.X);
                    float verticalLeftUpperarm =
                        (_Data[idx].Joints[JointType.ShoulderRight].Position.Y);
                    float depthLeftUpperarm =
                        (_Data[idx].Joints[JointType.ShoulderRight].Position.Z);

                    cowboyLeftUpperarm.transform.position =
                        new Vector3(
                        horizontalLeftUpperarm * 40,
                        verticalLeftUpperarm * 40,
                        depthLeftUpperarm * 40);

                    float horizontalRightUpperarm =
                        (_Data[idx].Joints[JointType.ShoulderLeft].Position.X);
                    float verticalRightUpperarm =
                        (_Data[idx].Joints[JointType.ShoulderLeft].Position.Y);
                    float depthRightUpperarm =
                        (_Data[idx].Joints[JointType.ShoulderLeft].Position.Z);

                    cowboyRightUpperarm.transform.position =
                        new Vector3(
                        horizontalRightUpperarm * 40,
                        verticalRightUpperarm * 40,
                        depthRightUpperarm * 40);

                    //NECK
                    float horizontalNeck =
                        (_Data[idx].Joints[JointType.Neck].Position.X);
                    float verticalNeck =
                        (_Data[idx].Joints[JointType.Neck].Position.Y);
                    float depthNeck =
                        (_Data[idx].Joints[JointType.Neck].Position.Z);

                    cowboyNeck.transform.position =
                        new Vector3(
                        horizontalNeck * 40,
                        verticalNeck * 40,
                        depthNeck * 40);

                    //HEAD
                    float horizontalHead =
                        (_Data[idx].Joints[JointType.Head].Position.X);
                    float verticalHead =
                        (_Data[idx].Joints[JointType.Head].Position.Y);
                    float depthHead =
                        (_Data[idx].Joints[JointType.Head].Position.Z);

                    cowboyHead.transform.position =
                        new Vector3(
                        horizontalHead * 40,
                        verticalHead * 40,
                        depthHead * 40);

                    //SPINE
                    float horizontalSpine =
                        (_Data[idx].Joints[JointType.SpineMid].Position.X);
                    float verticalSpine =
                        (_Data[idx].Joints[JointType.SpineMid].Position.Y);
                    float depthSpine =
                        (_Data[idx].Joints[JointType.SpineMid].Position.Z);

                    cowboySpine.transform.position =
                        new Vector3(
                        horizontalSpine * 40,
                        verticalSpine * 40,
                        depthSpine * 40);

                    //PELVIS
                    float horizontalPelvis =
                        (_Data[idx].Joints[JointType.SpineBase].Position.X);
                    float verticalPelvis =
                        (_Data[idx].Joints[JointType.SpineBase].Position.Y);
                    float depthPelvis =
                        (_Data[idx].Joints[JointType.SpineBase].Position.Z);

                    cowboyPelvis.transform.position =
                        new Vector3(
                        horizontalPelvis * 40,
                        verticalPelvis * 40,
                        depthPelvis * 40);

                    //HIPS
                    float horizontalLeftThigh =
                        (_Data[idx].Joints[JointType.HipRight].Position.X);
                    float verticalLeftThigh =
                        (_Data[idx].Joints[JointType.HipRight].Position.Y);
                    float depthLeftThigh =
                        (_Data[idx].Joints[JointType.HipRight].Position.Z);

                    cowboyLeftThigh.transform.position =
                        new Vector3(
                        horizontalLeftThigh * 40,
                        verticalLeftThigh * 40,
                        depthLeftThigh * 40);

                    float horizontalRightThigh =
                        (_Data[idx].Joints[JointType.HipLeft].Position.X);
                    float verticalRightThigh =
                        (_Data[idx].Joints[JointType.HipLeft].Position.Y);
                    float depthRightThigh =
                        (_Data[idx].Joints[JointType.HipLeft].Position.Z);

                    cowboyRightThigh.transform.position =
                        new Vector3(
                        horizontalRightThigh * 40,
                        verticalRightThigh * 40,
                        depthRightThigh * 40);




                    //KNEES
                    float horizontalLeftCalf =
                        (_Data[idx].Joints[JointType.KneeRight].Position.X);
                    float verticalLeftCalf =
                        (_Data[idx].Joints[JointType.KneeRight].Position.Y);
                    float depthLeftCalf =
                        (_Data[idx].Joints[JointType.KneeRight].Position.Z);

                    cowboyLeftCalf.transform.position =
                        new Vector3(
                        horizontalLeftCalf * 40,
                        verticalLeftCalf * 40,
                        depthLeftCalf * 40);

                    float horizontalRightCalf =
                        (_Data[idx].Joints[JointType.KneeLeft].Position.X);
                    float verticalRightCalf =
                        (_Data[idx].Joints[JointType.KneeLeft].Position.Y);
                    float depthRightCalf =
                        (_Data[idx].Joints[JointType.KneeLeft].Position.Z);

                    cowboyRightCalf.transform.position =
                        new Vector3(
                        horizontalRightCalf * 40,
                        verticalRightCalf * 40,
                        depthRightCalf * 40);

                    //ANKLE
                    float horizontalLeftAnkle =
                        (_Data[idx].Joints[JointType.AnkleRight].Position.X);
                    float verticalLeftAnkle =
                        (_Data[idx].Joints[JointType.AnkleRight].Position.Y);
                    float depthLeftAnkle =
                        (_Data[idx].Joints[JointType.AnkleRight].Position.Z);

                    cowboyLeftAnkle.transform.position =
                        new Vector3(
                        horizontalLeftAnkle * 40,
                        verticalLeftAnkle * 40,
                        depthLeftAnkle * 40);

                    float horizontalRightAnkle =
                        (_Data[idx].Joints[JointType.AnkleLeft].Position.X);
                    float verticalRightAnkle =
                        (_Data[idx].Joints[JointType.AnkleLeft].Position.Y);
                    float depthRightAnkle =
                        (_Data[idx].Joints[JointType.AnkleLeft].Position.Z);

                    cowboyRightAnkle.transform.position =
                        new Vector3(
                        horizontalRightAnkle * 40,
                        verticalRightAnkle * 40,
                        depthRightAnkle * 40);


                    //FEET
                    float horizontalLeftFoot =
                        (_Data[idx].Joints[JointType.FootRight].Position.X);
                    float verticalLeftFoot =
                        (_Data[idx].Joints[JointType.FootRight].Position.Y);
                    float depthLeftFoot =
                        (_Data[idx].Joints[JointType.FootRight].Position.Z);

                    cowboyLeftFoot.transform.position =
                        new Vector3(
                        horizontalLeftFoot * 40,
                        verticalLeftFoot * 40,
                        depthLeftFoot * 40);

                    float horizontalRightFoot =
                        (_Data[idx].Joints[JointType.FootLeft].Position.X);
                    float verticalRightFoot =
                        (_Data[idx].Joints[JointType.FootLeft].Position.Y);
                    float depthRightFoot =
                        (_Data[idx].Joints[JointType.FootLeft].Position.Z);

                    cowboyRightFoot.transform.position =
                        new Vector3(
                        horizontalRightFoot * 40,
                        verticalRightFoot * 40,
                        depthRightFoot * 40);

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
