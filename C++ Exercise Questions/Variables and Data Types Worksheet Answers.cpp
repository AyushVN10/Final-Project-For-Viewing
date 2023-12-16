// Question 1.1.1: Variable Challenge:

#include <iostream>

int main(){
  int numStudents = 30;
  float avgHeight = 1.75;
  char teacherLastNameInitial = 'K';
  bool hasProject = true;
  std::string schoolName = "York Mills Collegiate Institute";
  
  return 0;
}



// Question 1.1.2: Numeric Puzzle:

#include <iostream>

int main() {
  int a = 5;
  int b = 2;
  int c = 3;
  
  // Calculate the expression a * b + c / a - b
  int result = a * b + c / a - b;
  
  std::cout << "Result: " << result;
  
  return 0;
}



// Question 1.1.3: Coding Results

#include <iostream>

namespace FirstPosition {
    int grade = 100;
}
namespace SecondPosition {
    int grade = 98;
}
namespace ThirdPosition {
    int grade = 95;
}
namespace DefaultPosition {
    int grade = 90;
}

int main() {
    // Participant securing the first position
    std::cout << "Grade of top student: " << FirstPosition::grade << std::endl;
    // Participant securing the second position
    std::cout << "Grade of second best student: " << SecondPosition::grade << std::endl;
    // Participant securing the third position
    std::cout << "Grade of third best student: " << ThirdPosition::grade << std::endl;
    // All other positions
    std::cout << "Grades of other award winners: " << DefaultPosition::grade << std::endl;
  
    return 0;
}
