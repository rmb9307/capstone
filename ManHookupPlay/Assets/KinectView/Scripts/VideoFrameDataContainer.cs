using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using Kinect = Windows.Kinect;

using System.Xml.Serialization;
using System.Xml;
using System.IO;
using System.Linq;

[XmlRoot("BodyRecording")]
public class BodyRecording
{
    [XmlArray("Frames")]
    [XmlArrayItem("Frame")]
    public List<Frame> frames = new List<Frame>();

    public class Frame
    {
        [XmlArray("Bodies")]
        [XmlArrayItem("Body")]
        public List<Body> bodies = new List<Body>();

        public class Body
        {
            [XmlArray("Joints")]
            [XmlArrayItem("Joint")]
            public Joint[] Joints = Enumerable
                .Range(0, (int) Kinect.JointType.ThumbRight + 1)
                .Select(i => new Joint())
                .ToArray();
 
            public ulong TrackingId;

            public class Joint
            {
                public string Name;
                public Vector3 Position;
            }

        }
    };
    //public void Save(string path)
    //{
    //    var serializer = new XmlSerializer(typeof(JointTypeContainer));
    //    using (var stream = new FileStream(path, FileMode.Create))
    //    {
    //        serializer.Serialize(stream, this);
    //    }
    //}

    //public static JointTypeContainer Load(string path)
    //{
    //    var serializer = new XmlSerializer(typeof(JointTypeContainer));
    //    using (var stream = new FileStream(path, FileMode.Open))
    //    {
    //        return serializer.Deserialize(stream) as JointTypeContainer;
    //    }
    //}

    //public static JointTypeContainer LoadFromText(string text)
    //{
    //    var serializer = new XmlSerializer(typeof(JointTypeContainer));
    //    return serializer.Deserialize(new StringReader(text)) as JointTypeContainer;
    //}

}
