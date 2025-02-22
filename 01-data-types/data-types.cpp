// Data Types
#include <iostream>

using namespace std;

int main()
{
  // Primitive data types
  int age = 21;
  float bank_balance = 500.00;
  char user = 'A';
  bool is_awesome = true;

  // Derived data types
  // Array of char
  char username[7] = "Ashmin";
  // Array of int
  int nums[5] = {0, 1, 1, 2, 3};

  // User defined data types
  struct User
  {
    string name;
    int age;
  };

  return 0;
}