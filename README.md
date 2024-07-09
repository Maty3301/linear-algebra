# Linear Algebra Operations Library

This library provides a set of basic operations for linear algebra in C++. It includes operations such as vector addition, subtraction, dot product, cross product, vector magnitude, and finding perpendicular vectors.

## Requirements

C++11 or later is required. Tested with C++20, C++17, C++14 and C++11.

## Installation

To use this library in your C++ project, simply include the appropriate header files in your source code and link against the library during compilation.

## Usage

Here's a quick guide on how to use the library:

1. Include the necessary header files in your C++ code:

```cpp
#include "include/vector_operations.hpp"
```

2. Perform vector operations using the provided functions:

```cpp
Vector2 v1(1, 2);
Vector2 v2(3, 4);
Vector2 result = add(v1, v2);
std::cout << "Addition of vectors: " << result.toString() << '\n';
```

3. Make sure to compile your code with the library linked properly. 

```shell
g++ main.cpp src/*.cpp -o bin/main
```