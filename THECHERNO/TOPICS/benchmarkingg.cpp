//
// Created by JaeZero on 2021.07.14 -- Wednesday at 23:56:23
//
// --> In this file we discuss about BENCHMARKING.
//
// COMMENTS BELOW ARE IN SPANISH
//
#include <iostream>
#include <memory>
#include <chrono>
#include <array>

#define ll long long
//BENCHMARKING: Comparacion del rendimiento de nuestro codigo 'pasado' con el 'actual'.

class Timer
{
private:
    std::chrono::system_clock::time_point m_StartTime, m_EndTime;
    ll start, end, duration;

public:
    Timer() { m_StartTime = std::chrono::high_resolution_clock::now(); }
    ~Timer() { Stop(); }
    void Stop()
    {
        //Con esta funcion dentro del destructor tendra el tiempo de vida que tenga el objeto.
        m_EndTime = std::chrono::high_resolution_clock::now();
        //Etsamos convirtiendo a m_StartTime a microsegundos.
        start = std::chrono::time_point_cast<std::chrono::microseconds>(m_StartTime).time_since_epoch().count();
        end = std::chrono::time_point_cast<std::chrono::microseconds>(m_EndTime).time_since_epoch().count();

        duration = end - start;
        double ms = duration * 0.001;

        std::cout << duration << " us(" << ms << " ms)\n";
    }
};

int main()
{
    /*int value = 0;
    {
        //Para ver la duracion de un determinado scope, creamos un objeto Timer dentro de ella.
        Timer timer;
        for (int i = 0; i < 1000000; ++i)
            value += 2;
    }

    std::cout << value << std::endl;*/

    //Ahora vamos a ver el rendimiento de un 'shared pointer' vs 'unique pointer'.

    struct Vector2
    {
        float x, y;
    };

    std::cout << "Make Shared!" << std::endl;
    {
        std::array<std::shared_ptr<Vector2>, 1000> SharedPtr;
        Timer timer; //Se coloca aqui porque queremos testear el for loop.
        for (int i = 0; i < SharedPtr.size(); ++i)
            SharedPtr[i] = std::make_shared<Vector2>();
    }

    std::cout << "New Shared!" << std::endl;

    {
        std::array<std::shared_ptr<Vector2>, 1000> SharedPtr;
        Timer timer;
        for (int i = 0; i < SharedPtr.size(); ++i)
            SharedPtr[i] = std::shared_ptr<Vector2>(new Vector2());
    }

    std::cout << "Make Unique!" << std::endl;

    {
        std::array<std::unique_ptr<Vector2>, 1000> SharedPtr;
        Timer timer;
        for (int i = 0; i < SharedPtr.size(); ++i)
            SharedPtr[i] = std::make_unique<Vector2>();
    }

    std::cin.get();
    return 0;
}