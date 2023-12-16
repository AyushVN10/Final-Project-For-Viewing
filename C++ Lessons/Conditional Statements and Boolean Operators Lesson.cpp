// Types of Statements
// Welcome to another lesson in C++ programming! In this segment, we delve into the realm of statements and instructions that the C++ compiler can execute.
// We have seen assignment statements like x = 4. Some other statements that will be discussed are while, for, and if statements.

// Expressions
// An expression is an ordered collection of operators and operands that specifies a computation.
// Expressions need to be evaluated. If you print an expression, the C++ compiler will evaluate it and display the result.

// Evaluation of an Expression
// Expression evaluation might produce a result and may generate side effects (something is printed on the standard output).
// A value by itself is a simple expression, and so is a variable.
// Evaluating a variable gives the value that the variable refers to.

// Comparison Operators
// When using conditional statements and loops, comparison operators such as ==, !=, >, <, >=, and <= are usually necessary.
// These operators return true or false based on the given conditions.
// == equals (x == y)
// != not equals (x != y)
// > greater than (x > y)
// < less than (x < y)
// >= greater than or equal to (x >= y)
// <= less than or equal to (x <= y)
// These conditions can be used in if statements and loops, returning true or false.

// If-Statements
// The word 'if' is used in C++ to make decisions (think if something happens, it produces "this" result).
// The 'if' keyword in C++ empowers decision-making. An if-statement is made using the 'if' keyword, allowing the execution of code if a condition is true (or false if that is what you want).
// Here's an example for the format of many if-statements, with an explanation of what should be in that spot).

// if (condition) {
//     // Code that's executed if the condition is true
// }
// // Code that's executed even if the condition is not true

// To do more than one thing when a condition is true, use a code block.
// Code that is not indented below the if will be executed regardless of whether the condition was true or false.

// Example:
int a = 33;
int b = 200;
if (b > a) {
    std::cout << "b is greater than a" << std::endl;
}

// Else
// Sometimes you want a chunk of code to execute if a condition is true; otherwise, you want another chunk of code to be executed.
// The 'else' keyword takes anything that does not fall into the preceding conditions.
// Any lines of code indented under 'else' are executed only if the condition did not prove true.

// Example:
a = 200;
b = 33;
if (b > a) {
    std::cout << "b is greater than a" << std::endl;
} else {
    std::cout << "a is greater than b" << std::endl;
}

// Elif
// 'elif' is the C++ way of saying "if the previous conditions were not true, then check this condition".
// When if/else is not enough, there's elif, which stands for "else if".
// An if statement can include many elif conditions that are all tried before the else.

// Example:
a = 33;
b = 33;
if (b > a) {
    std::cout << "b is greater than a" << std::endl;
} else if (a == b) {
    std::cout << "a and b are equal" << std::endl;
}

// Logical Operators in C++
// "and", "or", and "not" are logical operators used to combine conditional statements.
// The logical operators unlike in Python are not spelled out and instead use symbols as will be shown here.

// The "and" logical operator - Looks like this: &&
a = 200;
int c = 500;
if (a > b && c > a) {
    std::cout << "Both conditions are true" << std::endl;
}

// The "or" logical operator - Looks like this: ||
if (a > b || c > a) {
    std::cout << "At least one of the conditions is true" << std::endl;
}

// The 'not' logical operator - Looks like this: !
if (!(a > b && c > a) == false) {
    std::cout << "Both conditions are false" << std::endl;
} else if (!(a > b || c > a) == false) {
    std::cout << "One of the conditions is false" << std::endl;
}

// Nested If Statements
// If-statements can be nested, providing a structured way to handle complex decision trees (i.e., You can have if-statements inside if-statements).

// Example:
int x = 15;

if (x > 10) {
    std::cout << "x is greater than 10" << std::endl;

    if (x > 20) {
        std::cout << "x is also greater than 20" << std::endl;
    } else {
        std::cout << "x is not greater than 20" << std::endl;
    }
} else {
    std::cout << "x is not greater than 10" << std::endl;
}

// The first if-statement checks if x is greater than 10. If this condition is true, the code inside its block is executed.
// Inside the block of the first if-statement, there is another if-statement that checks if x is greater than 20. If this condition is true, the corresponding block is executed. Otherwise, the else block is executed.
// If the condition of the first if-statement is false, the else block of the first if-statement is executed.

// Switch Statements
// Switch statements provide a concise way to handle multiple possible values of a variable in a better way than just repeated elifs.
// They are useful when you have a variable with a discrete value and you want different code blocks based on the variable's value.
// Here's an example of the format of many switch statements, with an explanation of what should be in that spot).

// switch (expression) {
//     case constant1:
//         // code that's executed if the expression equals constant1;
//         break;
//     case constant2:
//         // code that's executed if the expression equals constant2;
//         break;
//     // more cases
//     default:
//         // code that's executed if the expression doesn't match any case;
// }

// Example:
int day = 4;
std::string dayName;

switch (day) {
    case 1:
        dayName = "Monday";
        break;
    case 2:
        dayName = "Tuesday";
        break;
    case 3:
        dayName = "Wednesday";
        break;
    case 4:
        dayName = "Thursday";
        break;
    case 5:
        dayName = "Friday";
        break;
    case 6:
        dayName = "Saturday";
        break;
    case 7:
        dayName = "Sunday";
        break;
    default:
        dayName = "Invalid day";
}

std::cout << "Day " << day << " is " << dayName << std::endl;

// In this example, we declare an integer variable "day" and initialize it with a value (4).
// The switch statement starts, evaluating the value of "day".
// Inside the switch, we have different cases corresponding to possible values of "day" (like elif statements but shorter).
// If the value of day matches a case, the code block inside said case is executed and then breaks, exiting the switch.
// If no cases match the variable, the default block is executed.

// Ternary Operator in C++
// The ternary operator is a short way to do a simple if-else statement.
// Syntax: condition ? result if the condition is true : result if the condition is false;

// Example:
int num = 42;
std::string result = (num % 2 == 0) ? "Even" : "Odd";
// The above line is equivalent to:
// if (num % 2 == 0) {
//     result = "Even";
// } else {
//     result = "Odd";
// }
std::cout << "The number is " << result << std::endl;

// In the example, if num % 2 is true (i.e., num is even), "Even" is assigned to the result variable.
// Otherwise, "Odd" is assigned.

// Compound Boolean Expressions
// Compound boolean expressions involve combining multiple conditions using logical operators.

// If you have forgotten, here are the logical operators:
/*  Logical AND: && - Returns true if both conditions are true.
    Logical OR: || - Returns true if at least one condition is true.
    Logical NOT: ! - Returns the opposite of the condition's result. */

// Example:
int age = 25;
bool isStudent = false;

// The condition checks if the person is 18 or older and is not a student.
if (age >= 18 && !isStudent) {
    std::cout << "You are eligible to vote." << std::endl;
}

// In this example, both conditions (age >= 18 and !isStudent) must be true for the message to be displayed.
// The logical operators allow you to create more complex conditions by combining simpler ones.

// That's it for this lesson! Please work on the four worksheets from this lesson!
