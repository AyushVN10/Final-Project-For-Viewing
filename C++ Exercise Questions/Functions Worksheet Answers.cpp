// Question 3.3.1: Virtual Pet Adoption Center:

#include <iostream>
#include <string>

void adoptVirtualPet(std::string petName, std::string petType) {
  std::cout << "Congratulations! You've adopted a " << petType << " named " << petName << "\n";
}

int main() {
  adoptVirtualPet("Fido", "Dog");
  adoptVirtualPet("Whiskers", "Cat");
  adoptVirtualPet("Buddy", "Parrot");
  
  return 0;
}



// Question 3.3.2: Palindrome Check:

#include <iostream>
#include <string>

bool isDynamicPalindrome(const std::string& str) {
  int start = 0, end = str.length() - 1;
  while (start < end) {
    if (str[start] != str[end]) {
      return false;
    }
    start++;
    end--;
  }
  
  return true;
}

int main() {
  std::cout << std::boolalpha;
  std::cout << isDynamicPalindrome("abcdeedcba") << "\n";
  std::cout << isDynamicPalindrome("hello") << "\n";
  
  return 0;
}



// Question 3.3.3: Gravitational Pull Calculator:

#include <iostream>

double calculateGravitationalPull(double mass, double distance) {
  const double gravitationalConstant = 6.67430E-11;
  return (gravitationalConstant * mass) / (distance * distance);
}

int main() {
  double mass;
  std::cout << "Enter the mass (in kg): ";
  std::cin >> mass;
  for (int distance = 1; distance <= 50; distance += 5) {
    std::cout << "Gravitational pull at " << distance << "m: " << calculateGravitationalPull(mass, distance) << " N\n";
  }
  
  return 0;
}
