using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpawnPlataformas : MonoBehaviour
{

    public GameObject[] plataformas;

    public float timeSpawn = 1;
    public float repeatSpawn = 3;

    //private int plataformaRandom ;


    void Start()
    {
        InvokeRepeating("SpawnPlataforms", timeSpawn, repeatSpawn);
        Debug.Log(plataformas[0].transform.position.y);
    }


    public void SpawnPlataforms()
    {
        Vector3 spawnPosition = new Vector3(0, 0, 0);

        var plataforma = Random.Range(0, plataformas.Length);
        Debug.Log(plataforma);

        spawnPosition = new Vector3(plataformas[plataforma].transform.position.x, plataformas[plataforma].transform.position.y,  0);

        GameObject objetoPlataforma = Instantiate(plataformas[plataforma], spawnPosition, gameObject.transform.rotation);
    }
}
