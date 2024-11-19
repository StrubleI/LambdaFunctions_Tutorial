# ⚡ Lambda Functions in C++

Lambda functions are **anonymous functions** introduced in C++11. They provide a modern and concise alternative to traditional function pointers. Lambdas are particularly useful in cases where the behavior of the function is unique or doesn't need a reusable named function.

---

## 📚 Key Concepts

### 🔧 What Are Lambda Functions?

A **lambda function** is a compact way to define a function inline, without having to formally declare it. For example:
```cpp
auto add = [](int a, int b) { return a + b; };
std::cout << add(3, 4); // Outputs 7
```

## 🛠️ Components of a Lambda Function

Capture Clause [ ]: Specifies which variables are captured from the enclosing scope.

Parameter List ( ): Defines input parameters, just like a regular function.

Return Type -> (optional): Explicitly specifies the return type if needed.

Function Body { }: Contains the logic executed when the lambda is invoked.

## 🎯 Why Use Lambda Functions?

Inline Behavior: Avoid creating extra named functions.

Modern Alternative to Function Pointers: Lambdas simplify code while maintaining type safety.

Customizable Algorithms: Replace function pointers in algorithms like std::for_each.

> [!WARNING]  
> Overusing lambdas can make code harder to debug or read, especially with complex capture lists.

## 🚀 Example: Using Lambdas in Place of Function Pointers
Here’s how lambda functions can replace function pointers in practical use cases.

```cpp
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    // Sample vector
    std::vector<int> values = {1, 2, 3, 4, 5};

    // Lambda function to print values
    auto print = [](int value) { std::cout << "Value: " << value << std::endl; };

    // Applying the lambda with a modern algorithm
    std::for_each(values.begin(), values.end(), print);

    // Inline lambda for summing values
    int sum = 0;
    std::for_each(values.begin(), values.end(), [&sum](int value) {
        sum += value;
    });
    std::cout << "Sum: " << sum << std::endl;

    return 0;
}
```

# 🔍 Advanced Concepts

## 🌟 Capture by Value vs. Reference
Capture by Value [=]: Copies the outer variables into the lambda's scope.
Capture by Reference [&]: Refers to the original variables, modifying them if needed.

```cpp
int x = 10;
auto byValue = [x]() { return x + 5; }; // x is copied
auto byRef = [&x]() { return x += 5; }; // x is modified
```

## 🔧 Stateless Lambdas

If a lambda does not capture any variables, it is stateless and can convert to a function pointer.

```cpp
auto stateless = [](int x) { return x * x; };
int(*functionPointer)(int) = stateless; // Valid!
```
## 🔥 Output Explanation

When you run the program:

Printing values with std::for_each:

```cpp
Value: 1
Value: 2
Value: 3
Value: 4
Value: 5
```
Sum calculation:

```cpp
Sum: 15
```

# 📝 Tips for Mastering Lambdas

> [!WARNING]
> Be cautious with capture by reference when dealing with variables that might go out of scope.

> [!NOTE]
> In C++20, lambdas can be constexpr, allowing them to run at compile time:

```cpp
constexpr auto square = [](int x) { return x * x; };
static_assert(square(5) == 25);
```

# Happy coding! 🚀
