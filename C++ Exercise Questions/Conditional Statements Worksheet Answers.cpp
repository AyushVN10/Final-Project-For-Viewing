// Question 2.1.1: Artistic Code Blocks:

#include <iostream>
#include <string>

int main() {
    std::string shape;
    std::cout << "Enter a shape (circle or square): ";
    std::cin >> shape;
    if (shape == "circle") {
        std::cout << "Print circle ASCII art" << std::endl;
    } else if (shape == "square") {
        std::cout << "Print square ASCII art" << std::endl;
    } else {
        std::cout << "Sorry, that shape is not supported." << std::endl;
    }
  
    return 0;
}



// Question 2.1.2: C++ Movie Ticket Pricing:

#include <iostream>
int main() {
    int age;
    double ticketPrice;
    std::cout << "Enter your age: ";
    std::cin >> age;
    if (age >= 0 && age <= 12) {
        ticketPrice = 5.00;
    } else if (age >= 13 && age <= 17) {
        ticketPrice = 7.50;
    } else if (age >= 18 && age <= 59) {
        ticketPrice = 10.00;
    } else {
        ticketPrice = 8.00;
    }
    std::cout << "The ticket price is: $" << ticketPrice << std::endl;
    return 0;
}



// Questions 2.1.3: Adventure Game Decision Maker:

#include <iostream>

int main() {
    int health = 60;
    int courage = 80;
    if (health > 75) {
        std::cout << "Face challenges bravely!" << std::endl;
    } else if (health >= 50 && health <= 75) {
        std::cout << "Be cautious, potential dangers ahead." << std::endl;
    } else {
        std::cout << "Prioritize healing before facing further challenges." << std::endl;
    }
    if (courage > 75) {
        std::cout << "Take bold actions!" << std::endl;
    } else if (courage >= 50 && courage <= 75) {
        std::cout << "Consider risks before making decisions." << std::endl;
    } else {
        std::cout << "Approach cautiously to avoid potential pitfalls." << std::endl;
    }
  
    return 0;
}
