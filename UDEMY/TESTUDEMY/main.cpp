#include <iostream>
#include <iomanip>  // There is a function called "setfill()" that fills the spaces with 0's
int main() {
    /*
    int var1{2};  // New standard in c++.

    std::cout << "This number is: " << var1 << std::endl;


    int number;
    std::cout << "Please enter a number: "; std::cin >> number;
    for (int i = 0; i < number; ++i) {
        std::cout << i << std::endl;
    }
    */

    /*We can create an infinite loop if we leave the condition of the  for loop empty.
     * This is possible, of course, in a while loop.
    int number, sum = 0;
    for (int i = 1; ; ++i) {
        std::cout << "Please enter a number (or -1 to finish): "; std::cin >> number;
        if (number == -1) {
            break;
        }
        sum += number;
    }
    std::cout << "The sum of the numbers entered is: " << sum << std::endl;
    */
    /*NESTED LOOP, FORM A RECTANGLE
    int height, width;
    std::cout << "Please enter height: "; std::cin >> height;
    std::cout << "Please enter width: "; std::cin >> width;

    for (int i = 0; i < height ;++i) {
        for (int j = 0; j < width; ++j) {
            std::cout << std::setw(3) << "*";
        }
        std::cout << std::endl;
    }
    */

    /*DRAWING A TRIANGLE
    int height, width;
    std::cout << "Please enter height: "; std::cin >> height;
    std::cout << "Please enter width: "; std::cin >> width;

    for (int i = 1; i <= height ;++i) {
        for (int j = 0; j < i; ++j) {
            std::cout << std::setw(3) << "*";
        }
        std::cout << std::endl;
    }
    */

    /*FOR EACH LOOP. This works for arrays(till now I know).
    int arr[] {4, 5, 2, 1, 0, -4};
    float arr2[] {2.3, 1.1, 1.5, 4.2};

    for (int i : arr) {  // for each element in arr (the same logic like in python)
        std::cout << i << " ";
    }
    std::cout << "\n--------------------------------------\n";
    for (float j : arr2) {
        std::cout << j << " ";
    }
    std::cout << "\n--------------------------------------\n";
    for (auto m : arr2) {
        std::cout << m << " ";
    }
    std::cout << "\n--------------------------------------\n";
    int rangeArr = sizeof(arr) / sizeof(arr[0]);
    for (int l = 0; l < rangeArr; ++l) {
        std::cout << arr[l] << " ";
    }
    */

    std::cin.get();
    return 0;
}