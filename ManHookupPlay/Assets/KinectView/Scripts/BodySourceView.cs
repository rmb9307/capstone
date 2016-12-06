using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using Kinect = Windows.Kinect;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using UnityEngine.SceneManagement;

using System.Xml.Serialization;
using System.Xml;
using System.IO;
using System;

public class BodySourceView : MonoBehaviour
{
    public Material BoneMaterial;
    public GameObject BodySourceManager;
    public Dropdown ModeDropdown;
    public Dropdown SceneDropdown;
    public Dropdown ActionDropdown;
    public GameObject YogaStudio;
    public GameObject BasketballCourt;
    public GameObject Gym;
    public Dropdown ModelDropdown;
    public GameObject Female;
    public GameObject Ogre;
    public GameObject Male;
    private GameObject[] bubbles;
    private bool bubbleBoyShowing = true;


    private Dictionary<ulong, GameObject> _Bodies = new Dictionary<ulong, GameObject>();
    private BodySourceManager _BodyManager;

    private Dictionary<Kinect.JointType, Kinect.JointType> _BoneMap = new Dictionary<Kinect.JointType, Kinect.JointType>()
    {
        { Kinect.JointType.FootLeft, Kinect.JointType.AnkleLeft },
        { Kinect.JointType.AnkleLeft, Kinect.JointType.KneeLeft },
        { Kinect.JointType.KneeLeft, Kinect.JointType.HipLeft },
        { Kinect.JointType.HipLeft, Kinect.JointType.SpineBase },

        { Kinect.JointType.FootRight, Kinect.JointType.AnkleRight },
        { Kinect.JointType.AnkleRight, Kinect.JointType.KneeRight },
        { Kinect.JointType.KneeRight, Kinect.JointType.HipRight },
        { Kinect.JointType.HipRight, Kinect.JointType.SpineBase },

        { Kinect.JointType.HandTipLeft, Kinect.JointType.HandLeft },
        { Kinect.JointType.ThumbLeft, Kinect.JointType.HandLeft },
        { Kinect.JointType.HandLeft, Kinect.JointType.WristLeft },
        { Kinect.JointType.WristLeft, Kinect.JointType.ElbowLeft },
        { Kinect.JointType.ElbowLeft, Kinect.JointType.ShoulderLeft },
        { Kinect.JointType.ShoulderLeft, Kinect.JointType.SpineShoulder },

        { Kinect.JointType.HandTipRight, Kinect.JointType.HandRight },
        { Kinect.JointType.ThumbRight, Kinect.JointType.HandRight },
        { Kinect.JointType.HandRight, Kinect.JointType.WristRight },
        { Kinect.JointType.WristRight, Kinect.JointType.ElbowRight },
        { Kinect.JointType.ElbowRight, Kinect.JointType.ShoulderRight },
        { Kinect.JointType.ShoulderRight, Kinect.JointType.SpineShoulder },

        { Kinect.JointType.SpineBase, Kinect.JointType.SpineMid },
        { Kinect.JointType.SpineMid, Kinect.JointType.SpineShoulder },
        { Kinect.JointType.SpineShoulder, Kinect.JointType.Neck },
        { Kinect.JointType.Neck, Kinect.JointType.Head },
    };

    private Dictionary<Kinect.JointType, float> jointSizes = new Dictionary<Kinect.JointType, float>() {
        { Kinect.JointType.Head, 3.0f },
        { Kinect.JointType.Neck, 2.0f },

    };

    enum Mode { Recording, Playing, Live };
    private Mode mode = Mode.Playing;
    private bool actuallyRecord = true;
   

    void Update () 
    {
        

        //getting values from scene dropdown and setting visibility
        int selectedRoom = SceneDropdown.value;
        if(selectedRoom == 0)
        {
            Gym.gameObject.SetActive(false);
            BasketballCourt.gameObject.SetActive(false);
            YogaStudio.gameObject.SetActive (true);

        }
        if (selectedRoom == 1)
        {
            Gym.gameObject.SetActive(false);
            YogaStudio.gameObject.SetActive(false);
            BasketballCourt.gameObject.SetActive(true);
        }
        if (selectedRoom == 2)
        {
            YogaStudio.gameObject.SetActive(false);
            BasketballCourt.gameObject.SetActive(false);
            Gym.gameObject.SetActive(true);
        }

        //getting values from model dropdown and setting visibility of those models
        int selectedModel = ModelDropdown.value;
        bool showBubble = true;
        GameObject activeModel = null;
        if (selectedModel == 0)
        {
            showBubble = true;
            Female.gameObject.SetActive(false);
            Ogre.gameObject.SetActive(false);
            Male.gameObject.SetActive(false);
            activeModel = null;
        }
        if (selectedModel == 1)
        {
            showBubble = false;
            Female.gameObject.SetActive(true);
            Ogre.gameObject.SetActive(false);
            Male.gameObject.SetActive(false);
            activeModel = Female;
        }
        if (selectedModel == 2)
        {
            showBubble = false;
            Female.gameObject.SetActive(false);
            Ogre.gameObject.SetActive(false);
            Male.gameObject.SetActive(true);
            activeModel = Male;
        }
        if (selectedModel == 3)
        {
            showBubble = false;
            Female.gameObject.SetActive(false);
            Ogre.gameObject.SetActive(true);
            Male.gameObject.SetActive(false);
            activeModel = Ogre;
        }
        //getting values from mode dropdown ans setting play/record/live
//        int selectedIdx = ModeDropdown.value;
//        if (selectedIdx == 1)
//        {
//            mode = Mode.Recording;
//            actuallyRecord = true;
//        }
//        else if (selectedIdx == 2)
//        {
//            mode = Mode.Playing;
//        }
//        else if (selectedIdx == 0)
//        {
//            mode = Mode.Live;
//            actuallyRecord = false;
//        }

            if (mode == Mode.Recording || mode== Mode.Live) {
            if (BodySourceManager == null)
            {
                return;
            }

            _BodyManager = BodySourceManager.GetComponent<BodySourceManager>();
            if (_BodyManager == null)
            {
                return;
            }

            Kinect.Body[] data = _BodyManager.GetData();
            if (data == null)
            {
                return;
            }

            List<ulong> trackedIds = new List<ulong>();
            foreach (var body in data)
            {
                if (body == null)
                {
                    continue;
                }

                if (body.IsTracked)
                {
                    trackedIds.Add(body.TrackingId);
                }
            }

            List<ulong> knownIds = new List<ulong>(_Bodies.Keys);

            // First delete untracked bodies
            foreach (ulong trackingId in knownIds)
            {
                if (!trackedIds.Contains(trackingId))
                {
                    Destroy(_Bodies[trackingId]);
                    _Bodies.Remove(trackingId);
                }
            }

            NewFrame();
            foreach (var body in data)
            {
                if (body == null)
                {
                    continue;
                }

                if (body.IsTracked)
                {
                    if (!_Bodies.ContainsKey(body.TrackingId))
                    {
                        _Bodies[body.TrackingId] = CreateBodyObject(body.TrackingId);
                    }
                    toggleBubbles(showBubble);
                    if (bubbleBoyShowing)
                    {
                        RefreshBodyObject(body, _Bodies[body.TrackingId]);
                    }
                    AddBodyToFrame(body);
                }
            }
            WriteFrame();

        }
        else
        {
            ActionDropdown.onValueChanged.AddListener(delegate
            {
                loadedRecording = null;
                //Debug.Log("in onchange");
                throw new Exception("Switching play streams, throwing error only way to do it apparently");

            });
            if (loadedRecording == null)
            {
                loadedRecording = LoadRecording();
                frameNo = 0;
            }

            if (tick++ % 4 != 0)
            {
                return;
            }

            if (loadedRecording.frames.Count <= frameNo)
            {
                frameNo = 0;
            }

            var frame = loadedRecording.frames[frameNo++];

            //toggleBubbles(showBubble);

            foreach (var body in _Bodies)
            {
                var trackingId = body.Key;
                if (frame.bodies.Find(b => b.TrackingId == trackingId) == null)
                {
                    // Dispose of the body.
                    Destroy(_Bodies[trackingId]);
                    _Bodies.Remove(trackingId);
                }
            }

            int modelCounter = 0;

            foreach (var body in frame.bodies)
            {
                if (!_Bodies.ContainsKey(body.TrackingId))
                {
                    _Bodies[body.TrackingId] = CreateBodyObject(body.TrackingId);
                }
                toggleBubbles(showBubble);
                RefreshBodyRecordedData(body, _Bodies[body.TrackingId]);
                if (modelCounter == 0)
                {
                    if (activeModel != null)
                    {
                        activeModel.GetComponent<cowboyMove>().moveModelWithRecord(body);
                        modelCounter++;
                    }
                }
            }
            // ReadNextFrame(body);  
            

        }
    }

    private int frameNo;
    private int tick = 0;

    private BodyRecording.Frame frame;
    private void NewFrame()
    {
        frame = new BodyRecording.Frame();
    }

    private XmlSerializer serializer = new XmlSerializer(typeof(BodyRecording));
    private BodyRecording xmlRecording = new BodyRecording();

    private BodyRecording.Frame.Body AddBodyToFrame(Kinect.Body body)
    {
        var xmlBody = new BodyRecording.Frame.Body();
        frame.bodies.Add(xmlBody);
        for (Kinect.JointType jt = Kinect.JointType.SpineBase; jt <= Kinect.JointType.ThumbRight; jt++)
        {
            var vec = GetVector3FromJoint(body.Joints[jt]);
            xmlBody.Joints[(int)jt].Position = vec;
            xmlBody.Joints[(int)jt].Name = jt.ToString();
        }
        xmlBody.TrackingId = body.TrackingId;
        return xmlBody;
    }
   
   

    private void WriteFrame()
    {
        if (!actuallyRecord) return;

        string filename = Path.Combine(Application.persistentDataPath, "body_recording.xml");
        using (var stream = new FileStream(filename, FileMode.OpenOrCreate))
        {
            xmlRecording.frames.Add(frame);
            serializer.Serialize(stream, xmlRecording);
        }
    }

    private BodyRecording loadedRecording = null;

    private BodyRecording LoadRecording()
    {
        Debug.Log("in load recording");
        string filename = ""; 
        int selectedAction = ActionDropdown.value;
        if (selectedAction == 0)
        {
            filename = "allieYoga2";
        }
        if (selectedAction == 1)
        {
            filename = "KhristianBasketball2";
        }
        if (selectedAction == 2)
        {
            filename = "ScoutLifting";
        }
       // string filename = Path.Combine(Application.persistentDataPath, "body_recording.xml");
		using (TextReader textReader = new StringReader(Resources.Load<TextAsset>(filename).text))
        //using (var stream = new FileStream(filename, FileMode.Open))
        {
            var recording = serializer.Deserialize(textReader) as BodyRecording ;
            return recording;
        }
    }


    private GameObject CreateBodyObject(ulong id)
    {
        GameObject body = new GameObject("Body:" + id);
        body.tag = "bubbleBody";

        for (Kinect.JointType jt = Kinect.JointType.SpineBase; jt <= Kinect.JointType.ThumbRight; jt++)
        {
            GameObject jointObj = GameObject.CreatePrimitive(PrimitiveType.Sphere);
            GameObject boneObj = GameObject.CreatePrimitive(PrimitiveType.Cylinder);

            float scale = 2f;
            if (jointSizes.ContainsKey(jt)) {
                scale = jointSizes[jt];
            }
            jointObj.transform.localScale = new Vector3(scale, scale, scale);
            jointObj.name = jt.ToString();
            jointObj.transform.parent = body.transform;

            boneObj.name = jointObj.name + "Bone";
            boneObj.transform.parent = body.transform;
            boneObj.transform.localScale -= new Vector3 (0.5F, 0, 0.5F);
        }
        return body;
    }

    private void RefreshBodyRecordedData(BodyRecording.Frame.Body body, GameObject bodyObject)
    {
        var joints = body.Joints;

        var bones = new Dictionary<Kinect.JointType, BodyRecording.Frame.Body.Joint>();
        foreach (var joint in joints)
        {
            Kinect.JointType jt = (Kinect.JointType)Enum.Parse(typeof(Kinect.JointType), joint.Name);
            bones[jt] = joint;
        }

        foreach (var bone in bones) {
            var type = bone.Key;
            var joint = bone.Value;

            GameObject currentBone = GameObject.Find(joint.Name + "Bone");

            BodyRecording.Frame.Body.Joint targetJoint = null;
            if (_BoneMap.ContainsKey(type))
            {
                targetJoint = bones[_BoneMap[type]];
            }

            Vector3 position = joint.Position;
            Transform jointObj = bodyObject.transform.FindChild(joint.Name);
            jointObj.localPosition = position;

            if (targetJoint != null && currentBone != null)
            {
                //set postion to average joint position of two joint positions
                currentBone.transform.position = (jointObj.localPosition + targetJoint.Position) / 2;

                //look at next joint with z then rotate so that x is looking at ut
                currentBone.transform.LookAt(targetJoint.Position);
                currentBone.transform.Rotate(new Vector3 (90, 0, 0));

                //scale to appropriatelengeth
                float boneDistance = Vector3.Distance(jointObj.localPosition,targetJoint.Position);
                //create absolute value of distance
                if (boneDistance < 0) {
                    boneDistance *= -1;
                }
                currentBone.transform.localScale = new Vector3 (0.5F, boneDistance / 2, 0.5F);
            }
            else
            {
                Destroy (currentBone);
            }
        }
        
    }

    private void RefreshBodyObject(Kinect.Body body, GameObject bodyObject)
    {
        for (Kinect.JointType jt = Kinect.JointType.SpineBase; jt <= Kinect.JointType.ThumbRight; jt++)
        {
            Kinect.Joint sourceJoint = body.Joints[jt];
            Kinect.Joint? targetJoint = null;

            GameObject currentBone = GameObject.Find(jt + "Bone");

            if (_BoneMap.ContainsKey(jt))
            {
                targetJoint = body.Joints[_BoneMap[jt]];
            }

            Transform jointObj = bodyObject.transform.FindChild(jt.ToString());
            var vec = GetVector3FromJoint(sourceJoint);
            jointObj.localPosition = vec;

            if (targetJoint.HasValue)
            {
                //set postion to average joint position of two joint positions
                currentBone.transform.position = (jointObj.localPosition + GetVector3FromJoint(targetJoint.Value)) / 2;

                //look at next joint with z then rotate so that x is looking at ut
                currentBone.transform.LookAt(GetVector3FromJoint(targetJoint.Value));
                currentBone.transform.Rotate(new Vector3(90, 0, 0));

                //scale to appropriatelengeth
                float boneDistance = Vector3.Distance(jointObj.localPosition, GetVector3FromJoint(targetJoint.Value));
                //create absolute value of distance
                if (boneDistance < 0)
                {
                    boneDistance *= -1;
                }
                currentBone.transform.localScale = new Vector3(0.5F, boneDistance / 2, 0.5F);
            }
            else
            {
                Destroy(currentBone);
            }
        }
    }

    private static Vector3 GetVector3FromJoint(Kinect.Joint joint)
    {
        return new Vector3(joint.Position.X * 10, joint.Position.Y * 10, joint.Position.Z * 10);
    }

    private void toggleBubbles (bool showBubbles)
    {
        if(showBubbles != bubbleBoyShowing)
        {
            if (showBubbles)
            {
                foreach (var bub in bubbles)
                {
                    bub.gameObject.SetActive(showBubbles);
                }
                bubbleBoyShowing = true;

            }
            else
            {
                bubbles = GameObject.FindGameObjectsWithTag("bubbleBody");
                foreach (var bub in bubbles)
                {
                    bub.gameObject.SetActive(showBubbles);
                }
                bubbleBoyShowing = false;
            }
        }  
    }
}
