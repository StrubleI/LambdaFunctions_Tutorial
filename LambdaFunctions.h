#include <iostream>
#include <vector>
#include <algorithm>

// ==================================
// SECTION 1: Introduction to Lambdas
// ==================================

// Basic lambda that prints a value
auto print = [](int value) {
    std::cout << "Value: " << value << std::endl;
    };

// ==================================
// SECTION 2: Main Program
// ==================================
int main() {
    // Test vector
    std::vector<int> values = { 1, 2, 3, 4, 5 };

    // Using lambdas with std::for_each to print values
    std::cout << "Using Lambda to Print Values:\n";
    std::for_each(values.begin(), values.end(), print);

    // Declare `sum` as a local variable inside `main()`
    int sum = 0;

    // Lambda to calculate the sum of vector elements
    auto addToSum = [&sum](int value) {
        sum += value;
        };

    // Calculate the sum using the lambda
    std::for_each(values.begin(), values.end(), addToSum);
    std::cout << "Sum: " << sum << std::endl;

    return 0;
}