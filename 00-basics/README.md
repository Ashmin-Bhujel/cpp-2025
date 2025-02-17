# Basics of C++

- Compiled programming language.
- Source Code -> Compiler -> Binaries
- One of the fastest and close to system programming language.
- Statically typed, Object Oriented programming language.
- In active development and many more features and upgrades are coming in future.

## Structure of a C++ program

```
- Preprocessor directives e.g. #include, #define
- Namespaces
- Main function
```

```c++
#include <iostream>

using namespace std;

int main(void) {
  cout << "Hello, World" << endl;
  return 0;
}
```

## Variables and Constants

- We use variables and constants to store data in a program.
- Variable can be first declared, then initialized later or can be declared and initialized in same statement.
- Values can be modified in later in variables.
- Constants must be declared and initialized in same statement.
- Values cannot be modified later in case of constants.
- We should not use predefined keywords for naming variables and constants and follow the naming conventions.
  - Identifiers can start with letter or underscore but not with numbers.
  - We should not use special characters for the identifers.
  - We should use meaningful names as identifiers.

```c++
// Variable declaration
int age;

// Variable initialization
age = 21;

// Variable declaration and initialization in single line
int balance = 500;

// Constant
const int uid = 12345;
```
