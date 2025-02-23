// Favorite Tea Input
// TODO: Write a program that takes the user’s favorite tea as input using getline and also asks how many cups of tea they want using cin. Display the result in a fun message.

#include <iostream>

using namespace std;

int main()
{
  string favorite_tea = "";
  cout << "What is your favorite tea? ";
  getline(cin, favorite_tea);

  int no_of_cups = 0;
  cout << "How many cups of tea would you like? ";
  cin >> no_of_cups;

  cout << "Your favorite tea is \"" << favorite_tea << "\" and you have ordered " << no_of_cups << " cups of tea." << endl;

  return 0;
}