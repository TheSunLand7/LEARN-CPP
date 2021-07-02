/*In this file we discuss how strings works in c++
COMMENTS BELOW ARE IN SPANISH*/

#include <iostream>
#include <string>

//STRINGS: Es un grupo de caracteres que incluye letras, numeros, simbolos. Es basicamente texto.
//String tiene un constructor que toma un 'const char[]'.

//Cuando pasamos un string como parametro, debemnos colocarlo como referencia y si va a ser 'read-only',
//    se le debe agregar 'const', por que si no lo hacemos, este solo creara una copia del string y crear una 
//    copia a un string significa asignat un espacio de memoria en el heap un nuevo arreglo de caracteres y
//    asignar el texto que tenemos.
void PrintString (const std::string& string) {
	std::cout << string << std::endl;
}

int main() {
	//Si definimos a los caracteres with "", por defecto se convierte en 'char*'.
	//const char* name = "Arlo";
	
	//Esto es un array de 4 caracteres.
	//Si imprimimos el siguiente array va a imprimir 'Arlo°°°°' mas otros caracteres, porque el
	//    'std::cout' no sabe donde terminar de imprimir, por eso se le agrega '\0' que indica el final.
	//char name2[5] = {'A', 'r', 'l', 'o', '\0'};

	//No se puede anexar dos strings en una misma variable, porque no se apuede anexar dos arrays.
	//Para lograrlo podemos hacer los siguiente:
	std::string name2 = std::string("Arlo") + " hello";
	
	//Si la palabra 'lo' no esta en una posicion ilegal.
	bool contains = name2.find("lo") != std::string::npos;

	std::cout << name2 << std::endl;

	std::cin.get(); return 0;
}