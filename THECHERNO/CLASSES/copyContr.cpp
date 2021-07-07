//
// Created by JaeZero on 2021.07.05 -- Monday at 00:38:45
//
// --> In this file we discuss about CPYING AND COPY CONSTRUCTORS.
//
// COMMENTS BELOW ARE IN SPANISH
//
#include <iostream>
#include <cstring> //Para usar la funcion std::strlen().

// COPYING: En muchas ocasiones, copiar un objeto, varibale o lo que sea, puede ser util, para
//    modificar o realizar otras operaciones y no modificar el original. Sin embargo, en otras
//	  situaciones, es un desgaste innecesario en la ejecucion y puede que el programam sea lento.
//Se utiliza cuando un objeto de la clase es retornado por valor como en la linea 80 o cuando es
//    pasado por valor en un argumento de una funcion.

class String
{
private:
	char *m_Buffer;
	unsigned int m_Size;

public:
	String(const char *string)
	{
		//Calcular el size del string.
		m_Size = std::strlen(string);
		//Cuan grande va a ser mi buffer. En 'm_Size' deberia ser '+1' para la terminacion '\0'.
		m_Buffer = new char[m_Size + 1];
		//Ahora tenenmos que copiar 'string' en 'm_Buffer'. Podemos realizarlo de 2 maneras:
		/*for (int i = 0; i < m_Size; ++i)
		{
			m_Buffer[i] = string[i];
		}*/
		//Esta es la primera forma.
		memcpy(m_Buffer, string, m_Size); //Esta es la segunda forma.
		//Asumiendo que el 'string' no tiene una termiancion null, podemos agregarlo manualmente.
		m_Buffer[m_Size] = '\0';
	}

	//La definicion del 'copy constructor' es:
	//Y si no queremos un 'copy constructor', podemos igualarlo a 'delete'.
	String(const String &other) // = delete;
								//La inicializacion de los atributos seria: (primera forma)
								//	: m_Buffer(other.m_Buffer), m_Size(other.m_Size)
		: m_Size(other.m_Size)
	{
		std::cout << "Copied string!" << std::endl;
		//Lo que hace este 'copy constructor' es realizar un 'memcpy'; es decir, va a copiar la direcion
		//    de memoria de 'other' dentro de los atibutos. (segunda forma)
		//memcpy(this, &other, sizeof(String));
		m_Buffer = new char[m_Size + 1];
		memcpy(m_Buffer, other.m_Buffer, m_Size + 1);
	}

	char &operator[](unsigned int index)
	{
		return m_Buffer[index];
	}

	friend std::ostream &operator<<(std::ostream &os, const String &string);

	~String() { delete[] m_Buffer; }
};

//Vamos a imprimir el string usando el overloading para cout:
std::ostream &operator<<(std::ostream &os, const String &string)
{
	//Para poder hacer esta llamada de m_Buffer directamente, debemos hacer que este operador sea 'friend'
	//    dentro de la clase.
	os << string.m_Buffer;
	return os;
}

void PrintFunction(const String &string)
{
	std::cout << string << std::endl;
}
int main()
{
	String string = "Cherno";
	//Una vez preparado todo esto, vamos a copiar a string.
	//Esto causa un error, porque al copiar 'string' en 'second', estamos creando dos veces m_Buffer y
	//    por consiguiente, ambos tienen la misma direccion de memoria. Entonces, cuando se termine de
	//    ejecutar el programa, el delete es llamado 2 veces; es decir, estamos liberando la misma direccion
	//    de memoria 2 veces. Para probar esto podemos hacer un debug y veremos que string y second tienen la
	//    misma direccion de memoria.
	String second = string;
	//Ahora intentemos modificar "Cherno" por "Charno" y veamos que ambos se modifican y no solo second.
	second[2] = 'a'; //Creamos el overloading de '[]' para que no haya error.
	//second = "John"; //!SI hago esto me marca un error. (no se porque).

	//Para arreglar esta situacion, tenemos que realizar un 'deep-copy' y lo conseguimos con el 'Copy
	//    constructor'.
	//Un 'copy constructor' es llamado para el segundo string que esta copiando 'second'.
	// Cuando tratamos de crear una nueva variable y lo asignamos a otra variable que tiene el mismo
	//    tipo de dato (de la variable que hemos creado), estamos copiando esa variable y ahi estariamos
	//    llamando el 'copy constructor'.

	PrintFunction(string);
	PrintFunction(second);

	std::cin.get();
	return 0;
}