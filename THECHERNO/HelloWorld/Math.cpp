// We can compile the files in other ways like that:
/*
-Using a header file with #include "EndBrace.h"
-We can also define whatever type and use it:
*/

// #define INTEGER int  //Replace INTEGER for whatever it follows.
// #if 1 //(1 means true) Let us include or exclude code based on a given condition.

/*#include <iostream>*/
// The ".i" is the file with the content of preprocessor statements.
// The ".asm" is the file with the obj content but in readable format. Initially it is in binary format.
int Multiply(int a, int b) {
	int result = a * b;
	return result;
}
// #endif