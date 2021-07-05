//
// Created by JaeZero on 2021.07.04 -- Sunday at 19:29:15
//
// --> In this file we discuss about OPERATORS AND OPERATOR OVERLOADING.
//
// COMMENTS BELOW ARE IN SPANISH
//
#include <iostream>

//OPERATORS: Son simbolos (+,-,/,*,etc.)que usamos usualmente en ves de una funcion para ejecutar algo.
//OPERATOR OVERLOADING: El termino 'overloading' en este sentido tiene el significado de: Dar un nuevo
//    significado a, agregar parametros o crear. En este caso, 'operator overloading' significa, que estamos
//    permitidos a definir o cambiar el comportamiento de un operador in nuestro programa.
//Pero al final final del dias, los operadores solo son funciones. Por ejemplo, en ves de dar un nombre a una
//    funcion como 'Add', podemos darle un operador como '+'.
//En muchos casos esto ayuda a limpiar tu codigo y que sea mas facil de leer(o no xd).
//El 'operator overloading' puede ser una solucion para una API; es decir, el que la va usar puede escoger con
//cual trabajar.

struct Vector2 {
	float x, y;

	Vector2(float _x, float _y) 
		: x(_x), y(_y) {}
	
	Vector2 Add(const Vector2& other) const {
		return Vector2(x + other.x, y + other.y);
		//return *this + other;  //*Podemos hacerlo así,
		//return operator+(other);  //*o de esta manera.
	}
	//OPERATOR OVERLOADING para Add(). Lo definimos como cualquier otra funcion.
	Vector2 operator+(const Vector2& other) const {
		//Aqui retornamos el mismo resultado que Add().
		//return Vector2(x + other.x, y + other.y);
		//O podemos simplificarlo asi:
		return Add(other);
		//*Otra forma de hacerlo es retornando lo que retorna Add() y modificar Add():
		//*return Vector2(x + other.x, y + other.y);
	}

	Vector2 Multiply(const Vector2& other) const {
		return Vector2(x * other.x, y * other.y);
	}
	//OPERATOR OVERLOADING para Multiply();
	Vector2 operator*(const Vector2& other) const {
		return Multiply(other);
	}

	//Dos operadores mas como extra:
	bool operator==(const Vector2& other) const { 
		return x == other.x && y == other.y;
	}
	bool operator!=(const Vector2& other) const { 
		//Dos maneras de retornar, como lo aprendido.
		return !operator==(other);
		//return !(*this == other);
	}
};

//Este es el overloading para el operator '<<'.
std::ostream& operator<<(std::ostream& os, const Vector2& other) {
	os << other.x << ", " << other.y;
	return os;
}

int main() {

	Vector2 position(4.0f, 4.0f);
	Vector2 speed(0.5f, 1.5f);
	Vector2 powerup(1.1f, 1.1f);

	//Si queremos sumar la position y la velocidad tenemos que hacer esto:
	Vector2 result = position.Add(speed);
	//Y si queremos cambiar el speed tenmos que hacer esto:
	Vector2 result1 = position.Add(speed.Multiply(powerup));

	//Sin embargo, podemos usar el 'operator overloading' para simplificar la operacion.
	Vector2 result3 = position + (speed * powerup);

	//Si deseamos imprimir result3, nos va a salir un error. Esto es, porque no definimos
	//    el operador '<<'. Para solucionar esto tenemos que 'overload' el operador '<<'.
	std::cout << result3 << std::endl;

	std::cin.get(); return 0;
}