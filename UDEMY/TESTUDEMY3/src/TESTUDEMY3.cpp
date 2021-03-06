//============================================================================
// Name        : TESTUDEMY3.cpp
// Author      : JOE
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

/*STANDARD TYPES
 * 	std::vector
 * 	std::map
 * 	std::string
 * 	std::deque*/

/*VECTOR
#include <vector>

int main() {
	//Different ways to declare a vector:
	std::vector<int> vec1 (10);
	std::vector<double> vec2 (5);
	std::vector<int> vec3;
	std::vector<int> vec4 (3, 7);  // Three numbers of 7.

	unsigned int vec1_size = vec1.size();

	//for (int i = 0; i < vec4.size(); ++i) {
	//	std::cout << vec4[i] << " ";
	//}

	int el = vec4.at(0);  //The same: vec4[0].
	//std::cout << '\n' <<el << std::endl;

	bool emp1 = vec2.empty();  //Whether the of the vector is equal zero or not.
	bool emp2 = vec3.empty();

	//std::cout << emp2 << std::endl;

	//std::cout << vec3.size() << std::endl;
	//vec3.push_back(100);  // Add the number 100 to the last position.
	//std::cout << vec3.size() << std::endl;
	std::vector<int> vec5 {5, 4, 3, 2, 1};

	for (int i : vec5)
		std::cout << i << " ";
	vec5.pop_back();  //Delete the last element.
	std::cout << '\n';

	//Short form for 'for loop'
	for (int i : vec5)
			std::cout << i << " ";

	std::cin.get();
	return 0;
}
*/

/*DEQUE
#include <deque>

int main() {
	//Ways to declare a deque "deck"(double ended queue):
	std::deque<int> dq1 (10);
	std::deque<double> dq2 (5);
	std::deque<int> dq3;
	std::deque<int> dq4 (3, 7);

	//for (int i : dq4)
	//	std::cout << i << " ";

	int el = dq4.at(0);

	bool emp1 = dq2.empty();
	bool emp2 = dq3.empty();

	//std::cout << '\n' << dq3.size() << std::endl;
	dq3.push_back(98);
	dq3.push_front(12);
	//std::cout << dq3.size() << ", " << dq3.at(0) << std::endl;

	std::deque<int> dq5 {5, 4, 3, 2, 1};
	for (int i : dq5)
		std::cout << i << " ";

	std::cin.get();
	return 0;
}
*/

/*STRING
 * Represents a flexible and dynamic expansion of C strings.
#include <cstring>

int main() {
	std::string s1 ("Hey");
	std::string s2 ("Hey how is it going!");
	std::string s3;
	std::string s4 ("");

	unsigned int s1_size = s1.size();
	std::cout << s1_size << std::endl;

	bool emp = s1.empty();

	char c1 = s1.at(0);  //Best way to access strings.

	//Comparison between strings:

	if (s1 == s1) {}
	if (s2 != s1) {}
	if (s1 == "Hello") {}
	if (s1 > s2) {}
	if (s1 < s2) {}

	std::string s5;
	std::cout << "Say something: ";

	//To get everything user's entry. We do not have a delimiter.
	std::getline(std::cin, s5);
	std::cout << s5 << std::endl;
	std::cin.get();
	return 0;
}
*/

/*FUNCTIONS*/
#include <functional>
#include <cmath>

//std::function --> Es una plantilla de funcion que se asigna a la variable f.
// f es una variable de tipo funcion.

double Calculate(std::function<double(double)> f, double x);
double testFun1(double x);
double testFun2(double x);

int main() {
	double a = Calculate(testFun1, 2);  //64
	double b = Calculate(testFun2, 5);  //16

	std::cout << "The value of a and b is: " << a << ", " << b << std::endl;

	//lambda as parameter:
	std::function<int(int, int)> f = [] (int a, int b) -> int {return a * b;};
	int res = f(20, 10);

	std::cout << "The second result is: " << res << std::endl;

	std::cin.get();
	return 0;
}

double Calculate(std::function<double(double)> f, double x) {
	return f(x) * f(x) * f(x);
}

double testFun1(double x) {
	return x * x;
}

double testFun2(double x) {
	return x * x - 2 * x + 1;
}
