// Question 3.4.1: Shape Sorcery:

#include <iostream>

void castSpell(int fireStrength) {
  std::cout << "Casting fire spell with strength " << fireStrength << std::endl;
}
void castSpell(double iceMagnitude) {
  std::cout << "Casting ice spell with magnitude " << iceMagnitude << std::endl;
}

int main() {
  castSpell(8);
  castSpell(5.3);
  
  return 0;
}



// Question 3.4.2: Numeric Harmony:

#include <iostream>

template <typename T>
T orchestrate(T note1, T note2) {
  return (note1 + note2) / 2;
}

int main() {
  std::cout << "Harmonic average of 7 and 12: " << orchestrate(7, 12) << std::endl;
  std::cout << "Harmonic average of 2.5 and 4.8: " << orchestrate(2.5, 4.8) << std::endl;
  
  return 0;
}



// Question 3.4.3: Comparison Carnival:

#include <iostream>

template <typename T>
T rollercoaster(T val1, T val2) {
  return (val1 > val2) ? val1 : val2;
}

int main() {
  std::cout << "Maximum of 18 and 25: " << rollercoaster(18, 25) << std::endl;
  std::cout << "Maximum of 3.7 and 9.1: " << rollercoaster(3.7, 9.1) << std::endl;
  std::cout << "Maximum of C and Z: " << rollercoaster('C', 'Z') << std::endl;
  
  return 0;
}
