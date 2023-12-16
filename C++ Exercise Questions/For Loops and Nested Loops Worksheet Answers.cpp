// Question 3.2.1: The Loop Maze Code Challenge:

#include <iostream>

int main() {
  bool escape = false;
  
  for (int i = 0; i < 5; i++) {
    std::cout << "Making move " << i + 1 << "\n";
    for (int j = 0; j < 5; j++) {
      std::cout << "Taking step " << j + 1 << "\n";
      if (i == 3 && j == 4) {
        std::cout << "You have escaped the loop maze! Freedom at last!\n";
        escape = true;
        break;
      }
    }
    if (escape) {
      break;
    }
  }
  
  return 0;
}



// Question 3.2.2: Kingdom of For Loop Adventures:

#include <iostream>
#include <string>

int main() {
  int choice;
  bool adventureComplete = false;

  while (!adventureComplete) {
    std::cout << "Welcome to the Enchanted Kingdom of For Loop Adventures!\n";
    std::cout << "1. Begin your quest\n";
    std::cout << "2. Continue your adventure\n";
    std::cout << "3. Face the final challenge\n";
    std::cout << "4. Exit the kingdom\n";
    std::cout << "Enter your choice: ";
    std::cin >> choice;

    switch (choice) {
      case 1:
        for (int chapter = 1; chapter <= 3; chapter++) {
          std::cout << "Chapter " << chapter << ": Once upon a time...\n";
        }
        break;
      case 2:
        for (int level = 1; level <= 5; level++) {
          std::cout << "Level " << level << ": Continuing the adventure...\n";
        }
        break;
      case 3:
        for (int challenge = 1; challenge <= 2; challenge++) {
          std::cout << "Facing challenge " << challenge << ": The final conquest...\n";
        }
        break;
      case 4:
        std::cout << "Exiting the Enchanted Kingdom. Farewell!\n";
        adventureComplete = true;
        break;
      default:
        std::cout << "Invalid choice. Please try again.\n";
    }
  }

  return 0;
}



// Question 3.2.3: Pattern Party with For Loops:

#include <iostream>

int main() {
  for (int i = 1; i <= 5; i++) {
    for (int j = 1; j <= i; j++) {
      std::cout << "* ";
    }
    std::cout << "\n";
  }
  std::cout << "Pattern Party is a blast! The colorful patterns light up the dance floor!\n";
  
  return 0;
}
