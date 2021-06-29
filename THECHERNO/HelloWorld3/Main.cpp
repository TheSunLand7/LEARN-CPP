#include <iostream>

int main() {
	/*VARIABLES
	 * There are 'many' types of variables. The difference between those is how much
		memory occupy.
	'* 'int' occupies 4 bytes in memory, so we can store from -2billion to 2billion numbers.
	 		It makes sense because of in 1 byte there are 8 bits, so in 4 bytes there will be
			32 bits. 1 bit is for the sign (- or +) and the rest of the bits (31) is for numbers.
			Every bit can be valued for 0 or 1, so 2 power 31 == 2,147,483,647
	 * 'char' occupies 1 byte in memory. 
	 * 'short' occupies 2 bytes in memory.
	 * 'long' usually occupies 4 bytes in memory.
	 * 'long long' usually occupies 8 bytes in memory.
	 * 'float' occupies 4 bytes in memory.
	 * 'double' occupies 4 bytes in memory.
			When you declare a float variable, we need to add a 'f' or 'F' after the value.
			It is because of the value is, at the beginning, a variable of the type double.
	 * 'bool' occupies 1 byte in memory.
			We can store 8 booleans in 1 byte. That's awesome and smart!*/

	float variable = 5.5f;
	double var = 8.8;
	std::cout << sizeof variable << " byte(s)" << std::endl;

	std::cin.get();
}