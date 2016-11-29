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
    public GameObject cowboyLeftShoulder;
    public GameObject cowboyRightShoulder;
    public GameObject cowboyLeftThigh;
    public GameObject cowboyRightThigh;
    public GameObject cowboyLeftCalf;
    public GameObject cowboyRightCalf;
    public GameObject cowboyLeftHeel;
    public GameObject cowboyRightHeel;
    public GameObject cowboyPelvis;
    public GameObject cowboySpine;
    public GameObject cowboyChest;
    public GameObject cowboyNeck;



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

                    Vector3 LeftHandTip = GetVector3FromJoint(_Data[idx].Joints[JointType.HandTipLeft]);
                    Vector3 RightHandTip = GetVector3FromJoint(_Data[idx].Joints[JointType.HandTipRight]);

                    Vector3 LeftWrist = GetVector3FromJoint(_Data[idx].Joints[JointType.WristLeft]);
                    Vector3 RightWrist = GetVector3FromJoint(_Data[idx].Joints[JointType.WristRight]);

                    Vector3 LeftElbow = GetVector3FromJoint(_Data[idx].Joints[JointType.ElbowLeft]);
                    Vector3 RightElbow = GetVector3FromJoint(_Data[idx].Joints[JointType.ElbowRight]);

                    Vector3 LeftShoulder = GetVector3FromJoint(_Data[idx].Joints[JointType.ShoulderLeft]);
                    Vector3 RightShoulder = GetVector3FromJoint(_Data[idx].Joints[JointType.ShoulderRight]);

                    Vector3 SpineShoulder = GetVector3FromJoint(_Data[idx].Joints[JointType.SpineShoulder]);
                    Vector3 Neck = GetVector3FromJoint(_Data[idx].Joints[JointType.Neck]);
                    Vector3 Head = GetVector3FromJoint(_Data[idx].Joints[JointType.Head]);

                    Vector3 SpineMid = GetVector3FromJoint(_Data[idx].Joints[JointType.SpineMid]);
                    Vector3 SpineBase = GetVector3FromJoint(_Data[idx].Joints[JointType.SpineBase]);

                    Vector3 LeftHip = GetVector3FromJoint(_Data[idx].Joints[JointType.HipLeft]);
                    Vector3 RightHip = GetVector3FromJoint(_Data[idx].Joints[JointType.HipRight]);

                    Vector3 LeftKnee = GetVector3FromJoint(_Data[idx].Joints[JointType.KneeLeft]);
                    Vector3 RightKnee = GetVector3FromJoint(_Data[idx].Joints[JointType.KneeRight]);

                    Vector3 LeftAnkle = GetVector3FromJoint(_Data[idx].Joints[JointType.AnkleLeft]);
                    Vector3 RightAnkle = GetVector3FromJoint(_Data[idx].Joints[JointType.AnkleRight]);

                    Vector3 LeftFoot = GetVector3FromJoint(_Data[idx].Joints[JointType.FootLeft]);
                    Vector3 RightFoot = GetVector3FromJoint(_Data[idx].Joints[JointType.FootRight]);

                    cowboyLeftHand.transform.position = LeftWrist;
                    cowboyLeftHand.transform.LookAt(LeftHandTip);
                    cowboyLeftHand.transform.Rotate(90, 0, 0);
                    cowboyLeftHand.transform.Rotate(0, -90, 0);

                    cowboyRightHand.transform.position = RightWrist;
                    cowboyRightHand.transform.LookAt(RightHandTip);
                    cowboyRightHand.transform.Rotate(90, 0, 0);
                    cowboyRightHand.transform.Rotate(0, -90, 0);

                    cowboyLeftForearm.transform.position = LeftElbow;
                    cowboyLeftForearm.transform.LookAt(LeftWrist);
                    cowboyLeftForearm.transform.Rotate(90, 0, 0);
                    cowboyLeftForearm.transform.Rotate(0, -90, 0);

                    cowboyRightForearm.transform.position = RightElbow;
                    cowboyRightForearm.transform.LookAt(RightWrist);
                    cowboyRightForearm.transform.Rotate(90, 0, 0);
                    cowboyRightForearm.transform.Rotate(0, -90, 0);

                    cowboyLeftUpperarm.transform.position = LeftShoulder;
                    cowboyLeftUpperarm.transform.LookAt(LeftElbow);
                    cowboyLeftUpperarm.transform.Rotate(90, 0, 0);
                    cowboyLeftUpperarm.transform.Rotate(0, -90, 0);

                    cowboyRightUpperarm.transform.position = RightShoulder;
                    cowboyRightUpperarm.transform.LookAt(RightElbow);
                    cowboyRightUpperarm.transform.Rotate(90, 0, 0);
                    cowboyRightUpperarm.transform.Rotate(0, -90, 0);

                    cowboyLeftShoulder.transform.position = SpineShoulder;
                    cowboyLeftShoulder.transform.LookAt(LeftShoulder);
                    cowboyLeftShoulder.transform.Rotate(90, 0, 0);
                    cowboyLeftShoulder.transform.Rotate(0, -90, 0);

                    cowboyRightShoulder.transform.position = SpineShoulder;
                    cowboyRightShoulder.transform.LookAt(RightShoulder);
                    cowboyRightShoulder.transform.Rotate(90, 0, 0);
                    cowboyRightShoulder.transform.Rotate(0, -90, 0);

                    cowboyChest.transform.position = SpineShoulder;
                    cowboyChest.transform.LookAt(Neck);
                    cowboyChest.transform.Rotate(90, 0, 0);
                    cowboyChest.transform.Rotate(0, -90, 0);

                    cowboyNeck.transform.position = Neck;
                    cowboyNeck.transform.LookAt(Head);
                    cowboyNeck.transform.Rotate(90, 0, 0);
                    cowboyNeck.transform.Rotate(0, -90, 0);


                    cowboySpine.transform.position = SpineMid;
                    cowboySpine.transform.LookAt(SpineShoulder);
                    cowboySpine.transform.Rotate(90, 0, 0);
                    cowboySpine.transform.Rotate(0, -90, 0);

                    cowboyPelvis.transform.position = SpineBase;
                    cowboyPelvis.transform.LookAt(SpineMid);
                    cowboyPelvis.transform.Rotate(90, 0, 0);
                    cowboyPelvis.transform.Rotate(0, -90, 0);

                    cowboyLeftThigh.transform.position = LeftHip;
                    cowboyLeftThigh.transform.LookAt(LeftKnee);
                    cowboyLeftThigh.transform.Rotate(90, 0, 0);
                    cowboyLeftThigh.transform.Rotate(0, -90, 0);

                    cowboyRightThigh.transform.position = RightHip;
                    cowboyRightThigh.transform.LookAt(RightKnee);
                    cowboyRightThigh.transform.Rotate(90, 0, 0);
                    cowboyRightThigh.transform.Rotate(0, -90, 0);

                    cowboyLeftCalf.transform.position = LeftKnee;
                    cowboyLeftCalf.transform.LookAt(LeftAnkle);
                    cowboyLeftCalf.transform.Rotate(90, 0, 0);
                    cowboyLeftCalf.transform.Rotate(0, -90, 0);

                    cowboyRightCalf.transform.position = RightKnee;
                    cowboyRightCalf.transform.LookAt(RightAnkle);
                    cowboyRightCalf.transform.Rotate(90, 0, 0);
                    cowboyRightCalf.transform.Rotate(0, -90, 0);

                    cowboyLeftHeel.transform.position = LeftAnkle;
                    cowboyLeftHeel.transform.LookAt(LeftFoot);
                    cowboyLeftHeel.transform.Rotate(90, 0, 0);
                    cowboyLeftHeel.transform.Rotate(0, -90, 0);

                    cowboyRightHeel.transform.position = RightAnkle;
                    cowboyRightHeel.transform.LookAt(LeftFoot);
                    cowboyRightHeel.transform.Rotate(90, 0, 0);
                    cowboyRightHeel.transform.Rotate(0, -90, 0);
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

    private static Vector3 GetVector3FromJoint(Windows.Kinect.Joint joint)
    {
        return new Vector3(joint.Position.X * 10, joint.Position.Y * 10, joint.Position.Z * 10);
    }
}

