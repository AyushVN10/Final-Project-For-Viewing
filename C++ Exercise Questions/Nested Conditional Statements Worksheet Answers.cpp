// Question 2.2.1: Ticket Pricing Wonderland: 

#include <iostream>

int main() {
    int age;
    bool likesRollerCoasters, isThrillSeeker;
    std::cout << "Enter age: ";
    std::cin >> age;
    if (age <= 12) {
        std::cout << "Do you prefer roller coasters? (1 for yes, 0 for no): ";
        std::cin >> likesRollerCoasters;
        if (likesRollerCoasters) {
            std::cout << "Child Roller Coaster Enthusiast - $10." << std::endl;
        } else {
            std::cout << "Child, but not into roller coasters - $8." << std::endl;
        }
    } else if (age >= 13 && age <= 17) {
        std::cout << "Teen Ticket - $12." << std::endl;
    } else {
        std::cout << "Are you a thrill-seeker? (1 for yes, 0 for no): ";
        std::cin >> isThrillSeeker;
        if (isThrillSeeker) {
            std::cout << "Adult Thrill-Seeker - $15." << std::endl;
        } else {
            std::cout << "Regular Adult - $10." << std::endl;
        }
    }
    return 0;
}



// Question 2.2.2: Gadget Shipping Validator: 

#include <iostream>

int main() {
    double weight;
    int dimensions;
    std::cout << "Enter the weight of the gadget in kilograms: ";
    std::cin >> weight;
    std::cout << "Enter the dimensions of the gadget in cubic centimeters: ";
    std::cin >> dimensions;
    if (weight > 15) {
        std::cout << "The gadget is too heavy for standard shipping." << std::endl;
    } 
    if (dimensions > 50000) {
        std::cout << "The gadget is too large for standard shipping." << std::endl;
    } 
    
    if (weight > 15 && dimensions > 50000) {
        std::cout << "The gadget is both too heavy and too large for standard shipping." << std::endl;
    } else if (weight <= 15 && dimensions <= 50000) {
        std::cout << "The gadget is eligible for standard shipping." << std::endl;
    }
  
    return 0;
}



// Question 2.2.3: Library Book Recommender: 

#include <iostream>
#include <string>

int main() {
    std::string genre, fictionPreference;
    std::cout << "Enter your preferred genre (Mystery, Science Fiction, Historical): ";
    std::cin >> genre;
    
    if (genre == "Mystery") {
        std::cout << "Do you prefer fiction? (yes/no): ";
        std::cin >> fictionPreference;
        if (fictionPreference == "yes") {
            std::cout << "Recommendation: Popular mystery novel" << std::endl;
        } else {
            std::cout << "Recommendation: True crime or investigative journalism book" << std::endl;
        }
    } else if (genre == "Science Fiction") {
        std::cout << "Do you prefer fiction? (yes/no): ";
        std::cin >> fictionPreference;
        if (fictionPreference == "yes") {
            std::cout << "Recommendation: Captivating sci-fi or fantasy novel" << std::endl;
        } else {
            std::cout << "Recommendation: Science-related or mythology exploration book" << std::endl;
        }
    } else if (genre == "Historical") {
        std::cout << "Do you prefer fiction? (yes/no): ";
        std::cin >> fictionPreference;
        if (fictionPreference == "yes") {
            std::cout << "Recommendation: Well-researched historical novel" << std::endl;
        } else {
            std::cout << "Recommendation: Biography or historical documentation" << std::endl;
        }
    } else {
        std::cout << "Invalid genre selection" << std::endl;
    }
  
    return 0;
}
