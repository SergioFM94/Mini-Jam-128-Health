using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FollowCamera : MonoBehaviour
{

    public GameObject jugador;
    public GameObject camara;

    private float posicionCamara;
    private float posicionY;


    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        posicionY = jugador.transform.position.y;
        posicionCamara = posicionY; 
    }
}
