// Question 4.5.1: Sorting and Searching in Vectors:

#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    // Vector with given elements
    std::vector<int> numbers = {5, 2, 8, 1, 7, 3, 6, 4};

    // a) Sort the vector in ascending order
    std::sort(numbers.begin(), numbers.end());

    // b) Search for the element '7' in the sorted vector
    int searchValue = 7;
    bool found = std::binary_search(numbers.begin(), numbers.end(), searchValue);
    std::cout << "Element " << searchValue << (found ? " found." : " not found.") << std::endl;

    // c) Reverse the vector
    std::reverse(numbers.begin(), numbers.end());

    // d) Find the minimum and maximum elements in the reversed vector
    auto minElement = std::min_element(numbers.begin(), numbers.end());
    auto maxElement = std::max_element(numbers.begin(), numbers.end());

    std::cout << "Minimum Element: " << *minElement << std::endl;
    std::cout << "Maximum Element: " << *maxElement << std::endl;

    return 0;
}



// Question 4.5.2: Matrix Operations:

#include <iostream>
#include <vector>

int main() {
    // 2D vector (matrix)
    std::vector<std::vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // a) Print the original matrix
    std::cout << "Original Matrix:" << std::endl;
    for (const auto &row : matrix) {
        for (int element : row) {
            std::cout << element << " ";
        }
        std::cout << std::endl;
    }

    // b) Modify the element at row 0, column 1 to have the value '10'
    matrix[0][1] = 10;

    // c) Add a new row to the matrix with elements {11, 12, 13}
    matrix.push_back({11, 12, 13});

    // d) Iterate through the modified matrix and print each element
    std::cout << "Modified Matrix:" << std::endl;
    for (const auto &row : matrix) {
        for (int element : row) {
            std::cout << element << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}



// Question 4.5.3: Manipulating Sets:

#include <iostream>
#include <set>

int main() {
    // Set with given elements
    std::set<int> mySet = {5, 2, 8, 3};

    // a) Insert the elements 6 and 1 into the set
    mySet.insert(6);
    mySet.insert(1);

    // b) Check if the element '4' is present in the set
    int searchValue = 4;
    if (mySet.count(searchValue) > 0) {
        std::cout << "The value " << searchValue << " is present in the set." << std::endl;
    } else {
        std::cout << "The value " << searchValue << " is not present in the set." << std::endl;
    }

    // c) Remove the element '2' from the set
    mySet.erase(2);

    // d) Display the elements of the set after modifications in ascending order
    std::cout << "Set elements (after modifications): ";
    for (int value : mySet) {
        std::cout << value << " ";
    }
    std::cout << std::endl;

    return 0;
}
