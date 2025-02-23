// Modify Tea Prices
// TODO: Create a program where the user inputs a base price for tea. Use type casting to increase the price by 10% and display the rounded new price using explicit casting.

#include <iostream>

using namespace std;

int main()
{
  int base_price = 26;
  float new_price = base_price + (base_price * 0.1);

  cout << "The base price was Rs." << base_price << " and the new price after increasing the price by 10 percent is Rs." << (int)new_price << endl;

  return 0;
}