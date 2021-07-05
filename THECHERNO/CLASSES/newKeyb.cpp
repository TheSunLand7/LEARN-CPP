//
// Created by JaeZero on 2021.07.02 -- Friday at 22:56:56
//
// --> In this file we discuss about New Keyboard.
//
// COMMENTS BELOW ARE IN SPANISH
//
#include <iostream>
#define String  std::string
//NEW: El proposito principal de 'new' es alocar(asignar) memoria en 'heap'. Es un operador como
//        '+', '-', '*', '/', etc.
//Basado en lo que escribimos, 'new' determina el tamaño necesario(en bytes) para alocar
//    memoria en 'heap'. Por ejemplo si es 'int', serian 4 bytes. Luego de eso solicita
//    al sistema operativo 4 bytes de memoria. Una vez que encuentra el espacio de memoria,
//    retorna un pointer con la direccion de memoria. Con eso ya podemos trabajar.

class Entity {
	private:
		String m_Name;

	public:
		Entity () : m_Name("Unknown") {}
		Entity (const String& name) : m_Name(name) {}

		const String& GetName() const {return m_Name;}
};

int main() {
	//Un ejemplo simple de new:
	//Esto es un integer de 4 bytes alocado en 'heap' y 'b' esta guardando la direccion de memoria.
	int* b = new int;

	//El 'new' no solo aloca memoria en el 'heap' sino que tambien llama al constructor.
	Entity* e = new Entity();
	//'behind scenes', el operador 'new' llama a 'malloc' de C. Es decir, que 'e' es similar a 'e1'. La
	//    unica diferencia es que 'malloc' no llama al constructor, solo aloca memoria en el 'heap'.
	//Entity* e1 = (Entity*)malloc(sizeof(Entity));

	//Siempre que utilizamos el operador 'new', debemos liberar memoria con 'delete'. 
	//'delete', a diferencia de 'new', llama al destructor.
	//'behind scenes', el operador 'delete' llamam a la funcion 'free' del lenguaje C.
	//free(e);
	delete e;
	delete b;

	std::cin.get(); return 0;
}