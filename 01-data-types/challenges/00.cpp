// Tea Information Display
// TODO: Write a program that declares variables to store the type of tea, its price per kilogram (float), and its rating (char). Use data types effectively and print them in a formatted output using escape sequences.

#include <iostream>
#include <string>

using namespace std;

int main()
{
  string tea_type = "Lemon Tea";
  float tea_price_per_kg = 26.25;
  char tea_rating = 'A';

  cout << "The cost of \"" << tea_type << "\"" << " per KG is " << tea_price_per_kg << " and its given a rating of \'" << tea_rating << "\'\n";

  return 0;
}