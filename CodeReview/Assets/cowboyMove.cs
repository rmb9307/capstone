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
	void FixedUpdate () {
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
            
                    if (idx > -1) {
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

                      

                        //SPINE PARTS
                        cowboyPelvis.transform.position = SpineBase;
                        Vector3 PHeading = SpineMid - SpineBase;
                        Vector3 PDirection = PHeading/PHeading.magnitude;
                        cowboyPelvis.transform.up = PDirection;
                        cowboyPelvis.transform.RotateAround(cowboyPelvis.transform.position, cowboyPelvis.transform.up, 180);

                        cowboySpine.transform.position = SpineMid;
                        Vector3 SHeading = SpineShoulder - SpineMid;
                        Vector3 SDirection = SHeading/SHeading.magnitude;
                        cowboySpine.transform.up = SDirection;
                        cowboySpine.transform.RotateAround(cowboySpine.transform.position, cowboySpine.transform.up, 180);

                        cowboyChest.transform.position = SpineShoulder;
                        Vector3 CHeading = Neck - SpineShoulder;
                        Vector3 CDirection = CHeading/CHeading.magnitude;
                        cowboyChest.transform.up = CDirection;
                        cowboyChest.transform.RotateAround(cowboyChest.transform.position, cowboyChest.transform.up, 180);

                        cowboyNeck.transform.position = Neck;
                        Vector3 NHeading = Head - Neck;
                        Vector3 NDirection = NHeading/NHeading.magnitude;
                        cowboyNeck.transform.up = NDirection;
                        cowboyNeck.transform.RotateAround(cowboyNeck.transform.position, cowboyNeck.transform.up, 180);


                        //ARMS
                        cowboyLeftShoulder.transform.position = SpineShoulder;
                        Vector3 LSHeading = LeftShoulder - SpineShoulder;
                        Vector3 LSDirection = LSHeading/LSHeading.magnitude;
                        cowboyLeftShoulder.transform.up = LSDirection;
                        cowboyLeftShoulder.transform.RotateAround(cowboyLeftShoulder.transform.position, cowboyLeftShoulder.transform.up, 180);

                        cowboyRightShoulder.transform.position = SpineShoulder;
                        Vector3 RSHeading = RightShoulder - SpineShoulder;
                        Vector3 RSDirection = RSHeading/RSHeading.magnitude;
                        cowboyRightShoulder.transform.up = RSDirection;
                        cowboyRightShoulder.transform.RotateAround(cowboyRightShoulder.transform.position, cowboyRightShoulder.transform.up, 180);

                        cowboyLeftUpperarm.transform.position = LeftShoulder;
                        Vector3 LUAHeading = LeftElbow - LeftShoulder;
                        Vector3 LUADirection = LUAHeading/LUAHeading.magnitude;
                        cowboyLeftUpperarm.transform.up = LUADirection;
                        cowboyLeftUpperarm.transform.RotateAround(cowboyLeftUpperarm.transform.position, cowboyLeftUpperarm.transform.up, 180);

                        cowboyRightUpperarm.transform.position = RightShoulder;
                        Vector3 RUAHeading = RightElbow - RightShoulder;
                        Vector3 RUADirection = RUAHeading/RUAHeading.magnitude;
                        cowboyRightUpperarm.transform.up = RUADirection;
                        cowboyRightUpperarm.transform.RotateAround(cowboyRightUpperarm.transform.position, cowboyRightUpperarm.transform.up, 180);

                        cowboyLeftForearm.transform.position = LeftElbow;
                        Vector3 LFAHeading = LeftWrist - LeftElbow;
                        Vector3 LFADirection = LFAHeading/LFAHeading.magnitude;
                        cowboyLeftForearm.transform.up = LFADirection;
                        cowboyLeftForearm.transform.RotateAround(cowboyLeftForearm.transform.position, cowboyLeftForearm.transform.up, 180);

                        cowboyRightForearm.transform.position = RightElbow;
                        Vector3 RFAHeading = RightWrist - RightElbow;
                        Vector3 RFADirection = RFAHeading/RFAHeading.magnitude;
                        cowboyRightForearm.transform.up = RFADirection;
                        cowboyRightForearm.transform.RotateAround(cowboyRightForearm.transform.position, cowboyRightForearm.transform.up, 180);

                        cowboyLeftHand.transform.position = LeftWrist;
                        Vector3 LHHeading = LeftHandTip - LeftWrist;
                        Vector3 LHDirection = LHHeading/LHHeading.magnitude;
                        cowboyLeftHand.transform.up = LHDirection;
                        cowboyLeftHand.transform.RotateAround(cowboyLeftHand.transform.position, cowboyLeftHand.transform.up, 180);

                        cowboyRightHand.transform.position = RightWrist;
                        Vector3 RHHeading = RightHandTip - RightWrist;
                        Vector3 RHDirection = RHHeading/RHHeading.magnitude;
                        cowboyRightHand.transform.up = RHDirection;
                        cowboyRightHand.transform.RotateAround(cowboyRightHand.transform.position, cowboyRightHand.transform.up, 180);


                        //LEGS
                        cowboyLeftThigh.transform.position = LeftHip;
                        Vector3 LTHeading = LeftKnee - LeftHip;
                        Vector3 LTDirection = LTHeading/LTHeading.magnitude;
                        cowboyLeftThigh.transform.up = LTDirection;
                        cowboyLeftThigh.transform.RotateAround(cowboyLeftThigh.transform.position, cowboyLeftThigh.transform.up, 180);

                        cowboyRightThigh.transform.position = RightHip;
                        Vector3 RTHeading = RightKnee - RightHip;
                        Vector3 RTDirection = RTHeading/RTHeading.magnitude;
                        cowboyRightThigh.transform.up = RTDirection;
                        cowboyRightThigh.transform.RotateAround(cowboyRightThigh.transform.position, cowboyRightThigh.transform.up, 180);

                        cowboyLeftCalf.transform.position = LeftKnee;
                        Vector3 LCHeading = LeftAnkle - LeftKnee;
                        Vector3 LCDirection = LCHeading/LCHeading.magnitude;
                        cowboyLeftCalf.transform.up = LCDirection;
                        cowboyLeftCalf.transform.RotateAround(cowboyLeftCalf.transform.position, cowboyLeftCalf.transform.up, 180);

                        cowboyRightCalf.transform.position = RightKnee;
                        Vector3 RCHeading = RightAnkle - RightKnee;
                        Vector3 RCDirection = RCHeading/RCHeading.magnitude;
                        cowboyRightCalf.transform.up = RCDirection;
                        cowboyRightCalf.transform.RotateAround(cowboyRightCalf.transform.position, cowboyRightCalf.transform.up, 180);

                        cowboyLeftHeel.transform.position = LeftAnkle;
                        Vector3 LHLHeading = LeftFoot - LeftAnkle;
                        Vector3 LHLDirection = LHLHeading/LHLHeading.magnitude;
                        cowboyLeftHeel.transform.up = LHLDirection;
                        cowboyLeftHeel.transform.RotateAround(cowboyLeftHeel.transform.position, cowboyLeftHeel.transform.up, 180);

                        cowboyRightHeel.transform.position = RightAnkle;
                        Vector3 RHLHeading = RightFoot - RightAnkle;
                        Vector3 RHLDirection = RHLHeading/RHLHeading.magnitude;
                        cowboyRightHeel.transform.up = RHLDirection;
                        cowboyRightHeel.transform.RotateAround(cowboyRightHeel.transform.position, cowboyRightHeel.transform.up, 180);
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

    private static Vector3 GetVector3FromJoint(Windows.Kinect.Joint joint)
    {
        return new Vector3(joint.Position.X * 10, joint.Position.Y * 10, joint.Position.Z * 10);
    }
}

