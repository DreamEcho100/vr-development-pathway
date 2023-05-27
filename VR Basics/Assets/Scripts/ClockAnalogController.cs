using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ClockAnalogController : MonoBehaviour
{
	public GameObject secondHand;
    public GameObject minuteHand;
    public GameObject hourHand;

    // Start is called before the first frame update
    void Start()
    {
        InvokeRepeating(nameof(UpdateClock), 0, 1);
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void UpdateClock()
    {
        //float hourAngle = hourAngle = (System.DateTime.Now.Hour / 12f * 360f) + (System.DateTime.Now.Minute / 60f) * 30f;
        //float minuteAngle = System.DateTime.Now.Minute * (360 / 60);
        //float secondAngle = System.DateTime.Now.Second * (360 / 60);

        //hourHand.transform.localRotation = Quaternion.Euler(hourAngle, 0, 0);
        //minuteHand.transform.localRotation = Quaternion.Euler(minuteAngle, 0, 0);
        //secondHand.transform.localRotation = Quaternion.Euler(secondAngle, 0, 0);

        hourHand.transform.localRotation = Quaternion.Euler((System.DateTime.Now.Hour / 12f) * 360f + 90, 0, -90);
        minuteHand.transform.localRotation = Quaternion.Euler((System.DateTime.Now.Minute / 60f) * 360f + 90, 0, -90);
        secondHand.transform.localRotation = Quaternion.Euler((System.DateTime.Now.Second / 60f) * 360f + 90, 0, -90);
    }
}
