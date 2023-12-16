// Question 2.4.1: Logical Wizardry:

#include <iostream>

int main() {
    int temperature = 28;
    bool isSummer = true;
    if (temperature >= 20 && temperature <= 30 && isSummer) {
        std::cout << "Perfect weather" << std::endl;
    } else {
        std::cout << "Consider indoor activities" << std::endl;
    }
  
    return 0;
}



// Question 2.4.2: Scholarship Eligibility

#include <iostream>

int main() {
    bool isHighSchoolStudent = true;
    bool isCollegeFreshman = false;
    int age = 18;
    bool hasPreviousScholarship = false;
    if ((isHighSchoolStudent || isCollegeFreshman) && age >= 17 && age <= 25 && !hasPreviousScholarship) {
        std::cout << "Congratulations! You qualify for the scholarship" << std::endl;
    } else {
        std::cout << "Sorry, you do not meet the eligibility criteria" << std::endl;
    }
  
    return 0;
}



// Question 2.4.3: Gym Membership Eligibility: 

#include <iostream>

int main() {
    int age;
    char badgeCode;
    float membershipFee;
    
    std::cout << "Enter trainer's age: ";
    std::cin >> age;
    std::cout << "Enter the badge code (B, S, or G): ";
    std::cin >> badgeCode;
    bool isEligible = (age >= 14);
    
    if (isEligible) {
        if (age >= 14 && age <= 25) {
            switch (badgeCode) {
                case 'B':
                    membershipFee = 3.50;
                    break;
                case 'S':
                    membershipFee = 2.50;
                    break;
                case 'G':
                    membershipFee = 1.50;
                    break;
                default:
                    std::cout << "Invalid badge code" << std::endl;
                    return 0;
            }
        } else if (age >= 26 && age <= 40) {
            switch (badgeCode) {
                case 'B':
                    membershipFee = 2.50;
                    break;
                case 'S':
                    membershipFee = 1.75;
                    break;
                case 'G':
                    membershipFee = 1.00;
                    break;
                default:
                    std::cout << "Invalid badge code" << std::endl;
                    return 0;
            }
        } else {
            membershipFee = 1.00;
        }
        std::cout << "Trainer is eligible for membership. Membership fee: $" << membershipFee << std::endl;
    } else {
        std::cout << "Trainer is not eligible for membership" << std::endl;
    }
  
    return 0;
}
