using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class PlayerMove : MonoBehaviour
{
    

    Rigidbody2D rb2D;

    [Header("Movimiento")]
    public float movimientoHorizontal = 0f;
    [SerializeField] private float velocidadDeMovimiento;
    [SerializeField] private float suavizadoDeMovimiento;
    private Vector3 velocidad = Vector3.zero;
    private bool mirandoDerecha = true;

    [Header("Salto")]
    [SerializeField] private float fuerzaSalto;
    [SerializeField] private LayerMask queEsSuelo;
    [SerializeField] private Transform controladorSuelo;
    [SerializeField] private Vector3 dimensionesCaja;
    [SerializeField] private bool enSuelo;
    private bool salto = false;

    [Header("Animación")]
    private Animator animator;
    private bool vivo = true;


    void Start()
    {
        rb2D = GetComponent<Rigidbody2D>();
        animator = GetComponentInChildren<Animator>();
    }

    void Update()
    {
       movimientoHorizontal = Input.GetAxisRaw("Horizontal") * velocidadDeMovimiento;
        
        //Animación de caminar
        if(Input.GetKeyDown("d") || Input.GetKeyDown("a") || Input.GetKeyDown("right") || Input.GetKeyDown("left"))
        {
            animator.SetTrigger("Caminar");

        }
        else if(Input.GetKeyUp("d") || Input.GetKeyUp("a") || Input.GetKeyUp("right") || Input.GetKeyUp("left"))
        {
            animator.SetTrigger("Idle");
        }

        //Animación de morir

        //Salto
        if (Input.GetButtonDown("Jump"))
        {
            salto = true;
        }

        Pause();

    }

    private void FixedUpdate()
    {
        enSuelo = Physics2D.OverlapBox(controladorSuelo.position, dimensionesCaja, 0f, queEsSuelo);
        //Mover
        Mover(movimientoHorizontal * Time.fixedDeltaTime, salto);

        salto = false;
    }

    private void Mover(float mover, bool saltar)
    {
        Vector3 velocidadObjetivo = new Vector2(mover,rb2D.velocity.y);
        rb2D.velocity = Vector3.SmoothDamp(rb2D.velocity, velocidadObjetivo, ref velocidad, suavizadoDeMovimiento);

        //Girar al personaje
        if(mover > 0 && !mirandoDerecha)
        {
            Girar();
        }else if(mover < 0 && mirandoDerecha)
        {
            Girar();
        }

        //Salto
        if(enSuelo && saltar && vivo)
        {
            enSuelo = false;
            rb2D.AddForce(new Vector2(0f, fuerzaSalto));
        }
    }

    //Función que gira el personaje
    private void Girar()
    {
        mirandoDerecha = !mirandoDerecha;
        Vector3 escala = transform.localScale;
        escala.x *= -1;
        transform.localScale = escala;
    }

    //Colisión del jugador con la lava, realiza la animación de morir y lleva a la pantalla de GameOver.
    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.gameObject.tag == "Win")
        {
            SceneManager.LoadScene(3);
        }

        if (collision.gameObject.tag == "Lava")
        {
            //Animación de Morir
            animator.SetTrigger("Morir");
            vivo = false;
            StartCoroutine(gameOverWait());
        }
    }


    //Corutina para que termine la animación de morir y pase a la escena Game Over.
    public IEnumerator gameOverWait()
    {
        yield return new WaitForSeconds(2);
        SceneManager.LoadScene(2);
    }

    public void Pause()
    {
        if (Input.GetKeyDown("p") || Input.GetKeyDown("escape"))
        {
            if (Time.timeScale == 1)
            {    //si la velocidad es 1
                Time.timeScale = 0;     //que la velocidad del juego sea 0
            }
            else if (Time.timeScale == 0)
            {   // si la velocidad es 0
                Time.timeScale = 1;     // que la velocidad del juego regrese a 1
            }
        }
    }

}
