//Name:
// This program calculates a person's height in feet (') and inches (").

#include <iostream>

int main()
{
  int feet, height, inches;

  //Get the persons height in inches
  std::cout << "Please enter the person's height in inches: ";
  std::cin >> height;

  //Convert inches to feet and inches
  feet= height / 12;
  inches = height % 12;

  std::cout << "The person is " << feet << "'" << inches << "\"" << '\n';

  return 0;
}
