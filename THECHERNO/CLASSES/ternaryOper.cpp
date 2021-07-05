//
// Created by JaeZero on 2021.07.02 -- Friday at 21:12:45
//
// --> In this file we discuss about Ternary Operators.
//
// COMMENTS BELOW ARE IN SPANISH
//
#include <iostream>

static int s_Level = 1;
static int s_Speed = 2;

int main() {

	if (s_Level > 5) {
		s_Speed = 10;
	} else {
		s_Speed = 5;
	}

	//Con el ternary operator podemos crear un 'if statement' con solo una linea.
	//Antes de los 2 puntos, el valor de la variable si la condicion es verdadada,
	//    depues de los 2 puntos, el valor de la variable si la condicion es falsa.
	s_Speed = (s_Level > 5) ? 10 : 5;

	//Otro ejemplo:
	//El codigo luce mas ordenado y limpio; ademas, es un poco mas rapido.
	std::string rank = (s_Level > 5) ? "Master" : "Beginner";


	std::cin.get(); return 0;
}