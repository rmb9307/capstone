using UnityEngine;
using System.Collections;
using Windows.Kinect;

public class cowboyMove : MonoBehaviour {

    private KinectSensor _Sensor;
    private BodyFrameReader _Reader;
    private Body[] _Data = null;
    public GameObject cowboyLeftHandEnd;
    public GameObject cowboyRightHandEnd;
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
    public GameObject cowboyLeftFoot;
    public GameObject cowboyRightFoot;
    public GameObject cowboyPelvis;
    public GameObject cowboySpine;
    public GameObject cowboyChest;
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


                    cowboyLeftHandEnd.transform.position = LeftHandTip;
                    cowboyRightHandEnd.transform.position = RightHandTip;

                    cowboyLeftHand.transform.position = LeftWrist;
                    cowboyLeftUpperarm.transform.LookAt(LeftElbow);
                    cowboyRightHand.transform.position = RightWrist;
                    cowboyLeftUpperarm.transform.LookAt(LeftElbow);

                    cowboyLeftForearm.transform.position = LeftElbow;
                    cowboyLeftUpperarm.transform.LookAt(LeftElbow);
                    cowboyRightForearm.transform.position = RightElbow;
                    cowboyLeftUpperarm.transform.LookAt(LeftElbow);

                    cowboyLeftUpperarm.transform.position = LeftShoulder;
                    cowboyLeftUpperarm.transform.LookAt(LeftElbow);
                    cowboyRightUpperarm.transform.position = RightShoulder;
                    cowboyLeftUpperarm.transform.LookAt(RightElbow);

                    cowboyLeftShoulder.transform.position = SpineShoulder;
                    cowboyLeftUpperarm.transform.LookAt(LeftElbow);
                    cowboyRightShoulder.transform.position = SpineShoulder;
                    cowboyLeftUpperarm.transform.LookAt(LeftElbow);

                    cowboyChest.transform.position = SpineShoulder;
                    cowboyLeftUpperarm.transform.LookAt(LeftElbow);
                    cowboyNeck.transform.position = Neck;
                    cowboyLeftUpperarm.transform.LookAt(LeftElbow);
                    cowboyHead.transform.position = Head;

                    cowboySpine.transform.position = SpineMid;
                    cowboyLeftUpperarm.transform.LookAt(LeftElbow);
                    cowboyPelvis.transform.position = SpineBase;
                    cowboyLeftUpperarm.transform.LookAt(LeftElbow);

                    cowboyLeftThigh.transform.position = LeftHip;
                    cowboyLeftUpperarm.transform.LookAt(LeftElbow);
                    cowboyRightThigh.transform.position = RightHip;
                    cowboyLeftUpperarm.transform.LookAt(LeftElbow);

                    cowboyLeftCalf.transform.position = LeftKnee;
                    cowboyLeftUpperarm.transform.LookAt(LeftElbow);
                    cowboyRightCalf.transform.position = RightKnee;
                    cowboyLeftUpperarm.transform.LookAt(LeftElbow);

                    cowboyLeftHeel.transform.position = LeftAnkle;
                    cowboyLeftUpperarm.transform.LookAt(LeftElbow);
                    cowboyRightHeel.transform.position = RightAnkle;
                    cowboyLeftUpperarm.transform.LookAt(LeftElbow);

                    cowboyLeftFoot.transform.position = LeftFoot;
                    cowboyRightFoot.transform.position = RightFoot;
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

