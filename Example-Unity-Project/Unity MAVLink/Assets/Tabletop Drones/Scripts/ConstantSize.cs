using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ConstantSize : MonoBehaviour
{
    // Size at 1m
    public float desiredSize = 0.1f;
    Transform cameraTransform;

    private void Awake()
    {
        cameraTransform = Camera.main.transform;
    }

    // Update is called once per frame
    void Update()
    {
        // Scale the size
        float distanceToCamera = Vector3.Distance(cameraTransform.position, transform.position);
        transform.localScale = distanceToCamera * desiredSize * Vector3.one;

        // Point at the camera
        transform.forward = cameraTransform.forward;
    }
}
