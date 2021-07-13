//
// Created by JaeZero on 2021.07.12 -- Monday at 21:39:12
//
// --> In this file we discuss about TIMING.
//
// COMMENTS BELOW ARE IN SPANISH
//
#include <iostream>
#include <chrono>
#include <thread>

//TIMING: ¿Como podemos contabilizar el tiempo que toma completar o ejecutar cierta linea de codigo.
//   Timing es muy util cuando queremos que algo pase en un determinado tiempo o para evaluar el
//    rendimiento y ver cuan rapido el codigo se ejecuta.

struct Timer
{

    std::chrono::system_clock::time_point start, end;
    std::chrono::duration<float> duration;

    Timer()
    {
        start = std::chrono::high_resolution_clock::now();
    }

    ~Timer()
    {
        end = std::chrono::high_resolution_clock::now();
        duration = end - start;

        float ms = duration.count() * 1000.0f;
        std::cout << "Timer took: " << ms << "ms " << std::endl;
    }
};

void PrintTime()
{
    Timer timer;
    for (int i = 0; i < 100; ++i)
        //El 'endl' toma mas tiempo, en ves de utilicemos \n.
        std::cout << "Hello\n"; // << std::endl;
}

int main()
{
#if 0
    using namespace std::literals::chrono_literals;
    //Nos da la hora actual. Para saber el tiempo que demora la ejecucion.
    auto start = std::chrono::high_resolution_clock::now();
    std::this_thread::sleep_for(1s);
    auto end = std::chrono::high_resolution_clock::now();

    std::chrono::duration<float> duration = end - start;
    std::cout << duration.count() << std::endl;
#endif
    PrintTime();

    std::cin.get();
    return 0;
}