#include <iostream>  //This preprocessor statment is evaluated before compile the file
/*
-Every thing's good when there is a file. But what happens when there are more than one file.
-We need to put our code in different files to be cleaner and nicer.
-To be able to use the function Log, we need to declared it. It means we need to tell the comp
that the function Log exists.
-To use the function Log in this file we need to declared:
The parameter message is optional.
-This(function works) is possible because of THE LINKER.
*/
void Log(const char* message);

int main() {
	Log("Hi, I am here again!");
	std::cin.get();  // This function wait for us to press enter.
	
	return 0;
}