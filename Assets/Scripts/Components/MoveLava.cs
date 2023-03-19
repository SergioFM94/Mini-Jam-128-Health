using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MoveLava : MonoBehaviour
{

    private Vector3 tempPos;
    public float velocidad;
    public GameObject jugador;
    private bool subirNivel = true;
    
    void Start()
    {
        
    }

    void Update()
    {

        if (Time.timeScale == 1)
        {
            tempPos = transform.position;
            for(float i = 0.01f; i < 3f; i++)
   
            tempPos.y += 0.01f + velocidad;
            transform.position = tempPos;
            AumentarVelocidad();
        }
        else
        {
            tempPos = transform.position;
        }

    }

    void AumentarVelocidad()
    {
        if (jugador.transform.position.y >= 150f && subirNivel == true)
        {
            velocidad = velocidad + 0.005f;
            Debug.Log(velocidad);
            subirNivel=false;
        }
    }
}
