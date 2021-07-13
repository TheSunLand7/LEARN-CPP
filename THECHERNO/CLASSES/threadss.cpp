//
// Created by JaeZero on 2021.07.09 -- Friday at 23:48:26
//
// --> In this file we discuss about THREADS.
//
// COMMENTS BELOW ARE IN SPANISH
//
#include <iostream>
#include <thread>
//THREADS: Te permite 'ramifucar' funciones o ejecuciones; es decir, en un programa normal, se ejecuta linea
//    por linea hasta que el programa finalice.Con 'threads' podemos hacer que un simbolo se ejecute o no,
//    independientemente de que otros simbolos se esten ejecutando.
//La funcion principal de thread es la optimizacion, pero no es la unica.

static bool s_Working = false;
void DoWork()
{
    using namespace std::literals::chrono_literals;
    std::cout << "Started thread id: " << std::this_thread::get_id() << std::endl;
    while (!s_Working)
    {
        std::cout << "Waiting for you..." << std::endl;
        std::this_thread::sleep_for(1s);
    }
}
int main()
{
    //Creamos nuestro thread(hilo).
    //El thread se ejecutara, y por consiguiente, la funcion 'DoWork' se ejecuta y se mantendra ejecutandose
    //    hasta que esperamos a que se termine.
    std::thread worker(DoWork);
    std::cin.get();
    s_Working = true;
    //La manera de esperar a que algo termine o esperar a que un 'thread' complete su trabajo, es con la funcion
    //    'join()'.
    //Lo que hace 'join' es preguntar: ¿Puedes esperar en el thread actual(worker) para que 'este' thread (DoWork)
    //    termine su trabajo? Bloquea el thread actual(worker) hasta que el otro thread(DoWork) se complete.
    worker.join();

    //Como estos threads se estan ejecutando en paralelo, tenemos un thread principal, que inicia el thread 'worker',
    //    que hace su trabajo y luego cuando llamamos 'join', lo que estamos diciendo es que en el thread principal
    //    se debe esperar a que el thread worker termine toda su ejecucion antes de continuar en lo que estaba
    //    haciendo el thread principal.
    //En otras palabras, el 'std::cin.get()' no se ejecutara hasta que todo lo que esta en la funcion no se termine.
    std::cout << "Finished!" << std::endl;
    std::cout << "Started thread id: " << std::this_thread::get_id() << std::endl;

    std::cin.get();
    return 0;
}