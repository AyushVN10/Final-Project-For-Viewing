// C++ Basics/Header Files
// In this lesson, we'll begin going over the very basics of C++. C++ is a very different language from Python in terms of syntax, as the readability of the text is reduced significantly, which can make the language hard for coding beginners to pick up.
// The good news is that you can begin learning today and make significant progress by only reading the lessons in this directory. Let's get started!

// The first thing to note about C++ is its usage of libraries to control some of the functionality of C++ code. This comes in the form of the iostream library, where iostream stands for standard input-output stream.
// Like the name suggests, this library allows for input and output in C++, however, regardless of whether there is input or output in your code, you should always make sure to include it at the top as practice.
// Here is an example of what that might look like in your code:

#include <iostream>

// These are called header files, and you learn of many different types later on.
// Along with the inclusion of iostream, there is a second necessity when starting your code in C++. That is the creation of a new main function for your code. 
// You do not need to understand functions to have this main function in your code. It is simply another thing to remember to always add when you create a new program.
// The main function should look something like this: 

int main() {

    return 0;
}

// To have a more in-depth understanding, this function returns 0 to indicate your code was run properly, while a zero being returned indicates there was an issue.
// While you do not need to be able to create a function, this lesson will teach why you are using int before the function and the importance of variable types in your code.

// Variable Types
// There are several different types of data types in C++, similar to Python.
// The data type for integers without decimal points is: int
// The data type for integers including decimal points is: double
// The data type for single characters (Use single quotation marks around them) is: char
// The data type for boolean variables (True or False) is: bool
// The data type for string variables, so words is: std::string
// A const can come before each of the data types to make sure the variable is unchanged.

// The data type the variable will hold will always be declared beforehand regardless of whether it is storing data at the moment.

// Examples:
int age = 16;
double gpa = 4.0;
char test_mark = 'A';
bool human = true;
std::string name = "Ayush";
const int birth_year = 2006;

// Here are some basic rules to keep in mind when creating variables:
/* - Names can contain letters, digits, and underscores.
   - Names must begin with a letter or an underscore (_).
   - Names are case-sensitive (myVar and myvar are different variables).
   - Names cannot contain whitespaces or special characters like !, #, %, etc.
   - Reserved words (like C++ keywords, such as int) cannot be used as names. */
// To practice using different types of variables, try initializing each type of variable shown here in the main function but without any of them containing a value.

// String Variables
// As you may have noticed from the last example, initializing a string variable looks slightly different than the others.
// The std that comes before string means standard, and the std namespace essentially contains the built-in classes and declared functions.
// You do not have to think about the classes, but the std:: will come before several other types of code you make in C++.
// If you would not like to use std:: to initialize your string variable, write the following in your main function:

using namespace std::string; // or
using namespace std;

// While for the latter example, you do not have to write std for any of the in-built classes and declared functions in the std namespace, it has its own issues like a naming conflict, so it is safer to specify what you do not want to write std for.

// Quotations Marks
// Unlike in Python, quotations have a purpose in the code you are writing, specifically determining whether or not you want a single character or a string.
// Remember to use single quotation marks when you want a single character, and double quotation marks for almost everything else.

// Examples:
char first_letter = 'A';
std::string first_name = "Ayush";

// Comments
// There are two types of comments in C++. 
// You can use a double slash or // for a single-line comment.
/* You can use a slash and then an asterisk for a block of comments that
will be ended by an asterisk and then a slash. */

// Using the same variable name with different values
// To prevent conflicting variable names in C++, you can create different namespace names for the variables you are using.
// For example, the following code writing above the main function will allow you to have two different values for variables of the same name:

namespace first{
    int x = 1;
}
namespace second{
    int x = 2;
}

// While this will be talked about in a later lesson, you can check the difference by printing out each type of variable individually, as shown here:

std::cout << first::x;
std::cout << second::x;

// Semicolons
// As one of the most important parts of the lesson, you must understand the value of semicolons in C++.
// Almost every line of code you write will need to end with a semicolon, as seen from the examples above.
// Semicolons are the source of errors many times when you are coding, so make sure you practice writing a semicolon after initializing a variable!

// Input and Output
// Like Python, C++ uses inputs as a way for users to interact with code.
// An input in C++ looks like this:

int variable;
std::cin >> variable;

// Like string, inputs use the std namespace. The cin stands for character input, and the two arrows are stream extraction operators, essentially allowing your input to be stored in the variable to the right.
// Remember that unlike Python, the variable you are storing data in must have already been initialized earlier, and that the data inputted must be the same as the data type of the variable.

// For outputs, the code looks similar:

int variable = 10;
std::cout << "Hello World";
std::cout << variable;

// The cout stands for character output, and the two arrows are insertion operators which are used to display a stream of characters.
// Like inputs, if you wish to output a variable it must be initialized beforehand, however, if the variable is storing nothing it will output nothing in the console.
// Practice using inputs and outputs by creating a variable in the main function, giving it a value using an input, and displaying the variable using an output.

// C++ Operators
// To do math in C++, you will need the computer to understand the actions you wish for it to perform.
// Here are the operators in C++ you can use to carry out your tasks:

/* Arithmetic Operators
 + Addition (x + y)
 - Subtraction (x - y)
 * Multiplication (x * y)
 / Division (x / y)
 % Modulus (x % y will give you the remainder) */

/* Comparison Operators
 == equals (x == y)
 != not equals (x != y)
 > greater than (x > y)
 < less than (x < y)
 >= greater than, equal to (x >= y)
 <= less than, equal to (x <= y)
 Using these will return true or false */

/* Assignment Operator
 = assigns values to variables (x = 10) */

// You can practice using these operators with variables or by using regular integers and doubles (numbers with decimal points).

// Examples for Arithmetic Operators
// Addition:
int a = 5, b = 3, result;
result = a + b;  // result = 8

// Subtraction:
int c = 5, d = 3, result_sub;
result_sub = c - d;  // result_sub = 2

// Multiplication:
int e = 5, f = 3, result_mul;
result_mul = e * f;  // result_mul = 15

// Division:
int g = 6, h = 3, result_div;
result_div = g / h;  // result_div = 2

// Modulus:
int i = 7, j = 3, result_mod;
result_mod = i % j;  // result_mod = 1

// C++ Math Library
// Like Python, C++ has a useful library with functions called cmath that can make math a lot easier. You must import cmath the same way you do iostream, like so:

#include <cmath>

// Here is an example of some of the functions you may use from the C math library: 

// sqrt() - Square Root: This function calculates the square root of a given number.
double num_sqrt = 25.0;
double result_sqrt = sqrt(num_sqrt);
std::cout << "Square root of " << num_sqrt << " is " << result_sqrt;

// pow() - Power Function: This function calculates the value of a number raised to the power of another number.
double base_pow = 2.0;
double exponent_pow = 3.0;
double result_pow = pow(base_pow, exponent_pow);
std::cout << base_pow << " raised to the power of " << exponent_pow << " is " << result_pow;

// sin(), cos(), tan() - Trigonometric Functions: These functions calculate the sine, cosine, and tangent of an angle, respectively. Note that trigonometric functions in C++ use radians, so the angle is converted from degrees to radians.
double angle_trig = 30.0;  // Angle in degrees
double radianAngle_trig = angle_trig * M_PI / 180.0;  // Convert to radians

double sineValue_trig = sin(radianAngle_trig);
double cosineValue_trig = cos(radianAngle_trig);
double tangentValue_trig = tan(radianAngle_trig);

std::cout << "sin(" << angle_trig << " degrees) = " << sineValue_trig;
std::cout << "cos(" << angle_trig << " degrees) = " << cosineValue_trig;
std::cout << "tan(" << angle_trig << " degrees) = " << tangentValue_trig;

// exp(), log(), log10() - Exponential and Logarithmic Functions: These functions handle exponential and logarithmic operations.
double x_exp = 2.0;

double expResult_exp = exp(x_exp);        // e^x
double logResult_exp = log(x_exp);        // natural logarithm
double log10Result_exp = log10(x_exp);    // base-10 logarithm

std::cout << "exp(" << x_exp << ") = " << expResult_exp;
std::cout << "log(" << x_exp << ") = " << logResult_exp;
std::cout << "log10(" << x_exp << ") = " << log10Result_exp;

// ceil(), floor(), round() - Rounding Functions: These functions perform rounding operations.
double num_round = 4.3;

double ceilResult_round = ceil(num_round);    // Round up
double floorResult_round = floor(num_round);  // Round down
double roundResult_round = round(num_round);  // Round to the nearest integer

std::cout << "ceil(" << num_round << ") = " << ceilResult_round;
std::cout << "floor(" << num_round << ") = " << floorResult_round;
std::cout << "round(" << num_round << ") = " << roundResult_round;

/* Escape Characters
\n - Newline: Represents a newline character, causing the cursor to move to the beginning of the next line.
\t - Tab: Represents a horizontal tab character, causing the cursor to move to the next tab stop.
\b - Backspace: Represents a backspace character, causing the cursor to move back one position. */

// While \n can be used to get a newline, using std::endl is the preferred method as it also flushes the output buffer (transmitting all accumulated characters to the file).
// For this level of C++, both are usable, but here is an example of using endl vs \n for a newline:

// std::endl
std::cout << "Hello, World!" << std::endl;
std::cout << "This is a new line." << std::endl;

// \n
std::cout << "Hello, World!\n";
std::cout << "This is a new line.\n";

// That's it for this lesson! Please work on the three worksheets from this lesson!
