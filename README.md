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


```cpp

```


```cpp

```


```cpp

```
