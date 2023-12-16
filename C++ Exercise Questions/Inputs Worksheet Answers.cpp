// Questions 1.2.1: Trivia Master:

// Output: 
x: 5
y: 2.5
ch: A
message: Hello, C++!


  
// Question 1.2.2: Temperature Converter:

#include <iostream>
  
int main() {
    double celsius;
    std::cout << "Enter temperature in Celsius: ";
    std::cin >> celsius;
    double fahrenheit = (celsius * 9/5) + 32;
    std::cout << "Temperature in Fahrenheit: " << fahrenheit << std::endl;
  
    return 0;
}

// Question 1.2.3: Mood-Boosting Chatbox

#include <iostream>

int main() {
    char mood;
    std::cout << "Enter your current mood using a single character code (e.g. 'S' for sad): ";
    std::cin >> mood;
    std::cout << "Cheer up! It's just a bad day, not a bad life. Your input: " << mood << std::endl;
  
    return 0;
}
