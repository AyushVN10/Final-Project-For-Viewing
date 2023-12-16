// Collections
// In programming, data is often organized into collections, such as lists or arrays, to efficiently work with sets of values.
// They are useful for managing data efficiently; however, there is quite a big difference between collections in C++ and Python.

// C++ Collection Types
// There are various collection data types in C++:
// 1. Array: A fixed-size collection of elements (Almost the same as a Python list).
// 2. Vector: A dynamic array that can grow or shrink in size.
// 3. Set: A collection of unique elements which does not allow duplicate entries.
// 4. Map: A collection of key-value pairs, where each key is associated with a value.

// Arrays
// The most basic collection in C++ is an array.
// An array is a collection of elements of the same type (cannot be different data types and the type is specified when the array is declared).
// C++ arrays have a fixed size that is specified when declared and cannot be changed afterward.
// A C++ array with fewer elements than specified will cause undefined behavior because the uninitialized elements of the array may contain garbage values.
// Here is an example of correctly creating an array:

int myArray[5] = {1, 2, 3, 4, 5}; // Declare an array of size 5 in the main function

// C++ arrays can be initialized without specifying the size if the size can be deduced from the number of elements provided.
// Example: 

int myArray[] = {1, 2, 3, 4, 5}; // Compiler deduces size as 5

// Accessing an array
// Elements in an array are accessed using indices, starting from zero.
// There is no negative indexing in C++ arrays.
// Examples:

std::cout << myArray[0]; // Access the first element
std::cout << myArray[3]; // Access the fourth element

// Arrays are easily mutable, and elements in an array can be modified directly.
// An element in an array cannot be modified to hold a data type different from the one listed during the declaration of the array.

// Example:

myArray[2] = 42; // Modify the third element

// Iterating through an array
// Arrays can be iterated using loops. The standard for loop is often used:

for (int i = 0; i < 5; ++i) {
    std::cout << myArray[i] << " ";
}

// Occasionally, you may want to iterate through an array without the size of the array being known.
// This is where an understanding of memory allocation and the sizeof() function is important, as will be explained now.

// The sizeof() Function
// The sizeof() function in C++ is used to find the size (in bytes) of an object or data type or array.
// It is one of the most important functions in C++ as it helps with memory allocation, array handling, debugging, and efficiency.
// It's particularly useful when working with arrays, structures, or dynamically allocated memory.

// Memory Allocation in C++
// To first understand the sizeof() function, however, you must understand how data is stored in C++.
// Data is stored in memory in C++, and the memory is organized as a linear sequence of bytes with unique addresses.
// Here are the different sizes for each data type:

/*  int:
    Size: Typically 4 bytes (32 bits) on most systems.
    Storage: Stores integers.

    char:
    Size: 1 byte.
    Storage: Stores a single character or a small integer.
    
    double:
    Size: Typically 4 bytes (32 bits).
    Storage: Stores single-precision floating-point numbers. */

// Memory allocation also applies to arrays and will be discussed further in the next lesson.
// With the understanding of bytes and memory, now you can better understand how the sizeof() function works.
// It works by allowing you to check the number of elements in the array by comparing the memory allocated to the data type with the total number of memory allocated to the array.

// Example:
int main() {
    // Creating an array of integers.
    int arr[] = {1, 2, 3, 4, 5};

    // Calculating the number of elements in the array.
    int sizeOfArray = sizeof(arr) / sizeof(arr[0]);

    // Displaying the result.
    std::cout << "Size of the array: " << sizeOfArray << std::endl;

// With this knowledge, you will be able to apply it when iterating through an array.

// Example:

int myArray[] = {1, 2, 3, 4, 5};

// Calculate the number of elements in the array
int arraySize = sizeof(myArray) / sizeof(myArray[0]);

for (int i = 0; i < arraySize; ++i) {
    std::cout << myArray[i] << " ";
}

// While the size of an array may be a concern with regular arrays, this problem is addressed with vectors.

// Vectors (Dynamic Arrays)
// Vectors are dynamic arrays that can change in size during runtime.
// Vectors come from the Standard Template Library, and can be imported like so:

#include <vector> // Goes right under iostream typically

// Vectors offer advantages to regular arrays, such as
/*  - Being able to dynamically resize themselves during runtime providing flexibility and eliminating the need for manually managing memory.
    - Being able to handle memory allocation and deallocation automatically. 
    - Providing efficient insertion and deletion operations with the ability to automatically resize the container.
    - Using a rich set of algorithms provided by the C++ Standard Template Library (STL), making operations like sorting, searching, and manipulation more convenient.
    - Providing iterators, making it easier to iterate through elements using standard C++ iterator-based loops.*/

// Example:

// Declare and initialize a vector of integers
std::vector<int> myVector = {1, 2, 3, 4, 5, 6, 7, 8, 9 ,10};

// Change the size of the vector to 8 and fill the new elements with the value 0
myVector.resize(8, 0);

// Access elements using index
std::cout << "Element at index 2: " << myVector[2] << std::endl;

// Modify elements using index
myVector[3] = 10;
std::cout << "Modified element at index 3: " << myVector[3] << std::endl;

// Add elements to the end of the vector
myVector.push_back(6);
myVector.push_back(7);

// Iterate and print elements
std::cout << "Vector elements: ";
for (int i : myVector) {
    std::cout << i << " ";
}
std::cout << std::endl;

// Size of the vector
std::cout << "Size of the vector: " << myVector.size() << std::endl;

// Remove the last element
myVector.pop_back();

// Check if the vector is empty
if (myVector.empty()) {
    std::cout << "Vector is empty." << std::endl;
} else {
    std::cout << "Vector is not empty." << std::endl;
}

// Clear all elements from the vector
myVector.clear();

// Sets and Maps

// C++ also supports sets and maps from the STL library.
// A set is a container that stores unique elements in no particular order (do not allow duplicate entries)
// Sets come from the Standard Template Library and can be imported and created like so:

#include <set> // Goes right under iostream typically
std::set<int> mySet;

// Here is some of the additional functionality that supports sets in C++:

// Insert elements into the set
mySet.insert(5);
mySet.insert(2);
mySet.insert(8);
mySet.insert(3);
mySet.insert(5); // Duplicates are automatically ignored in a set

// Display the elements in the set (automatically sorted)
std::cout << "Set elements: ";
for (int value : mySet) {
    std::cout << value << " ";
}
std::cout << std::endl;

// Check if an element is present in the set
int searchValue = 3;
if (mySet.find(searchValue) != mySet.end()) {
    std::cout << searchValue << " is present in the set." << std::endl;
} else {
    std::cout << searchValue << " is not present in the set." << std::endl;
}

// Remove an element from the set
mySet.erase(8);

// Additionally, the clear(), size(), and empty() functions, among others, work with sets

// A map is a container that stores key-value pairs in a sorted order based on the keys (like Python dictionaries)
// Each element in a map consists of a key and an associated value.
// Sets come from the Standard Template Library and can be imported and created like so:

#include <map>
std::map<std::string, int> myMap;

// Here is some of the additional functionality that supports maps in C++:

// Insert key-value pairs into the map
myMap["one"] = 1;
myMap["three"] = 3;
myMap["two"] = 2;

// Display the key-value pairs in the map (sorted by key)
std::cout << "Map elements: ";
for (const auto& pair : myMap) {
    std::cout << pair.first << ": " << pair.second << ", ";
}
std::cout << std::endl;

// Check if a key is present in the map
std::string searchKey = "three";
if (myMap.find(searchKey) != myMap.end()) {
    std::cout << searchKey << " is present in the map." << std::endl;
} else {
    std::cout << searchKey << " is not present in the map." << std::endl;
}

// Access the value associated with a key
std::cout << "Value associated with key 'two': " << myMap["two"] << std::endl;

// Remove a key-value pair from the map
myMap.erase("three");

// Additionally, the clear(), size(), and empty() functions (plus more) work with maps

// Iterating through collections
// We can use loops or iterators to iterate through elements in a collection (In arrays, vectors, sets, or maps).
// Iterators are a means of traversing through elements in a collection, offering a more generic alternative to traditional loops 
// When using iterators, since they are part of the Standard Library Template, you must use this header file:

#include <iterator>

// Example:

// Array iteration with iterators (loops iteration already shown previously)
int myArray[] = {1, 2, 3, 4, 5};
for (auto it = std::begin(myArray); it != std::end(myArray); it++) {
    std::cout << *it << " ";
}

// Iterating through a vector:
std::vector<int> myVector = {1, 2, 3, 4, 5};
for (int i : myVector) {
    std::cout << i << " ";
}

// Vector iteration with iterators
for (auto it = myVector.begin(); it != myVector.end(); it++) {
    std::cout << *it << " ";
}

// Iterating through a set:
std::set<int> mySet = {1, 2, 3, 4, 5};
std::cout << "Set elements: ";
for (int value : mySet) {
    std::cout << value << " ";
}
std::cout << std::endl;

// Set iteration with iterators
for (auto it = mySet.begin(); it != mySet.end(); it++) {
    std::cout << *it << " ";
}

// Iterating through a map:
std::map<std::string, int> myMap = {
    {"one", 1},
    {"two", 2},
    {"three", 3}
};

std::cout << "Map elements: ";
for (const auto& pair : myMap) {
    std::cout << pair.first << ": " << pair.second << " ";
}
std::cout << std::endl;

// Map iteration with iterators
for (auto it = myMap.begin(); it != myMap.end(); it++) {
    std::cout << it->first << ": " << it->second << " ";
}

// Pair in Maps
// Maps use a pair to represent key-value associations.
// The `make_pair` function is commonly used to create pairs for map insertion.
std::map<std::string, int> myMap;
myMap.insert(std::make_pair("apple", 3));

// Check if an item exists in a collection
// You can determine if a specified item is present in a collection using conditional statements or iterators.
// There are other methods for checking if an item is in a collection, but this is one of the simplest ways.
// Example:

if (mySet.count(42) > 0) {
    std::cout << "The value 42 is present in the set";
}

// Multidimensional Arrays (Matrices)
// C++ supports multidimensional arrays, often referred to as matrices.
// Declaration and initialization involve specifying the size for each dimension.

// Declare and initialize a 2D vector (matrix)
std::vector<std::vector<int>> matrix = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
};

// Accessing individual elements
int element = matrix[1][2];
std::cout << "Element at row 1, column 2: " << element << std::endl;

// Modifying an element
matrix[0][1] = 10;

// Adding a new row
matrix.push_back({11, 12, 13});

// Iterating through Multidimensional Arrays
// Nested loops are commonly used for iterating through elements of a multidimensional array.
for (int i = 0; i < 3; ++i) {
    for (int j = 0; j < 3; ++j) {
        std::cout << matrix[i][j] << " ";
    }
}

// C++ Standard Library Algorithms
// The <algorithm> header provides a variety of algorithms for working with collections. The header file for these algorithms is:

#include <algorithm>

// Common algorithms include sorting, searching, and manipulation functions.

// Sorting a vector
std::sort(myVector.begin(), myVector.end());

std::vector<int> numbers = {5, 2, 8, 1, 7, 3, 6, 4};

// Search for an element in the vector using std::find
int searchValue = 7;
auto it = std::find(numbers.begin(), numbers.end(), searchValue);

if (it != numbers.end()) {
    std::cout << "Element " << searchValue << " found at index " << std::distance(numbers.begin(), it) << std::endl;
} else {
    std::cout << "Element " << searchValue << " not found in the vector." << std::endl;
}

// Sort the vector using std::sort
std::sort(numbers.begin(), numbers.end());

// Use std::reverse to reverse the vector
std::reverse(numbers.begin(), numbers.end());

// Use std::transform to square each element in the vector
std::transform(numbers.begin(), numbers.end(), numbers.begin(), [](int x) { return x * x; });

// Find the maximum element using std::max_element
std::vector<int> numbers = {5, 2, 8, 1, 7, 3, 6, 4};
auto maxElement = std::max_element(numbers.begin(), numbers.end());

if (maxElement != numbers.end()) {
    std::cout << "Maximum Element: " << *maxElement << std::endl;
} else {
    std::cout << "Vector is empty." << std::endl;
}

// Find the minimum element using std::min_element
std::vector<int> numbers = {5, 2, 8, 1, 7, 3, 6, 4};
auto minElement = std::min_element(numbers.begin(), numbers.end());

if (minElement != numbers.end()) {
    std::cout << "Minimum Element: " << *minElement << std::endl;
} else {
    std::cout << "Vector is empty." << std::endl;
}

// That's it for this lesson! Please work on the six worksheets from this lesson!
