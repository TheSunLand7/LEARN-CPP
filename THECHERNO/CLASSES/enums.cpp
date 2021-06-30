/*In this file we discuss enums */

#include <iostream>
//ENUMS: Esencialmente es un set de valores, es una manera de dar un nombre
//    a un valor.
//Por ejemplo, en ves de tener un grupo de integers A,B,C, podemos tener un 'enum'
//    que tiene los valores A,B,C; el cual corresponde a integers u otros tipos de datos.


// Si queremos designar un distnto tipo de dato debemos agregarlo despues de los
//     dos puntos.
//enum Example : unsigned char{
enum Example {
	// Por defecto, el valor de A es 0 y se incrementa en 1 en las demas
    // varibales.
    A, B, C
};

int main() {

	//Cuando se declara una variable de tipo enum se le debe asignar uno de sus elementos, de lo
	//    contrario saldra un error.
	Example value = B;

	if (value == 1) {
		//Do something
	}

	std::cin.get(); return 0;
}