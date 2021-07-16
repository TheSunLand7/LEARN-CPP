//
// Created by JaeZero on 2021.07.15 -- Thursday at 22:59:55
//
// --> In this file we discuss about OPTIONAL DATA.
//
// COMMENTS BELOW ARE IN SPANISH
//
#include <iostream>
#include <fstream>
#include <experimental/optional> //Aun falta aclarar.

//OPTIONAL DATA: Nos permite trabajar con datos que podrian o no estar enla funcion. Un ejemplo, cuando
//    trabajamos con archivos, que tengan o no datos, y queremos que la funcion que lo cubre nos muestre
//    una salida. Solo disponible en c++17 en adelante.

std::experimental::optional<std::string> ReadFileAsString(const std::string &filePath)
{
    std::ifstream my_file(filePath);
    if (my_file)
    {
        std::string result;
        //read the file.
        my_file.close();
        return result;
    }

    return {};
}

int main()
{
    std::experimental::optional<std::string> data = ReadFileAsString("data.txt");
    //Si el archivo no se puede abrir, este mensaje se imprimira por defecto.
    std::string value = data.value_or("Not present!");
    std::cout << value << std::endl;
    //otro ejemplo.
    std::experimental::optional<int> count;
    int c = count.value_or(100);

    if (data)
    {
        std::cout << "File read successfully!\n";
    }
    else
    {
        std::cout << "File could not be opened!\n";
    }

    std::cin.get();
    return 0;
}