#include <iostream>

/*PROTOTIPO DE LA FUNCION A UTILIZAR LATER
int numMax(int x, int y);
int main() {
	int n1,n2;
	std::cout << "Please enter 2 numbers separated by a space: "; std::cin >> n1 >> n2;
	std::cout << "The largest number from numbers you have entered is: "
				<< numMax(n1,n2) << std::endl;
	
	std::cin.get();
	return 0;
}

int numMax(int x, int y) {
	int numMay;
	if (x > y)
		numMay = x;
	else
		numMay = y;
	
	return numMay;
}
*/

/*PLANTILLAS DE FUNCIONES
* Estas plantillas nos sirven para aquellos problemas en el que no sabemos el tipo
	de dato que va a ser la funcion. Veamos el ejemplo: 

template <class TIPOD>
void valorAbs(TIPOD number);
int main () {
	int n1 = 4;
	float n2 = 5.23;
	double n3 = -34.3457912;
	
	// Two ways of doing this.
	valorAbs(n1);
	//valorAbs<int>(4);
	valorAbs(n2);
	//valorAbs<float>(5.22);
	valorAbs(n3);
	//valorAbs<double>(-23.3457932);
	
	std::cin.get();
	return 0;
}

template <class TIPOD>
void valorAbs(TIPOD number) {
	(number < 0) ? number *= -1:number;
	std::cout << "The abs value of the number entered is: " << number << std::endl;
}
*/

/*EJERCICIO DE FUNCIONES 1
 * Las funciones del tipo 'void' does not have return in it.
void getData();
void mult(float x, float y);

//We have to declare global variables to use it in whatever function.
float num1, num2;

int main () {
	getData(); 
	mult(num1,num2);
	
	std::cin.get();
	return 0;
}
void getData() {
	std::cout << "Please enter 2 numbers separated by a space: "; std::cin >> num1 >> num2;
}

void mult(float x, float y) {
	std::cout << "The product of " << x << " and " << y 
				<< " is: " << x * y << std::endl;
}
*/

/*EJERCICIO DE FUNCIONES 2
void getData();
void al_cuadrado(float m);

float number;
int main () {
	getData();
	al_cuadrado(number);
	
	std::cin.get();
	return 0;
}
void getData() {
	std::cout << "Please enter a number: "; std::cin >> number;
}

void al_cuadrado(float m) {
	std::cout << "The power 2 of " << m << " is: " << m * m << std::endl;
}
*/


/*EJERCICIO DE FUNCIONES 3
Ejercicio 3: Escriba una función nombrada funpot() que eleve un número entero que se 
le transmita a una potencia en número entero positivo y despliegue el resultado.
El número entero positivo deberá ser el segundo valor transmitido a la función

#include <cmath>
void getData();
void funpot(int b, int e);

int baseNumber, expoNumber;

int main () {
	
	getData();
	funpot(baseNumber, expoNumber);
	
	std::cin.get();
	return 0;
}

void getData() {
	std::cout << "Please enter the base number: "; std::cin >> baseNumber;
	std::cout << "Please enter the expo number: "; std::cin >> expoNumber;
}

void funpot(int b, int e) {
	int baseMult = 1;
	for (int i = 0; i < e; ++i) {
		baseMult *= b;
	}
	
	std::cout << "The " << e <<" power of " << b << " is: " 
				<< baseMult << std::endl;
}
*/

/*EJERCICIO DE FUNCIONES 4

Ejercicio 4: Escriba un programa en C++ que devuelva la parte fraccionaria de cualquier 
número introducido por el usuario. Por ejemplo, si se introduce el número 256.879, 
debería desplegarse el número 0.879

void getData();
float partFra(float n);

float number;
int main () {
	getData();
	std::cout << "Fraction part is: " << partFra(number) << std::endl;
	
	
	
	std::cin.get();
	return 0;
}
void getData() {
	std::cout << "Please enter a float number: "; std::cin >> number;
}

float partFra(float n) {
	int partEnt = n;
	float result = n - partEnt;
	return result;
	
}
*/

/*EJERCICIO DE FUNCIONES 6

Ejercicio 6: Escriba una plantilla de función llamada maximo() que devuelva el valor 
máximo de tres argumentos que se transmitan a la función cuando sea llamada. 
Suponga que los tres argumentos serán del mismo tipo de datos.*/

template <typename ALLIN>
void maximo(ALLIN d1, ALLIN d2, ALLIN d3);
int main () {
	
	maximo<int>(3, 5, 7);
	maximo<float>(4.56, 7.12, 5.83);
	maximo<char>('l', 'b', 'p');
	
	
	std::cin.get();
	return 0;
}

template <typename ALLIN>
void maximo(ALLIN d1, ALLIN d2, ALLIN d3) {
	if (d1 > d2 && d1 > d3)
		std::cout << "EL mayor de los 3 es: " << d1 << std::endl;
	else if (d2 > d1 && d2 > d3)
		std::cout << "EL mayor de los 3 es: " << d2 << std::endl;
	else
		std::cout << "EL mayor de los 3 es: " << d3 << std::endl;
}
