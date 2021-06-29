#include <iostream>
#include <cmath>
#include <stdexcept>
#include <string>
/*
int main() {
    GOTO STATEMENT IS SIMILAR TO FOR LOOP
    int i = 1;

    AGAIN:
        std::cout << std::setw(3) << i;
        ++i;
        if (i <= 20)
            goto AGAIN;

    CONTINUE STATEMENT.
    int sum = 0, number;

    for (int i = 0; i < 5; ++i) {
        std::cout << "Please enter a number: "; std::cin >> number;
        if (number % 3 == 0) {
            continue;
        }
        std::cout << "This number is not divisible by 3." << std::endl;
        sum += number;
    }
    std::cout << "\nThe sum is " << sum << std::endl;

    REVERSE NUMBERS FROM 20 TO 0.
    for (int i = 20; i >= 1; --i) {
        if (i % 3 != 0)
            continue;
        std::cout << std::setw(3) << i;
    }

    BIGGEST AND SMALLEST NUMBERS
    const int noe = 10;
    int arr[noe], bigNum = 0, smallNum = 999;

    for (int i = 0; i < noe; ++i) {
        std::cout << "Enter " << i + 1 << ". number: "; std::cin >> arr[i];

        if (arr[i] > bigNum)
            bigNum = arr[i];
        if (arr[i] < smallNum)
            smallNum = arr[i];
    }
    std::cout << "The smallest number is: " << smallNum << std::endl;
    std::cout << "The largest number is: " << bigNum << std::endl;

    LAMBDA ANONYMOUS FUNCTIONS

    auto lambda1 = [] (int x){
        return x * x * x;
    };
    int num = 10;
    int result = lambda1(num);
    std::cout << "The result is: " << result << std::endl;

    auto lambda2 = [] (int x, int y) -> int {
        return x * y;
    };
    int result2 = lambda2(5, 10);
    std::cout << "The result is: " << result2 << std::endl;

    std::cin.get();
    return 0;
}
*/
/*EXCEPTIONS
 * An exception catch only the same type.
double root2(double x) {

    if (x < 0)
        throw std::domain_error("Negative number!");  // Standard error STD.
    double result = std::pow(x, 0.5);
    return result;
}

int main() {
    double number;
    std::cout << "Please enter a number: "; std::cin >> number;

    double sroot;
    try {
        sroot = root2(number);
        std::cout << "The result is: " << sroot << std::endl;
    } catch (const char *text) {
        std::cout << "ERROR: " << text << std::endl;
        return 1;
    }
    std::cin.get();
    return 0;
}
*/

/*STRUCTURES

struct Date {
    int year;
    int month;
    int day;
};

struct Book {
    int ID;
    std::string name;
    std::string author;
    Date Published;
    static int Count;   //The static allows us to share the attributes with all variables.
};

int Book::Count;

int main() {
    Book b1, b2;
    b1.ID = 0;
    b1.name = "Memory Allocation";
    b1.author = "B.S.";
    b1.Count = 1;

    std::cout << "b2.Count: " << b2.Count << std::endl;
    b2.Count = 10;
    std::cout << "b1.Count: " << b1.Count << std::endl;
    Book::Count = 100;
    std::cout << "\nb2.Count: " << b2.Count << std::endl;
    std::cout << "b1.Count: " << b1.Count << std::endl;
    std::cin.get();
    return 0;
}


struct Date {
    int year;
    int month;
    int day;
};

struct Book {
    int ID;
    std::string name;
    std::string author;
    Date Published;  // Attribute of type structure.
    static int Count;   //The static allows us to share the attributes with all variables.
};

int Book::Count;

int main() {

    Date dateFirstBook = {2010, 5, 26};
    Date dateSecondBook = {2018, 5, 20};

    Book firstBook = {0, "Lalaland", "Unknown", dateFirstBook};
    Book secondBook = {1, "Tralala", "Unknown2", dateSecondBook};

    //Book books[100];
    //books[0].name = firstBook.name;

    std::cout << firstBook.name << std::endl;
    std::cin.get();
    return 0;
}
*/

/*GENERIC PROGRAMMING*
 * We call overloaded functions because they have the same declaration, name but the take
 *  different parameters. Example:
 *  void print(int arr[], int len) and void print(double arr[], int len).

void print(int arr[], int len);
void print(double arr[], int len);

int main() {
    int arr[100], sizeArray;
    std::cout << "Please enter the size of the array: "; std::cin >> sizeArray;

    for (int i = 0; i < sizeArray; ++i) {
        std::cout << "Please enter the " << i + 1 << ". element: "; std::cin >> arr[i];
    }

    const int len = sizeof arr / sizeof arr[0];
    print(arr, len);

    std::cin.get();
    return 0;
}

// This a regular function.
void print(int arr[], int len) {
    std::cout << "[";
    for (int i = 0; i < len - 1; ++i) {
        std::cout << arr[i] << ", ";
    }
    if (len != 0)
        std::cout << arr[len - 1];

    std::cout << "] INT";
}


template <typename TYPE>
void print(TYPE arr[], int len) {
    std::cout << "[";
    for (int i = 0; i < len - 1; ++i) {
        std::cout << arr[i] << ", ";
    }
    if (len != 0)
        std::cout << arr[len - 1];

    std::cout << "]";
}

int main() {
    int arr[] {2, -4, 6, 1, 7};
    double arr2[] {2.3, -3.7, 4.1, -9.4};

    const int len1 = sizeof arr / sizeof arr[0];
    std::cout << sizeof arr << " bytes, " << sizeof arr[0]<< " bytes." << std::endl;
    const int len2 = sizeof arr2 / sizeof arr2[0];
    std::cout << sizeof arr2 << " bytes, " << sizeof arr2[0]<< " bytes." << std::endl;

    print<int>(arr, len1);
    std::cout << std::endl;
    print<double>(arr2, len2);
    std::cin.get();
    return 0;
}
*/

int main() {
    int arr[] {5, 4, 3, 2, 1};
    for (int i : arr) {
        std::cout << i << " ";
    }

    std::cin.get();
    return 0;
}