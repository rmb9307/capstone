using UnityEngine;
using System.Collections;
using Windows.Kinect;

public class ModelMove : MonoBehaviour {
    private KinectSensor _Sensor;
    private BodyFrameReader _Reader;
    private Body[] _Data = null;
    public GameObject modelLeftHand;
    public GameObject modelRightHand;
    public GameObject modelLeftForearm;
    public GameObject modelRightForearm;
    public GameObject modelLeftUpperarm;
    public GameObject modelRightUpperarm;
    public GameObject modelLeftThigh;
    public GameObject modelRightThigh;
    public GameObject modelLeftCalf;
    public GameObject modelRightCalf;
    public GameObject modelLeftHeel;
    public GameObject modelRightHeel;
    public GameObject modelLeftFoot;
    public GameObject modelRightFoot;
    public GameObject modelPelvis;
    public GameObject modelSpine;
    //public GameObject modelChest;
    public GameObject modelNeck;
    public GameObject modelHead;


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
                        ((_Data[idx].Joints[JointType.WristLeft].Position.X / 2) + (_Data[idx].Joints[JointType.HandTipLeft].Position.X / 2));
                    float verticalHandLeft =
                        ((_Data[idx].Joints[JointType.WristLeft].Position.Y / 2) + (_Data[idx].Joints[JointType.HandTipLeft].Position.Y / 2));
                    float depthHandLeft =
                        ((_Data[idx].Joints[JointType.WristLeft].Position.Z / 2) + (_Data[idx].Joints[JointType.HandTipLeft].Position.Z / 2));

                    modelLeftHand.transform.position =
                        new Vector3(
                        horizontalHandLeft * 5,
                        verticalHandLeft * 5,
                        depthHandLeft * 5);

                    float horizontalHandRight =
                        ((_Data[idx].Joints[JointType.WristRight].Position.X / 2) + (_Data[idx].Joints[JointType.HandTipRight].Position.X / 2));
                    float verticalHandRight =
                        ((_Data[idx].Joints[JointType.WristRight].Position.Y / 2) + (_Data[idx].Joints[JointType.HandTipRight].Position.Y / 2));
                    float depthHandRight =
                        ((_Data[idx].Joints[JointType.WristRight].Position.Z / 2) + (_Data[idx].Joints[JointType.HandTipRight].Position.Z / 2));

                    modelRightHand.transform.position =
                        new Vector3(
                        horizontalHandRight * 5,
                        verticalHandRight * 5,
                        depthHandRight * 5);

                    //ELBOWS
                    float horizontalLeftForearm =
                        ((_Data[idx].Joints[JointType.ElbowLeft].Position.X / 2) + (_Data[idx].Joints[JointType.WristLeft].Position.X / 2));
                    float verticalLeftForearm =
                        ((_Data[idx].Joints[JointType.ElbowLeft].Position.Y / 2) + (_Data[idx].Joints[JointType.WristLeft].Position.Y / 2));
                    float depthLeftForearm =
                        ((_Data[idx].Joints[JointType.ElbowLeft].Position.Z / 2) + (_Data[idx].Joints[JointType.WristLeft].Position.Z / 2));

                    modelLeftForearm.transform.position =
                        new Vector3(
                        horizontalLeftForearm * 5,
                        verticalLeftForearm * 5,
                        depthLeftForearm * 5);

                    float horizontalRightForearm =
                        ((_Data[idx].Joints[JointType.ElbowRight].Position.X / 2) + (_Data[idx].Joints[JointType.WristRight].Position.X / 2));
                    float verticalRightForearm =
                        ((_Data[idx].Joints[JointType.ElbowRight].Position.Y / 2) + (_Data[idx].Joints[JointType.WristRight].Position.Y / 2));
                    float depthRightForearm =
                        ((_Data[idx].Joints[JointType.ElbowRight].Position.Z / 2) + (_Data[idx].Joints[JointType.WristRight].Position.Z / 2));

                    modelRightForearm.transform.position =
                        new Vector3(
                        horizontalRightForearm * 5,
                        verticalRightForearm * 5,
                        depthRightForearm * 5);

                    //SHOULDERS
                    float horizontalLeftUpperarm =
                        ((_Data[idx].Joints[JointType.ShoulderLeft].Position.X / 2) + (_Data[idx].Joints[JointType.ElbowLeft].Position.X / 2));
                    float verticalLeftUpperarm =
                        ((_Data[idx].Joints[JointType.ShoulderLeft].Position.Y / 2) + (_Data[idx].Joints[JointType.ElbowLeft].Position.Y / 2));
                    float depthLeftUpperarm =
                        ((_Data[idx].Joints[JointType.ShoulderLeft].Position.Z / 2) + (_Data[idx].Joints[JointType.ElbowLeft].Position.Z / 2));

                    modelLeftUpperarm.transform.position =
                        new Vector3(
                        horizontalLeftUpperarm * 5,
                        verticalLeftUpperarm * 5,
                        depthLeftUpperarm * 5);

                    float horizontalRightUpperarm =
                        ((_Data[idx].Joints[JointType.ShoulderRight].Position.X / 2) + (_Data[idx].Joints[JointType.ElbowRight].Position.X / 2));
                    float verticalRightUpperarm =
                        ((_Data[idx].Joints[JointType.ShoulderRight].Position.Y / 2) + (_Data[idx].Joints[JointType.ElbowRight].Position.Y / 2));
                    float depthRightUpperarm =
                        ((_Data[idx].Joints[JointType.ShoulderRight].Position.Z / 2) + (_Data[idx].Joints[JointType.ElbowRight].Position.Z / 2));

                    modelRightUpperarm.transform.position =
                        new Vector3(
                        horizontalRightUpperarm * 5,
                        verticalRightUpperarm * 5,
                        depthRightUpperarm * 5);

                    //NECK
                    float horizontalNeck =
                        ((_Data[idx].Joints[JointType.SpineShoulder].Position.X / 2) + (_Data[idx].Joints[JointType.Neck].Position.X / 2));
                    float verticalNeck =
                        ((_Data[idx].Joints[JointType.SpineShoulder].Position.Y / 2) + (_Data[idx].Joints[JointType.Neck].Position.Y / 2));
                    float depthNeck =
                        ((_Data[idx].Joints[JointType.SpineShoulder].Position.Z / 2) + (_Data[idx].Joints[JointType.Neck].Position.Z / 2));

                    modelNeck.transform.position =
                        new Vector3(
                        horizontalNeck * 5,
                        verticalNeck * 5,
                        depthNeck * 5);

                    //HEAD
                    float horizontalHead =
                        ((_Data[idx].Joints[JointType.Neck].Position.X / 2) + (_Data[idx].Joints[JointType.Head].Position.X / 2));
                    float verticalHead =
                        ((_Data[idx].Joints[JointType.Neck].Position.Y / 2) + (_Data[idx].Joints[JointType.Head].Position.Y / 2));
                    float depthHead =
                        ((_Data[idx].Joints[JointType.Neck].Position.Z / 2) + (_Data[idx].Joints[JointType.Head].Position.Z / 2));

                    modelHead.transform.position =
                        new Vector3(
                        horizontalHead * 5,
                        verticalHead * 5,
                        depthHead * 5);

                    // //SPINE SHOULDERS
                    // float horizontalChest =
                    //     (_Data[idx].Joints[JointType.SpineShoulder].Position.X);
                    // float verticalChest =
                    //     (_Data[idx].Joints[JointType.SpineShoulder].Position.Y);
                    // float depthChest =
                    //     (_Data[idx].Joints[JointType.SpineShoulder].Position.Z);

                    // modelChest.transform.position =
                    //     new Vector3(
                    //     horizontalChest * 5,
                    //     verticalChest * 5,
                    //     depthChest * 5);

                    //SPINE
                    float horizontalSpine =
                        ((_Data[idx].Joints[JointType.SpineMid].Position.X / 2) + (_Data[idx].Joints[JointType.SpineShoulder].Position.X / 2));
                    float verticalSpine =
                        ((_Data[idx].Joints[JointType.SpineMid].Position.Y / 2) + (_Data[idx].Joints[JointType.SpineShoulder].Position.Y / 2));
                    float depthSpine =
                        ((_Data[idx].Joints[JointType.SpineMid].Position.Z / 2) + (_Data[idx].Joints[JointType.SpineShoulder].Position.Z / 2));

                    modelSpine.transform.position =
                        new Vector3(
                        horizontalSpine * 5,
                        verticalSpine * 5,
                        depthSpine * 5);

                    //PELVIS
                    float horizontalPelvis =
                        ((_Data[idx].Joints[JointType.SpineBase].Position.X / 2) + (_Data[idx].Joints[JointType.SpineMid].Position.X / 2));
                    float verticalPelvis =
                        ((_Data[idx].Joints[JointType.SpineBase].Position.Y / 2) + (_Data[idx].Joints[JointType.SpineMid].Position.Y / 2));
                    float depthPelvis =
                        ((_Data[idx].Joints[JointType.SpineBase].Position.Z / 2) + (_Data[idx].Joints[JointType.SpineMid].Position.Z / 2));

                    modelPelvis.transform.position =
                        new Vector3(
                        horizontalPelvis * 5,
                        verticalPelvis * 5,
                        depthPelvis * 5);

                    //HIPS
                    float horizontalLeftThigh =
                        (_Data[idx].Joints[JointType.HipLeft].Position.X);
                    float verticalLeftThigh =
                        (_Data[idx].Joints[JointType.HipLeft].Position.Y);
                    float depthLeftThigh =
                        (_Data[idx].Joints[JointType.HipLeft].Position.Z);

                    modelLeftThigh.transform.position =
                        new Vector3(
                        horizontalLeftThigh * 5,
                        verticalLeftThigh * 5,
                        depthLeftThigh * 5);

                    float horizontalRightThigh =
                        (_Data[idx].Joints[JointType.HipRight].Position.X);
                    float verticalRightThigh =
                        (_Data[idx].Joints[JointType.HipRight].Position.Y);
                    float depthRightThigh =
                        (_Data[idx].Joints[JointType.HipRight].Position.Z);

                    modelRightThigh.transform.position =
                        new Vector3(
                        horizontalRightThigh * 5,
                        verticalRightThigh * 5,
                        depthRightThigh * 5);

                    //KNEES
                    float horizontalLeftCalf =
                        (_Data[idx].Joints[JointType.KneeLeft].Position.X);
                    float verticalLeftCalf =
                        (_Data[idx].Joints[JointType.KneeLeft].Position.Y);
                    float depthLeftCalf =
                        (_Data[idx].Joints[JointType.KneeLeft].Position.Z);

                    modelLeftCalf.transform.position =
                        new Vector3(
                        horizontalLeftCalf * 5,
                        verticalLeftCalf * 5,
                        depthLeftCalf * 5);

                    float horizontalRightCalf =
                        (_Data[idx].Joints[JointType.KneeRight].Position.X);
                    float verticalRightCalf =
                        (_Data[idx].Joints[JointType.KneeRight].Position.Y);
                    float depthRightCalf =
                        (_Data[idx].Joints[JointType.KneeRight].Position.Z);

                    modelRightCalf.transform.position =
                        new Vector3(
                        horizontalRightCalf * 5,
                        verticalRightCalf * 5,
                        depthRightCalf * 5);

                    //ANKLES
                    float horizontalLeftHeel =
                        (_Data[idx].Joints[JointType.AnkleLeft].Position.X);
                    float verticalLeftHeel =
                        (_Data[idx].Joints[JointType.AnkleLeft].Position.Y);
                    float depthLeftHeel =
                        (_Data[idx].Joints[JointType.AnkleLeft].Position.Z);

                    modelLeftHeel.transform.position =
                        new Vector3(
                        horizontalLeftHeel * 5,
                        verticalLeftHeel * 5,
                        depthLeftHeel * 5);

                    float horizontalRightHeel =
                        (_Data[idx].Joints[JointType.AnkleRight].Position.X);
                    float verticalRightHeel =
                        (_Data[idx].Joints[JointType.AnkleRight].Position.Y);
                    float depthRightHeel =
                        (_Data[idx].Joints[JointType.AnkleRight].Position.Z);

                    modelRightHeel.transform.position =
                        new Vector3(
                        horizontalRightHeel * 5,
                        verticalRightHeel * 5,
                        depthRightHeel * 5);

                    //FEET
                    float horizontalLeftFoot =
                        (_Data[idx].Joints[JointType.AnkleLeft].Position.X);
                    float verticalLeftFoot =
                        (_Data[idx].Joints[JointType.AnkleLeft].Position.Y);
                    float depthLeftFoot =
                        (_Data[idx].Joints[JointType.AnkleLeft].Position.Z);

                    modelLeftFoot.transform.position =
                        new Vector3(
                        horizontalLeftFoot * 5,
                        verticalLeftFoot * 5,
                        depthLeftFoot * 5);

                    float horizontalRightFoot =
                        (_Data[idx].Joints[JointType.AnkleRight].Position.X);
                    float verticalRightFoot =
                        (_Data[idx].Joints[JointType.AnkleRight].Position.Y);
                    float depthRightFoot =
                        (_Data[idx].Joints[JointType.AnkleRight].Position.Z);

                    modelRightFoot.transform.position =
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
