//
// Created by 夏禹(XiàYǔ) on 2021.07.19 -- Monday at 22:34:52
//
// --> In this file we discuss about TRACK MEMORY ALLOCATIONS.
//
// COMMENTS BELOW ARE IN SPANISH
//
#include <iostream>
#include <memory>

//MEMORY ALLOCATION: Es importante conocer cuando nuestro programa reserva memoria en heap, porque sabiendo
//    eso podemos reducir su uso y optimizar para un rendimiento mejor del programa.

struct AllocatingMetrics
{
    uint32_t TotalAllocated = 0;
    uint32_t TotalFreed = 0;

    uint32_t CurrentUsage() { return TotalAllocated - TotalFreed; }
};

static AllocatingMetrics s_AllocatingMetrics;

void *operator new(size_t size)
{
    s_AllocatingMetrics.TotalAllocated += size;
    return malloc(size);
}

void operator delete(void *ptr, size_t size)
{
    s_AllocatingMetrics.TotalAllocated -= size;
    free(ptr);
}

void PrintMemoryUsage()
{
    std::cout << "Memory Usage: " << s_AllocatingMetrics.CurrentUsage() << " bytes" << std::endl;
}

struct Object
{
    int x, y, z;
};

int main()
{
    PrintMemoryUsage();
    std::string string = "Cherno";
    PrintMemoryUsage();
    {
        std::unique_ptr<Object> obj = std::make_unique<Object>();
        PrintMemoryUsage();
    }
    PrintMemoryUsage();

    std::cin.get();
    return 0;
}