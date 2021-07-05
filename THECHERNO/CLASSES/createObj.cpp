//
// Created by JaeZero on 2021.07.02 -- Friday at 21:44:49
//
// --> In this file we discuss about How to create/instantiate OBJECTS.
//
// COMMENTS BELOW ARE IN SPANISH
//
#include <iostream>

#define String  std::string

//Para crear un obejeto, existen 2 opciones: Crearlo en la memoria 'stack' o en la memoria 'heap'.
//
class Entity {
	private:
		String m_Name;

	public:
		Entity () : m_Name("Unknown") {}
		Entity (const String& name) : m_Name(name) {}

		const String& GetName() const {return m_Name;}
};

int main() {
	//?Primero creamos el objeto en la memoria 'stack'
	//Esta es la manera mas rapida y manejable de instanciar un objeto.
	//El problema con esto es que al crear un objeto en la memoria 'stack', el tiempo de vida del
	//    objeto creado, depende de la funcion, 'if statement', etc. que lo contiene, porque una vez que
	//    que funcion cierre con '}', es eliminado y por ende el objeto creado y ya no se puede
	//    utilizarlo mas.
	//El otro problema es cuando creamos muchos objetos, o tenemos clases muy grandes. No va a haber
	//    mucho espacio de memoria en el 'stack', porque la memoria 'stack' es algo pequeño como 1 o 2 Mbytes.
	//Como creamos el objeto sin parametros, estamos llamando al primer constructor.
	//Entity entity;
	//std::cout << entity.GetName() << std::endl;  //Imprime "Unknown"

	//Para llamar al segundo constructor, podemos crearlo de 2 maneras:
	//Entity entity2 = Entity("Spot");
	//Entity entity2("Spot");
	//std::cout << entity2.GetName() << std::endl;  //Imprime "Spot"


	//Para probar lo que se menciona en la linea 28 creamos un scope vacio y un objeto pumtero. Luego
	//vamos a Debug. (Se puede ver mejor en Microsoft Visual Studio)
	/*Entity* e;
	{
		//Si queremos que este objeto no se destruya cuando salimos del scope, tenemos que crearlo en la
		//    memoria 'heap'.
		Entity entity2("Spot");
		e = &entity2;
		std::cout << entity2.GetName() << std::endl;
	}*/

	//?Ahora creamos el onjeto en la memoria 'heap'.
	Entity* e;
	{
		//Si queremos que este objeto no se destruya cuando salimos del scope, tenemos que crearlo en la
		//    memoria 'heap'.
		//Cuando creamos objetos en la memoria 'stack', tenemos que liberar memoria explicitamente con delete.
		//Sin embargo, si queremos que se liberen automaticamente podemos usar 'smart pointers'.
		
		Entity* entity2 = new Entity("Spot");
		e = entity2;
		std::cout << entity2->GetName() << std::endl;
	}

	std::cin.get(); return 0;
	delete e;
}