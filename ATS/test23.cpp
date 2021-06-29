#include <iostream>
// Working with structures.

/*EJERCICIO DE FUNCIONES 17
struct Complejo {
	float real, imaginaria;
}z1, z2;

void getData();

//Se crea una funcion de tipo estructura, porque se va a retornar una estructura.
Complejo suma(Complejo, Complejo);
void showResult(Complejo);

int main() {
	getData();
	Complejo x = suma(z1, z2);  // Se crea una variable mas en la estructura para almacenar el resultado.
	showResult(x);
	
	std::cin.get();
	return 0;
}

void getData() {
	
	std::cout << "Please enter numbers for first variable: " << std::endl;
	std::cout << "Real number: "; std::cin >> z1.real;
	std::cout << "Imagine number: "; std::cin >> z1.imaginaria;

	std::cout << "Please enter numbers for second variable: " << std::endl;
	std::cout << "Real number: "; std::cin >> z2.real;
	std::cout << "Imagine number: "; std::cin >> z2.imaginaria;
}

Complejo suma(Complejo z1, Complejo z2) {  // z1, z2 can be whatever variable you want!
	z1.real += z2.real;
	z1.imaginaria += z2.imaginaria;

	return z1; //Solo en z1 se guardan los datos.
}

void showResult(Complejo x) {
	std::cout <<"The real and imagine number is: "<< x.real << ", " << x.imaginaria << std::endl;

}
*/

/*EJERCICIO DE FUNCIONES 18
 * Ejercicio 18: Escriba una función en C++ llamada mayor() que devuelva la fecha más reciente de
 * cualquier par de fechas que se le transmitan. Por ejemplo, si se transmiten las fechas 10/9/2005 y
 * 11/3/2015 a mayor(), será devuelta la segunda fecha.
struct Dates {
	int day, month, year;
}d1,d2;

void getData();
Dates compare(Dates, Dates);
void showResult(Dates);

int main() {
	getData();
	Dates m = compare(d1, d2);
	showResult(m);
	
	std::cin.get();
	return 0;
}

void getData() {
	std::cout << "Please enter the first date: " << std::endl;
	std::cout << "Day: "; std::cin >> d1.day;
	std::cout << "Month: "; std::cin >> d1.month;
	std::cout << "Year: "; std::cin >> d1.year;

	std::cout << "\nPlease enter the second date: " << std::endl;
	std::cout << "Day: "; std::cin >> d2.day;
	std::cout << "Month: "; std::cin >> d2.month;
	std::cout << "Year: "; std::cin >> d2.year;
}

Dates compare(Dates d1, Dates d2) {
	if (d1.year == d2.year) {
		if (d1.month == d2.month) {
			if (d1.day == d2.day)
				std::cout << "\nBoth dates are equals!" << std::endl;
			else if (d1.day > d2.day)
				return d1;
			else
				return d2;
		} else if (d1.month > d2.month)
			return d1; 
	} else if (d1.year > d2.year)
		return d1;
	return d2;
	
}

void showResult(Dates d) {
	std::cout << "\nThe greater date is: " << std::endl;
	std::cout << "Year: " << d.year << std::endl;
	std::cout << "Month: " << d.month << std::endl;
	std::cout << "Day: " << d.day << std::endl;
}
*/

/*EJERCICIO DE FUNCIONES 19
 * Ejercicio 19: Realice una función recursiva que sume los primeros n enteros positivos.
int sum(int);

int main() {
	int number;

	do {
		std::cout << "Please enter a non-negative number: "; std::cin >> number;
	} while(number <= 0);

	std::cout << "\nThe sum of first n numbers is: " << sum(number) << std::endl;
	
	std::cin.get();
	return 0;
}

int sum(int n) {
	int suma = 0;

	if (n == 1)
		suma = 1;
	else
		suma = n + sum(n-1);

	return suma;
}
*/

/*EJERCICIO DE FUNCIONES 20
 * Ejercicio 20: Realice una función recursiva para la serie Fibonacci
int finobacci(int);

int main() {
	int number, m = 0;
	do {
		std::cout << "Please enter a non-negative number: "; std::cin >> number;
	} while(number < 0);

	//IMPORTANT!
	for (int i = 0; i <= number; ++i) {
		std:: cout << " " << finobacci(m);
		++m;
	}
	

	std::cin.get();
	return 0;
}

int finobacci(int n) {

	if (n == 0 || n == 1) {
		return n;
	} else {
		return finobacci(n-1) + finobacci(n-2); 
	}
	// 0 1 1 2 3 5 8
}
*/


/*EJERCICIO DE FUNCIONES 22
 * Ejercicio 22: Escriba una función escribeNumeros(int ini, int fin) que devuelva en
 * la salida estándar los números del ini al fin. Escriba una versión que escriba los números
 * en orden ascendente
int writeNumbers(int, int);

int main() {
	int ini, fin, m = 0, n = 1;

	do {
		std::cout << "Please enter a init non-negative number: "; std::cin >> ini;
		std::cout << "Please enter a final non-negative number: "; std::cin >> fin;
	} while(ini < 0 && fin < 0);

	for (int i = ini; i <= fin; ++i) {
		std::cout << " " << writeNumbers(i, fin);
	}
	std::cin.get();
	return 0;
}

int writeNumbers(int ini, int fin) {
	if (fin == ini)  // 4 5 6 7 8 9 10
		return ini;
	else {
		return writeNumbers(ini, fin - 1);
	}
}
*/
