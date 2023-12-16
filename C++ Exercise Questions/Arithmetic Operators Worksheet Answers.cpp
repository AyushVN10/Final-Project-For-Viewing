// Questions 1.3.1: Code Analysis and Output Prediction:

/*
a. The order of execution for the arithmetic operations in the expression z = x % y + 4 * (x - y) is as follows:
  1. First, the modulo operation (%) is performed on x and y, resulting in the remainder when x is divided by y.
  2. Then, the subtraction operation (x - y) is performed.
  3. After that, the multiplication operation (4 * (x - y)) is performed.
  4. Finally, the result of the modulo operation is added to the result of the multiplication and subtraction. 

b. The output displayed on the console when this code is executed will be: 9
*/



// Questions 1.3.2: Variable Modification and Output:

#include <iostream>

int main() {
  
    int length = 8;
    int width = 5;
    int area = length * width;
    int remainder = length % width;
    std::cout << "Area of the rectangle: " << area << std::endl;
    std::cout << "Remainder of length divided by width: " << remainder << std::endl;
  
    return 0;
}



// Questions 1.3.3: Interactive Calculation:

#include <iostream>
int main() {
    double base, height;
    std::cout << "Enter the base of the triangle: ";
    std::cin >> base;
    std::cout << "Enter the height of the triangle: ";
    std::cin >> height;
    double area = 0.5 * base * height;
    std::cout << "The area of the triangle is: " << area << std::endl;
    return 0;
}
