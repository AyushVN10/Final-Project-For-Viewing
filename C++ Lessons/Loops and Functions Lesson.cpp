// Types of Loops
// Loops are programming constructs that allow the execution of a statement repeatedly as long as a specified condition remains true.
// These loops can be controlled using keywords like "break" and "continue" to alter the flow of the loop.
// The "else" keyword can also be used with for and while loops to specify a block of code to be executed when the loop is finished.

// Here's an explanation of some of the types of loops in C++.

// While Loops
// Execute a statement(s) as long as a condition is true.

// Example:
int i = 1;
while (i < 6) { // if true
    std::cout << i << std::endl; // will print out the current value of i
    i++; // increments i by 1 (unary operator; same as i += 1)
}
std::cout << "The while loop is done" << std::endl;

// If you don't increment, the loop will continue forever, causing an error (memory error).
// While loops require relevant variables to hold a value beforehand; in this example, i is defined prior to the loop.
// In while loops, you need to make sure that the condition that makes the loop stop happens eventually.
// Otherwise, the loop will keep running indefinitely.
// Here is an example of a while loop that would go on infinitely:

int counter = 0;

// Infinite loop: the condition (counter < 5) is always true
while (counter < 5) {
    std::cout << "This loop will run indefinitely!" << std::endl;
}

// The "break" statement
// "break" in a while loop allows you to stop a loop before the condition is false and it stops repeating.
// When you use "break" in a while loop, you force execution to continue with the first line outside the loop.
// It stops the loop but continues with the flow after the loop.

// Example:
i = 6;
while (i > 1) { // if true
    if (i == 3) {
        break; // when i is equal to 3, it will exit the loop
    }
    std::cout << i << std::endl; // will print out the current value of i
    i--; // reduction i by 1 (unary operator; same as i -= 1)
}
std::cout << "The while loop is done" << std::endl;

// The "continue" statement
// "continue" in a while loop skips back to the top of the loop.
// With the continue statement, it stops the current iteration and continues with the next.

// Example:
i = 1;
while (i < 6) { // if true
    if (i == 3) {
        continue; // when i is equal to 3, it will stop and continue with the next
    }
    std::cout << i << std::endl; // will print out the current value of i
    i++;
}
std::cout << "The while loop is done" << std::endl;

// The "else" statement
// Runs a block of code when the condition is no longer true.

// Example:
i = 1;
while (i < 6) { // if true
    std::cout << i << std::endl; // will print out the current value of i
    if (i == 3) {
        continue; // when i is equal to 3, it will stop and continue with the next
    }
    i++;
}
std::cout << "i is no longer less than 6" << std::endl;
std::cout << "The while loop is done" << std::endl;

// For Loops
// A for loop in C++ is a statement that allows efficient iteration over a range of values.
// The loop's body contains the code to be executed during each iteration.
// This loop structure provides a compact and readable way to perform repetitive tasks (You do not need to rewrite code).

// Example 1
for (int x = 0; x < 7; x++) {
    std::cout << x << std::endl; // Prints out x each time to check its value
}
std::cout << "All done" << std::endl;

// Here is an explanation of some of the smaller things in this for loop's syntax.
// int x = 0: Initialization of x; declares and initializes the loop control variable (x in this case).
// x < 7: Condition; the loop continues as long as this condition is true.
// x++: Iteration Expression; increments x after each iteration (by 1 in this case).

// Example 2 - Looping through a string
for (char x : "ayush") {
    std::cout << x << std::endl; // Prints out the current letter the variable is holding
}
std::cout << "Done" << std::endl;

// The range-based for loop is a concise way to iterate over elements in a range, such as arrays or, in this case, a string.
// Here is an explanation of some of the smaller things in this for-loop's syntax.
// "banana" is a string literal. In C++, a string literal is an array (or a list) of characters, and it is treated as a sequence of characters.
// char x declares the loop control variable x of type char. In each iteration, x will take the value of the next character in the string and does not need an increment.

// The "break" statement
// We can force a loop to stop early if some condition has been met by using "break".
// "break" makes code execution jump past the end of the loop and stops looping.

// Example:
for (int x = 1; x < 100; x++) {
    if (x == 42) {
        std::cout << "cool" << std::endl;
        break;
    }
    std::cout << x << std::endl;
}
std::cout << "The for loop is done" << std::endl;

// The "continue" statement
// "continue" makes code execution jump back to the top of the loop and continues with the next item.
// This can be useful to skip specific values, avoid lengthy computations, and when handling edge cases.

// Example:
for (int x = 1; x < 100; x++) {
    if (x == 42) {
        std::cout << "cool" << std::endl;
        continue;
    }
    std::cout << x << std::endl;
}
std::cout << "The for loop is done" << std::endl;

// The "else" keyword in a for loop specifies a block of code to be executed when the loop is finished.
// The "else" will not be executed if a break statement stops the loop.
// It can be useful when you want to break out of a loop early or indicate when the loop ends with some text after the "else".

// Example:
for (int x = 0; x < 6; x++) {
    std::cout << x << std::endl;
}
std::cout << "Done" << std::endl;
std::cout << "The for loop is done" << std::endl;

// Nested Loops
// Placing one loop inside another loop.
// Both loops have counters, with the inner loop's body executing repeatedly for each outer loop iteration.
// The inner loop will be executed once for each outer loop iteration.
// Nested loops can be useful when tackling matrices, printing out patterns, searching 2D structures, simulating grid-based algorithms, etc...

// Example:
for (int outer = 0; outer < 20; outer++) {
    for (int inner = 1; inner < 5; inner++) {
        std::cout << outer << " " << inner << std::endl;
    }
    std::cout << "the inner loop is done" << std::endl;
}
std::cout << "The outer loop is done" << std::endl;

// Do-While Loops
// The do-while loop is similar to the while loop, but the condition is checked after the loop body.
// This means that the loop will always execute at least once, even if the condition is initially false.
// Many programs benefit from do-while loops, such as if you want to present menu options to a user, input validation, game loops, etc...
// Unlike while and for loops, a do-while loop ends with a semicolon.

// Syntax:
// do {
//     // code to be executed
// } while (condition);

// Example:
int num = 1;
do {
    std::cout << num << std::endl;
    num++;
} while (num <= 5);
std::cout << "The do-while loop is done" << std::endl;

// The "break" and "continue" statements work similarly in do-while loops as in while loops.

// Example with "break":
num = 1;
do {
    if (num == 3) {
        break;
    }
    std::cout << num << std::endl;
    num++;
} while (num <= 5);
std::cout << "The do-while loop with break is done" << std::endl;

// Example with "continue":
num = 1;
do {
    if (num == 3) {
        num++;
        continue;
    }
    std::cout << num << std::endl;
    num++;
} while (num <= 5);
std::cout << "The do-while loop with continue is done" << std::endl;

// The "else" statement can also be used with a do-while loop, similar to while loops.

// Example:
num = 1;
do {
    std::cout << num << std::endl;
    if (num == 3) {
        num++;
        continue;
    }
    num++;
} while (num <= 5);
std::cout << "Num is no longer less than or equal to 5" << std::endl;
std::cout << "The do-while loop with else is done" << std::endl;

// Functions

// Functions provide a way to essentially store your code into smaller tasks that can be called from multiple places in your program.
// All indented lines below the function definition line are part of that function.
// The first un-indented line is outside the function.
// A function is a block of code that only runs when it is called, looking something like this:

myFunction(parameter1, parameter2);

// It tends to be reusable code. You write it once in a function and call it as many times as needed.
// You can pass data, known as parameters, into a function.
// A function can return data as a result.

// Creating a Function
// In C++, functions are defined using the "void" keyword for functions that do not return a value.
// Functions are declared (created) above the main function, as there will be an error if they are declared below the main function but called in the main function.

void myFunction() { // Defining the function
    std::cout << "Hello from inside myFunction()" << std::endl;
}
std::cout << "Hello, I'm outside myFunction()" << std::endl; // First un-indented line

myFunction(); // Calling the function (will usually be in the main function)

// You should not define a function within a function as all function definitions should be stand-alone.
// You can call other already-defined functions within other function definitions.

// Arguments/Parameters
// The terms parameter and argument can be used for the same thing: information that is passed into a function.
// A parameter is the variable listed inside the parentheses in the function definition. It is usually used within the function and can be set to different values when the function is called.
// An argument is the value that is sent to the function when it is called: "the value you are passing to a function's parameters". The argument is what gives the parameter a value.
// Arguments are specified after the function name, inside the parentheses.
// You can add as many parameters as you want, but they must be separated with a comma.

void myFunction(std::string name) { // The variable inside is a parameter
    std::cout << "Hi " << name << std::endl;
}

myFunction("Ayush"); // The strings inside are arguments, which give the parameter "name" value in the function
myFunction("Bryan");
myFunction("Sean");

// Arguments are local only to that function, meaning that they only exist inside the function.
// It is recommended to name your arguments something different from a variable outside the function.
// If you have a variable named x outside the function and another variable named x inside the function, changes made to x inside the function won't affect the outside variable of the same name.
// This is called local scope, which refers to the fact that the scope of the variable's existence and influence stays inside the function and does not extend further.
// Variables created and modified inside a function literally cease to exist the moment the function stops running.

// Number of Arguments
// A function must be called with the correct number of arguments.
// If your function expects 2 arguments, you have to call the function with exactly 2 arguments or you will get an error.

// Default Parameter Values
// If we call a function without an argument, it will use the default value if one is provided.

void myFunction(std::string country = "Canada") {
    std::cout << "I am from " << country << std::endl;
}

myFunction("Sweden");
myFunction("Brazil");
myFunction("USA");
myFunction(); // Will print using the default value (Canada in this case) since one was not provided

// Return Values
// A function can return a value, and that return value is visible outside the function and will cause the function to stop running.
// Usually, you'll find a return as the last line in a function or the last line of a decision (if) code block.
// To let a function return a value, we use the "return" statement.
// You must specify the data type the function is returning when declaring a function; there will be an error otherwise.

int multiplyByFive(int x) {
    return 5 * x;
}

std::cout << multiplyByFive(3) << std::endl;
std::cout << multiplyByFive(7) << std::endl;
std::cout << multiplyByFive(10) << std::endl;

// Overloaded Functions
// In C++, overloaded functions allow the use of the same name for different versions of a function.
// The compiler chooses the appropriate version based on the arguments during the function call.
// Overloaded functions are useful when you want to perform similar operations on different data types or with a different number of parameters than previous instances.

// Example:
int add(int a, int b) {
    return a + b;
}

double add(double a, double b) {
    return a + b;
}

int main() {
    // Calling the add function with integers.
    int resultInt = add(5, 3);

    // Calling the add function with doubles.
    double resultDouble = add(2.5, 3.7);

    // Displaying the results.
    std::cout << "Integer result: " << resultInt << std::endl;
    std::cout << "Double result: " << resultDouble << std::endl;

    return 0;
}

// Function Templates
// Function templates allow writing a single function that can work with various data types.
// The template keyword is followed by a placeholder (commonly named T for "type").
// Function templates help code reusability, the flexibility of your code, and allow you to extend the functionality of algorithms you are using.

// Example:
template <typename T>
T multiply(T a, T b) {
    return a * b;
}

int main() {
    // Calling the multiply function with integers.
    int resultInt = multiply(5, 3);

    // Calling the multiply function with doubles.
    double resultDouble = multiply(2.5, 3.7);

    // Displaying the results.
    std::cout << "Integer result: " << resultInt << std::endl;
    std::cout << "Double result: " << resultDouble << std::endl;

    return 0;
}

// That's it for this lesson! Please work on the four worksheets from this lesson!
