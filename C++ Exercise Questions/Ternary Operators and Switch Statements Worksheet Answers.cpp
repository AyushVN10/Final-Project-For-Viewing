// Question 2.3.1: Ternary Twist:

#include <iostream>
#include <string>

int main() {
    int year = 2024;  // Example year
    std::string leapYearStatus = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0) ? "Leap year" : "Not a leap year";
    std::cout << leapYearStatus << std::endl;
  
    return 0;
}

/*
In this code, the ternary operator condition ? value_if_true : value_if_false is used to assign the value of leapYearStatus 
based on whether the condition (year % 4 == 0 and year % 100 != 0) or year % 400 == 0 is true or false. 
This simplifies the code compared to an if-else statement, making it more concise and easier to read.
*/



// Question 2.3.2: Switch Showdown:

#include <iostream>

int main() {
    char op;
    double num1, num2;
    std::cout << "Enter an operator (+, -, *, /): ";
    std::cin >> op;
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;
  
    switch(op) {
        case '+':
            std::cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;
        case '-':
            std::cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;
        case '*':
            std::cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                std::cout << num1 << " / " << num2 << " = " << num1 / num2;
            } else {
                std::cout << "Error! Division by zero is not allowed.";
            }
            break;
        default:
            std::cout << "Invalid operator";
    }
  
    return 0;
}

/*
In this example, the switch statement is used to handle different arithmetic operations based on the input operator (+, -, *, /). 
It provides a more organized and readable way to handle different cases compared to using nested if-else statements, offering a clear and efficient solution for handling multiple choices.
*/



// Question 2.3.3: Day Decoder:

#include <iostream>

int main() {
    int day;
    std::cout << "Enter a day of the week as an integer (1-7): ";
    std::cin >> day;
    // Switch statement to determine day's name and whether it is a weekday or weekend day
  
    switch (day) {
        case 1:
            std::cout << "Sunday, Weekend day" << std::endl;
            break;
        case 2:
            std::cout << "Monday, Weekday" << std::endl;
            break;
        case 3:
            std::cout << "Tuesday, Weekday" << std::endl;
            break;
        case 4:
            std::cout << "Wednesday, Weekday" << std::endl;
            break;
        case 5:
            std::cout << "Thursday, Weekday" << std::endl;
            break;
        case 6:
            std::cout << "Friday, Weekday" << std::endl;
            break;
        case 7:
            std::cout << "Saturday, Weekend day" << std::endl;
            break;
        default:
            std::cout << "Invalid day" << std::endl;
            break;
    }
    // Ternary operator to decide and display message indicating if the day's number is even or odd
    (day % 2 == 0) ? std::cout << "Even day" : std::cout << "Odd day";
  
    return 0;
}
