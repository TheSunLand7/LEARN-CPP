#include <iostream>
/*Below we can notice there is an error of type LINK, because the LINKER cannot find the
function Log.
But if we comment the Log function in the Multiply function, there is no error. That's because
 we don not call the function Log and the LINKER does not have to link the function.
If we comment the function Multiply into the main function so that we never call the multiply
 function and the Log function, we try to build but we have a linking error. That's because
 we are not using this Multiply function in this file but we could technically use it in another
 file. For that reason the LINKER needs to link the function.

But what happens if we want to tell to LINKER: hey, I am only going to use the MUltiply function
 in this file. we could remove the linking necessity because we would not call the Multiply functions.
 We can do this if we put the word static. If we build this we do not find errors.*/

void Log(const char* message);

// "static means the Multiply function is only declared for this translation unit which is this 
// Math.cpp"
static int Multiply(int a, int b) {
	
	Log("Hi, again!");
	return a * b;
}

int main() {
	//std::cout << Multiply(5, 6) << std::endl;
	std::cin.get();
}