// Question 4.1.1: Element Swap:

#include <iostream>

void swapAdjacentElements(int arr[], int size) {
  for (int i = 0; i < size - 1; i += 2) {
    std::swap(arr[i], arr[i + 1]);
  }
}

int main() {
  int pixels[] = {10, 20, 30, 40, 50, 60, 70};
  int size = sizeof(pixels)/sizeof(pixels[0]);
  
  swapAdjacentElements(pixels, size);
  
  for (int i = 0; i < size; i++) {
    std::cout << pixels[i] << " ";
  }
  std::cout << std::endl;
  
  return 0;
}



// Question 4.1.2: Dynamic Initialization

#include <iostream>

void initializeDynamicArray(int size) {
  int* dynamicArray = new int[size];
  for (int i = 0; i < size; i++) {
    dynamicArray[i] = i + 1;
  }
  
  for (int i = 0; i < size; i++) {
    std::cout << dynamicArray[i] << " ";
  }
  std::cout << std::endl;
  delete[] dynamicArray;
}

int main() {
  int arraySize = 5;
  initializeDynamicArray(arraySize);
  
  return 0;
}



// Questions 4.1.3: Positive Transformation Array:

#include <iostream>

int main() {
  const int maxSize = 100;
  int array[maxSize];
  int size = 0;
  int num;
  do {
    std::cout << "Enter a non-zero integer (enter 0 to stop): ";
    std::cin >> num;
    if (num != 0) {
      array[size] = num;
      size++;
    }
  } while (num != 0);
  std::cout << "Array contents:\n";
  for (int i = 0; i < size; i++) {
    std::cout << array[i] << " ";
  }
  std::cout << std::endl;
  for (int i = 0; i < size; i++) {
    if (array[i] < 0) {
      array[i] = -array[i];
    }
  }
  std::cout << "Positively charged array:\n";
  for (int i = 0; i < size; i++) {
    std::cout << array[i] << " ";
  }
  std::cout << std::endl;
  
  return 0;
}
