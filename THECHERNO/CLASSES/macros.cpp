//
// Created by JaeZero on 2021.07.07 -- Wednesday at 22:42:08
//
// --> In this file we discuss about MACROS.
//
// COMMENTS BELOW ARE IN SPANISH
//
#include <iostream>
//Vamos a crear nuestra primera macro.
//Pude ser escrito en cualquier lugar del programa.
//#define WAIT std::cin.get() //No se debe definir macros como este, es estupido (the cherno).
#define Log(x) std::cout << x << std::endl;
//Tambien podemos crear macros multilineas. No debe haber un espacio despues del backslash.
#define MAIN            \
    int main()          \
    {                   \
        std::cin.get(); \
    }

//MACROS: Nos sirve para automatizar codigo, en el sentido de 'preprocessor' (#define).
//        Es como un espacio para editar codigo; es decir,  para que reemplace un codigo por algo mas.
//        Por ejemplo, con '#define WAIT std::string', se podra reemplazar todo los 'std::string' por WAIT.
//Pero no solo se trata de buscar/remmplazar como aparenta ser, sino que puede venir junto con argumentos,
//    parametros, variables, etc., de tal manera que podemos personalizar nuestro macro.
//Las macros son muy utiles en los que en el modo debug queremos que ejecute algo pero no en el modo release.
//    Esto funciona en Microsoft Visual Studio.

/*int main()
{
    Log("Hello!");

    std::cin.get();
    return 0;
}*/
MAIN