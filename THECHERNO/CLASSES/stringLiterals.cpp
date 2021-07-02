//
// Created by JaeZero on 2021.07.01 -- Thursday at 00:38:41
//
// --> In this file we discuss about  String Literals.
//
// COMMENTS BELOW ARE IN SPANISH
//
#include <iostream>
#include <string>

//STRINGS LITERALS: Es una serie de caracteres dentro de doble comillas. Es una mirada mas
//    profunda de los strings. Estos pueden ser a lo maximo 16 caracteres.
//Siempre estan almacenados en memoria de solo lectura (stack).


int main() {
	//El 'char' es 1 byte por caracter.
	const char* name = u8"JaeZero";  //Puede ir el 'u8' o no tambien. representa al UTF-8.
	//Otros tipos de strings literals son:
	const wchar_t* name2 = L"Arlo";  //wide string literal. 2 bytes por caracter.
	const char16_t* name3 = u"Arlo";  //UTF-16 encoded string literal. 2 bytes por caracter.
	const char32_t* name4 = U"Arlo";  //UTF-32 encoded string literal. 4 bytes por caracter. 
	//Al final del dia el compilador decidira cuanto utlizar, pero frecuentemente windows usa 2 bytes y
	//Linux 4 bytes por caracter.


	//Para anexar strings con el operador '+' en una misma variable podemos utilizar:
	using namespace std::string_literals;

	std::string name0 = u8"Spot"s + " hello";
	//Wide string
	std::wstring name00 = L"Spot"s + L" hello";
	//utf-16 string literal
	std::u16string name01 = u"Spot"s + u" hello";
	//utf_32 string literal
	std::u32string name02 = U"Spot"s + U" hello";

	//Para ignorar caracteres de escape como '\ţ', '\n', etc. Nos permite escribir strings en 
	//varias lineas.
	const char* name03 = R"(Line1
	Line 2
	Line3)";

	std::cout << name03 << std::endl;

	//Dato adicional: en el modo ensamblaje el '-12' significa que la variable esta alocado en
	//    la memoria stack.
	std::cin.get(); return 0;
}