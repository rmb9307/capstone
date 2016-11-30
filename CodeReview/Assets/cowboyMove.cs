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
                    //TRANSFORM
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

                    //ROTATE
                    //HANDS
                    float horizontalRotHandLeft =
                        (_Data[idx].JointOrientations[JointType.WristRight].Orientation.X);
                    float verticalRotHandLeft =
                        (_Data[idx].JointOrientations[JointType.WristRight].Orientation.Y);
                    float depthRotHandLeft =
                        (_Data[idx].JointOrientations[JointType.WristRight].Orientation.Z);

                    cowboyLeftHand.transform.rotation =
                        Quaternion.Euler(
                        horizontalRotHandLeft * 5,
                        verticalRotHandLeft * 5,
                        depthRotHandLeft * 5);

                    float horizontalRotHandRight =
                        (_Data[idx].JointOrientations[JointType.WristLeft].Orientation.X);
                    float verticalRotHandRight =
                        (_Data[idx].JointOrientations[JointType.WristLeft].Orientation.Y);
                    float depthRotHandRight =
                        (_Data[idx].JointOrientations[JointType.WristLeft].Orientation.Z);

                    cowboyRightHand.transform.rotation =
                        Quaternion.Euler(
                        horizontalRotHandRight * 5,
                        verticalRotHandRight * 5,
                        depthRotHandRight * 5);

                    //ELBOWS
                    float horizontalRotLeftForearm =
                        (_Data[idx].JointOrientations[JointType.ElbowRight].Orientation.X);
                    float verticalRotLeftForearm =
                        (_Data[idx].JointOrientations[JointType.ElbowRight].Orientation.Y);
                    float depthRotLeftForearm =
                        (_Data[idx].JointOrientations[JointType.ElbowRight].Orientation.Z);

                    cowboyLeftForearm.transform.rotation =
                        Quaternion.Euler(
                        horizontalRotLeftForearm * 5,
                        verticalRotLeftForearm * 5,
                        depthRotLeftForearm * 5);

                    float horizontalRotRightForearm =
                        (_Data[idx].JointOrientations[JointType.ElbowLeft].Orientation.X);
                    float verticalRotRightForearm =
                        (_Data[idx].JointOrientations[JointType.ElbowLeft].Orientation.Y);
                    float depthRotRightForearm =
                        (_Data[idx].JointOrientations[JointType.ElbowLeft].Orientation.Z);

                    cowboyRightForearm.transform.rotation =
                        Quaternion.Euler(
                        horizontalRotRightForearm * 5,
                        verticalRotRightForearm * 5,
                        depthRotRightForearm * 5);

                    //SHOULDERS
                    float horizontalRotLeftUpperarm =
                        (_Data[idx].JointOrientations[JointType.ShoulderRight].Orientation.X);
                    float verticalRotLeftUpperarm =
                        (_Data[idx].JointOrientations[JointType.ShoulderRight].Orientation.Y);
                    float depthRotLeftUpperarm =
                        (_Data[idx].JointOrientations[JointType.ShoulderRight].Orientation.Z);

                    cowboyLeftUpperarm.transform.rotation =
                        Quaternion.Euler(
                        horizontalRotLeftUpperarm * 5,
                        verticalRotLeftUpperarm * 5,
                        depthRotLeftUpperarm * 5);

                    float horizontalRotRightUpperarm =
                        (_Data[idx].JointOrientations[JointType.ShoulderLeft].Orientation.X);
                    float verticalRotRightUpperarm =
                        (_Data[idx].JointOrientations[JointType.ShoulderLeft].Orientation.Y);
                    float depthRotRightUpperarm =
                        (_Data[idx].JointOrientations[JointType.ShoulderLeft].Orientation.Z);

                    cowboyRightUpperarm.transform.rotation =
                        Quaternion.Euler(
                        horizontalRotRightUpperarm * 5,
                        verticalRotRightUpperarm * 5,
                        depthRotRightUpperarm * 5);

                    //NECK
                    float horizontalRotNeck =
                        (_Data[idx].JointOrientations[JointType.Neck].Orientation.X);
                    float verticalRotNeck =
                        (_Data[idx].JointOrientations[JointType.Neck].Orientation.Y);
                    float depthRotNeck =
                        (_Data[idx].JointOrientations[JointType.Neck].Orientation.Z);

                    cowboyNeck.transform.rotation =
                        Quaternion.Euler(
                        horizontalRotNeck * 5,
                        verticalRotNeck * 5,
                        depthRotNeck * 5);

                    //HEAD
                    float horizontalRotHead =
                        (_Data[idx].JointOrientations[JointType.Head].Orientation.X);
                    float verticalRotHead =
                        (_Data[idx].JointOrientations[JointType.Head].Orientation.Y);
                    float depthRotHead =
                        (_Data[idx].JointOrientations[JointType.Head].Orientation.Z);

                    cowboyHead.transform.rotation =
                        Quaternion.Euler(
                        horizontalRotHead * 5,
                        verticalRotHead * 5,
                        depthRotHead * 5);

                    //SPINE
                    float horizontalRotSpine =
                        (_Data[idx].JointOrientations[JointType.SpineMid].Orientation.X);
                    float verticalRotSpine =
                        (_Data[idx].JointOrientations[JointType.SpineMid].Orientation.Y);
                    float depthRotSpine =
                        (_Data[idx].JointOrientations[JointType.SpineMid].Orientation.Z);

                    cowboySpine.transform.rotation =
                        Quaternion.Euler(
                        horizontalRotSpine * 5,
                        verticalRotSpine * 5,
                        depthRotSpine * 5);

                    //PELVIS
                    float horizontalRotPelvis =
                        (_Data[idx].JointOrientations[JointType.SpineBase].Orientation.X);
                    float verticalRotPelvis =
                        (_Data[idx].JointOrientations[JointType.SpineBase].Orientation.Y);
                    float depthRotPelvis =
                        (_Data[idx].JointOrientations[JointType.SpineBase].Orientation.Z);

                    cowboyPelvis.transform.rotation =
                        Quaternion.Euler(
                        horizontalRotPelvis * 5,
                        verticalRotPelvis * 5,
                        depthRotPelvis * 5);

                    //HIPS
                    float horizontalRotLeftThigh =
                        (_Data[idx].JointOrientations[JointType.HipRight].Orientation.X);
                    float verticalRotLeftThigh =
                        (_Data[idx].JointOrientations[JointType.HipRight].Orientation.Y);
                    float depthRotLeftThigh =
                        (_Data[idx].JointOrientations[JointType.HipRight].Orientation.Z);

                    cowboyLeftThigh.transform.rotation =
                        Quaternion.Euler(
                        horizontalRotLeftThigh * 5,
                        verticalRotLeftThigh * 5,
                        depthRotLeftThigh * 5);

                    float horizontalRotRightThigh =
                        (_Data[idx].JointOrientations[JointType.HipLeft].Orientation.X);
                    float verticalRotRightThigh =
                        (_Data[idx].JointOrientations[JointType.HipLeft].Orientation.Y);
                    float depthRotRightThigh =
                        (_Data[idx].JointOrientations[JointType.HipLeft].Orientation.Z);

                    cowboyRightThigh.transform.rotation =
                        Quaternion.Euler(
                        horizontalRotRightThigh * 5,
                        verticalRotRightThigh * 5,
                        depthRotRightThigh * 5);

                    //KNEES
                    float horizontalRotLeftCalf =
                        (_Data[idx].JointOrientations[JointType.KneeRight].Orientation.X);
                    float verticalRotLeftCalf =
                        (_Data[idx].JointOrientations[JointType.KneeRight].Orientation.Y);
                    float depthRotLeftCalf =
                        (_Data[idx].JointOrientations[JointType.KneeRight].Orientation.Z);

                    cowboyLeftCalf.transform.rotation =
                        Quaternion.Euler(
                        horizontalRotLeftCalf * 5,
                        verticalRotLeftCalf * 5,
                        depthRotLeftCalf * 5);

                    float horizontalRotRightCalf =
                        (_Data[idx].JointOrientations[JointType.KneeLeft].Orientation.X);
                    float verticalRotRightCalf =
                        (_Data[idx].JointOrientations[JointType.KneeLeft].Orientation.Y);
                    float depthRotRightCalf =
                        (_Data[idx].JointOrientations[JointType.KneeLeft].Orientation.Z);

                    cowboyRightCalf.transform.rotation =
                        Quaternion.Euler(
                        horizontalRotRightCalf * 5,
                        verticalRotRightCalf * 5,
                        depthRotRightCalf * 5);

                    //FEET
                    float horizontalRotLeftFoot =
                        (_Data[idx].JointOrientations[JointType.AnkleRight].Orientation.X);
                    float verticalRotLeftFoot =
                        (_Data[idx].JointOrientations[JointType.AnkleRight].Orientation.Y);
                    float depthRotLeftFoot =
                        (_Data[idx].JointOrientations[JointType.AnkleRight].Orientation.Z);

                    cowboyLeftFoot.transform.rotation =
                        Quaternion.Euler(
                        horizontalRotLeftFoot * 5,
                        verticalRotLeftFoot * 5,
                        depthRotLeftFoot * 5);

                    float horizontalRotRightFoot =
                        (_Data[idx].JointOrientations[JointType.AnkleLeft].Orientation.X);
                    float verticalRotRightFoot =
                        (_Data[idx].JointOrientations[JointType.AnkleLeft].Orientation.Y);
                    float depthRotRightFoot =
                        (_Data[idx].JointOrientations[JointType.AnkleLeft].Orientation.Z);

                    cowboyRightFoot.transform.rotation =
                        Quaternion.Euler(
                        horizontalRotRightFoot * 5,
                        verticalRotRightFoot * 5,
                        depthRotRightFoot * 5);

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
