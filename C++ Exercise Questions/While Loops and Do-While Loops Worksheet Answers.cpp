// Question 3.1.1: Dynamic Counter:

#include <iostream>

int main() {
    int userInput;
    std::cout << "Enter a positive integer: ";
    std::cin >> userInput;
    int i = 1;
    while (i <= userInput) {
        int square = i * i;
        if (square > 50) {
            break;
        }
        std::cout << "Square of " << i << " is " << square << std::endl;
        i++;
    }
  
    return 0;
}



// Question 3.1.2: The Dungeon Explorer

#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
  int chosenDifficulty;
  std::cout << "Enter your chosen difficulty level (1 to 5): ";
  std::cin >> chosenDifficulty;
  srand(time(0));
  int challengeDifficulty;
  int playerSkillLevel;
  bool exitDungeon = false;
  int currentRoom = 1;
    
  do {
    challengeDifficulty = rand() % 5 + 1;
    std::cout << "You are in room " << currentRoom << ".\n";
    std::cout << "The challenge difficulty for this room is: " << challengeDifficulty << "\n";
    std::cout << "Enter your skill level: ";
    std::cin >> playerSkillLevel;
      
    if (playerSkillLevel >= challengeDifficulty) {
      std::cout << "Congratulations! You have overcome the challenge. Proceed to the next room.\n";
      currentRoom++; 
    } else {
      char tryAgain;
      std::cout << "You were defeated. Do you want to try the same room again? (Y/N): ";
      std::cin >> tryAgain;
        
      if (tryAgain != 'Y' && tryAgain != 'y') {
        exitDungeon = true;
      }
    }
  } while (currentRoom <= 5 && !exitDungeon);
  if (currentRoom > 5) {
    std::cout << "Congratulations! You have completed all the rooms. You are victorious!\n";
  }
    
  return 0;
}



// Question 3.1.3: Countdown to Ignition:

#include <iostream>

using namespace std;
int main() {
    int countdown = 10;
    while(countdown >= 0) {
        cout << "Countdown: " << countdown << endl;
        if(countdown == 0) {
            cout << "Ignition sequence start!" << endl;
            break;
        }
        countdown--;
    }
  
    return 0;
}
