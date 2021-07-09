//
// Created by JaeZero on 2021.07.07 -- Wednesday at 18:28:59
//
// --> In this file we discuss about MULTIPLE RETURN VALUES.
//
// COMMENTS BELOW ARE IN SPANISH
//
#include <iostream>

//MULTIPLE RETURN VALUES: Hay muchas maneras de realizarlo: tuples, structures, arrays, and clases.

//INFORMACION EXTRAIDA DE: https://www.geeksforgeeks.org/how-to-return-multiple-values-from-a-function-in-c-or-cpp/

//USANDO ESTRUCTURAS.
/*#define greaterSmaller Struct
struct greaterSmaller
{
    int greater, smaller;
};

Struct findGreaterSmaller(int a, int b)
{
    Struct s;
    if (a > b)
    {
        s.greater = a;
        s.smaller = b;
    }
    else
    {
        s.greater = b;
        s.smaller = a;
    }

    return s;
}

// Driver code
int main()
{
    int x, y;
    Struct result;

    std::cout << "Enter two numbers separated by a space: ";
    std::cin >> x >> y;

    // The last two arguments are passed
    // by giving addresses of memory locations
    result = findGreaterSmaller(x, y);
    std::cout << "\nThe greater number is " << result.greater
              << " and the smaller number is " << result.smaller << std::endl;

    return 0;
}*/

//USANDO ARRAYS

// Store the greater element at 0th index
/*void findGreaterSmaller(int a, int b, int arr[])
{

    // Store the greater element at
    // 0th index of the array
    if (a > b)
    {
        arr[0] = a;
        arr[1] = b;
    }
    else
    {
        arr[0] = b;
        arr[1] = a;
    }
}

// Driver code
int main()
{
    int x, y;
    int arr[2];

    std::cout << "Enter two numbers separated by a space: ";
    std::cin >> x >> y;

    findGreaterSmaller(x, y, arr);

    std::cout << "\nThe greater number is " << arr[0]
              << " and the smaller number is " << arr[1] << std::endl;

    return 0;
}*/

//USANDO CLASES

/*class GreaterSmaller
{
public:
    int greater, smaller;
};

GreaterSmaller findGreaterSmaller(int a, int b)
{
    GreaterSmaller s;
    if (a > b)
    {
        s.greater = a;
        s.smaller = b;
    }
    else
    {
        s.greater = b;
        s.smaller = a;
    }

    return s;
}

// Driver code
int main()
{
    int x, y;
    GreaterSmaller result;

    std::cout << "Enter two numbers separated by a space: ";
    std::cin >> x >> y;

    // The last two arguments are passed
    // by giving addresses of memory locations
    result = findGreaterSmaller(x, y);
    std::cout << "\nThe greater number is " << result.greater
              << " and the smaller number is " << result.smaller << std::endl;

    return 0;
}*/

//USANDO STL TUPLE
#include <tuple>

std::tuple<int, int> findGreaterSmaller(int a, int b)
{
    if (a < b)
    {
        return std::make_tuple(a, b);
    }
    else
    {
        return std::make_tuple(b, a);
    }
}

// Driver code
int main()
{
    int x = 5, y = 8;
    int max, min;
    //tie() desempaqueta la tuple en variables separados.
    std::tie(min, max) = findGreaterSmaller(x, y);

    std::cout << "The greater number is " << max
              << " and the smaller number is " << min << std::endl;

    return 0;
}
