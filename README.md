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


```cpp

```


```cpp

```


```cpp

```


```cpp

```
