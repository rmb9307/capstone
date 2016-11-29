//using UnityEngine;
//using System.Collections;
//using System.Collections.Generic;
//using Kinect = Windows.Kinect;

//using System.Xml.Serialization;
//using System.Xml;
//using System.IO;


//public class VideoReader : MonoBehaviour
//{
//    public Material BoneMaterial;
//    public GameObject BodySourceManager;

//    private Dictionary<ulong, GameObject> _Bodies = new Dictionary<ulong, GameObject>();
//    private BodySourceManager _BodyManager;

//    private Dictionary<Kinect.JointType, Kinect.JointType> _BoneMap = new Dictionary<Kinect.JointType, Kinect.JointType>()
//    {
//        { Kinect.JointType.FootLeft, Kinect.JointType.AnkleLeft },
//        { Kinect.JointType.AnkleLeft, Kinect.JointType.KneeLeft },
//        { Kinect.JointType.KneeLeft, Kinect.JointType.HipLeft },
//        { Kinect.JointType.HipLeft, Kinect.JointType.SpineBase },

//        { Kinect.JointType.FootRight, Kinect.JointType.AnkleRight },
//        { Kinect.JointType.AnkleRight, Kinect.JointType.KneeRight },
//        { Kinect.JointType.KneeRight, Kinect.JointType.HipRight },
//        { Kinect.JointType.HipRight, Kinect.JointType.SpineBase },

//        { Kinect.JointType.HandTipLeft, Kinect.JointType.HandLeft },
//        { Kinect.JointType.ThumbLeft, Kinect.JointType.HandLeft },
//        { Kinect.JointType.HandLeft, Kinect.JointType.WristLeft },
//        { Kinect.JointType.WristLeft, Kinect.JointType.ElbowLeft },
//        { Kinect.JointType.ElbowLeft, Kinect.JointType.ShoulderLeft },
//        { Kinect.JointType.ShoulderLeft, Kinect.JointType.SpineShoulder },

//        { Kinect.JointType.HandTipRight, Kinect.JointType.HandRight },
//        { Kinect.JointType.ThumbRight, Kinect.JointType.HandRight },
//        { Kinect.JointType.HandRight, Kinect.JointType.WristRight },
//        { Kinect.JointType.WristRight, Kinect.JointType.ElbowRight },
//        { Kinect.JointType.ElbowRight, Kinect.JointType.ShoulderRight },
//        { Kinect.JointType.ShoulderRight, Kinect.JointType.SpineShoulder },

//        { Kinect.JointType.SpineBase, Kinect.JointType.SpineMid },
//        { Kinect.JointType.SpineMid, Kinect.JointType.SpineShoulder },
//        { Kinect.JointType.SpineShoulder, Kinect.JointType.Neck },
//        { Kinect.JointType.Neck, Kinect.JointType.Head },
//    };


//    void Update()
//    {
//        if (BodySourceManager == null)
//        {
//            return;
//        }

//        _BodyManager = BodySourceManager.GetComponent<BodySourceManager>();
//        if (_BodyManager == null)
//        {
//            return;
//        }

//        Kinect.Body[] data = _BodyManager.GetData(); //data we want to save 
//        if (data == null)
//        {
//            return;
//        }

//        List<ulong> trackedIds = new List<ulong>();
//        foreach (var body in data)
//        {
//            if (body == null)
//            {
//                continue;
//            }

//            if (body.IsTracked)
//            {
//                trackedIds.Add(body.TrackingId);
//            }
//        }

//        List<ulong> knownIds = new List<ulong>(_Bodies.Keys);

//        // First delete untracked bodies
//        foreach (ulong trackingId in knownIds)
//        {
//            if (!trackedIds.Contains(trackingId))
//            {
//                Destroy(_Bodies[trackingId]);
//                _Bodies.Remove(trackingId);
//            }
//        }

//        foreach (var body in data)
//        {
//            if (body == null)
//            {
//                continue;
//            }

//            if (body.IsTracked)
//            {
//                if (!_Bodies.ContainsKey(body.TrackingId))
//                {
//                    _Bodies[body.TrackingId] = CreateVideoFrames(body.TrackingId);
//                }

//                //RefreshBodyObject(body, _Bodies[body.TrackingId]);
//            }
//        }
//    }

//    private GameObject CreateVideoFrames(ulong id)
//    {
//        GameObject body = new GameObject("Body:" + id);

//        var jointTypeCollection = JointTypeContainer.Load(Path.Combine(Application.dataPath, "jointypes.xml"));

//        var xmlData = @"<JointTypeCollection><JointTypes><JointTypeName>" + Kinect.JointType.FootLeft + "</JointTypeName></JointTypes></JointTypeCollection>";
//        jointTypeCollection = JointTypeContainer.LoadFromText(xmlData);


//        jointTypeCollection.Save(Path.Combine(Application.persistentDataPath, "jointypes.xml"));

//        return body;
//    }




//}
