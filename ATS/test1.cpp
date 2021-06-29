#include <iostream>
#include <math.h>

using namespace std;

// Numeros romanos
// I = 1
// V = 5
// X = 10
// L = 50
// C = 100
// D = 500
// M = 1000
int main(){
	int number, unidades, decenas, centenas, millares;
	cout << "PLease enter a number (<4000): "; cin >> number;
	
	// Esta parte me falta entender del todo
	unidades = number%10; number /= 10;
	decenas = number%10; number /= 10;
	centenas = number%10; number /= 10;
	millares = number%10; number /= 10;
	
	cout << "Your number in romans is: ";
	
	switch (millares){
		case 1: cout << "M"; break;
		case 2: cout << "MM"; break;
		case 3: cout << "MMM"; break;
	}
	
	switch (centenas){
		case 1: cout << "C"; break;
		case 2: cout << "CC"; break;
		case 3: cout << "CCC"; break;
		case 4: cout << "CD"; break;
		case 5: cout << "D"; break;
		case 6: cout << "DC"; break;
		case 7: cout << "DCC"; break;
		case 8: cout << "DCCC"; break;
		case 9: cout << "CM"; break;
	}
	
	switch (decenas){
		case 1: cout << "X"; break;
		case 2: cout << "XX"; break;
		case 3: cout << "XXX"; break;
		case 4: cout << "XL"; break;
		case 5: cout << "L"; break;
		case 6: cout << "LX"; break;
		case 7: cout << "LXX"; break;
		case 8: cout << "LXXX"; break;
		case 9: cout << "XC"; break;
	}
	
	switch (unidades){
		case 1: cout << "I"; break;
		case 2: cout << "II"; break;
		case 3: cout << "III"; break;
		case 4: cout << "IV"; break;
		case 5: cout << "V"; break;
		case 6: cout << "VI"; break;
		case 7: cout << "VII"; break;
		case 8: cout << "VIII"; break;
		case 9: cout << "IX"; break;
	}
	
	system("cls");
	
	
	
	return 0;
}


