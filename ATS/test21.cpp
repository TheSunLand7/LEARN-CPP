#include <iostream>

/*EJERCICIO DE FUNCIONES 7
Ejercicio 7: Intercambiar el valor de 2 variables utilizando paso de parámetros 
por referencia.
void exchange(int&, int&);
int main () {
	int num1, num2;
	std::cout << "Please enter 2 numbers separated by space: "; std::cin >> num1 >> num2;
	std::cout << "Valor anterior de a es: " << num1 << std::endl;
	std::cout << "Valor anterior de b es: " << num2 << std::endl;
	
	exchange(num1, num2);
	//Si no utilizamos la referencia (alias) el valor original no cambia, lo que hace
	// es sacar una copia y cambiar esa copia. En cambio la referencia no hace una
	// copia del valor de la variable, modifica el valor original de la variable.
	std::cout << "\nValor posterior de a es: " << num1 << std::endl;
	std::cout << "Valor posterior de b es: " << num2 << std::endl;
	
	std::cin.get();
	return 0;
}

void exchange(int &a, int &b) {
	int aux;
	aux = a;
	a = b;
	b = aux;
	std::cout << "Valor retornado por exchange(num1, num2) es: " << a << ", " << b; 	
}
*/

/*EJERCICIO DE FUNCIONES 8
Ejercicio 8: Escriba una función nombrada cambio() que tenga un parámetro en número 
entero y seis parámetros de referencia en número entero nombrados cien, cincuenta, 
veinte, diez, cinco y uno, respectivamente. La función tiene que considerar el valor 
entero transmitido como una cantidad en dólares y convertir el valor en el número 
menor de billetes equivalentes.

void cambio(int, int&, int&, int&, int&, int&, int&);
int main() {
	int number, cien=0, fifty=0, veinte=0, ten=0, five=0, uno=0;
	std::cout << "Please enter a count: "; std::cin >> number;
	
	cambio(number, cien, fifty, veinte, ten, five, uno);
	
	std::cout << "We need money of: " << number << std::endl;
	std::cout << "\nOf $100: " << cien << std::endl;
	std::cout << "Of $50: " << fifty << std::endl;
	std::cout << "Of $20: " << veinte << std::endl;
	std::cout << "Of $10: " << ten << std::endl;
	std::cout << "Of $5: " << five << std::endl;
	std::cout << "Of $1: " << uno << std::endl;
	
	std::cin.get();
	return 0;
}

void cambio(int number, int &cien, int &fifty, int &veinte, int &ten, int &five, int &uno) {
	
	cien = number / 100; number %= 100;
	fifty = number / 50; number %= 50;
	veinte = number / 20; number %= 20;
	ten = number / 10; number %= 10;
	five = number / 5;
	uno = number % 5; 
}
*/

/*EJERCICIO DE FUNCIONES 9
Ejercicio 9: Escriba una función nombrada tiempo() que tenga un parámetro en número entero 
llamado totalSeg y tres parámetros de referencia enteros nombrados horas, min y seg. 
La función es convertir el número de segundos transmitido en un número equivalente de horas, 
minutos y segundos

void tiempo(int, int&, int&, int&);
int main() {
	int totalSeg, horas=0, min=0, seg=0;
	
	std::cout << "Please enter the number of seconds you want: "; std::cin >> totalSeg;
	
	tiempo(totalSeg, horas, min, seg);
	
	std::cout << "\nThe total hours, min and secs converted of " << totalSeg <<  " secs AFTER are: " << std::endl;
	std::cout << "hours: " << horas << "h" << std::endl;
	std::cout << "minutes: " << min << "m" << std::endl;
	std::cout << "seconds: " << seg << "s" << std::endl;
	
	
	std::cin.get();
	return 0;
}

void tiempo(int totalSeg, int &horas, int &min, int &seg) {
	horas = totalSeg / 3600; totalSeg %= 3600;
	min = totalSeg / 60;
	seg = totalSeg % 60;	
}
*/

/*EJERCICIO DE FUNCIONES 10
 Ejercicio 10: Escriba una función nombrada calc_años() que tenga un parámetro entero que represente 
	el número total de días desde la fecha 1/1/2000 y parámetros de referencia nombrados año, mes y día. 
	La función es calcular el año, mes y día actual para el número dado de días que se le transmitan. 
	Usando las referencias, la función deberá alterar en forma directa los argumentos respectivos en la 
	función que llama. Para este problema suponga que cada año tiene 365 días y cada mes tiene 30 días.*/

void calc_years(int, int&, int&, int&);
int main() {
	
	int totalDays, yearInit=2000, year=0, mes=1, dia=1;
	
	std::cout << "Please enter the number of days you want: "; std::cin >> totalDays;
	calc_years(totalDays, year, mes, dia);
	
	std::cout << "\nThe year, month and day for " << totalDays << " are: " << std::endl;
	
	std::cout << "\nYear: " << year + yearInit << std::endl;
	
	switch (mes) {
		case 0:
		case 1:
			std::cout << "Month: January" << std::endl; break;
		case 2:
			std::cout << "Month: February" << std::endl; break;
		case 3:
			std::cout << "Month: March" << std::endl; break;
		case 4:
			std::cout << "Month: April" << std::endl; break;
		case 5:
			std::cout << "Month: May" << std::endl; break;
		case 6:
			std::cout << "Month: June" << std::endl; break;
		case 7:
			std::cout << "Month: July" << std::endl; break;
		case 8:
			std::cout << "Month: August" << std::endl; break;
		case 9:
			std::cout << "Month: September" << std::endl; break;
		case 10:
			std::cout << "Month: October" << std::endl; break;
		case 11:
			std::cout << "Month: November" << std::endl; break;
		case 12:
			std::cout << "Month: December" << std::endl; break;
	}
	 
	if (dia == 0) {
			++dia;
			std::cout << "Day: " << dia << std::endl;
	} else 
		std::cout << "Day: " << dia << std::endl;
	
	std::cin.get();
	return 0;
}

void calc_years(int totalDays, int &year, int &mes, int &dia) {
	year = totalDays / 365; totalDays %= 365;
	mes = totalDays / 30;
	dia = totalDays % 30;
	
}
