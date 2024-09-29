#include <iostream>
#include "maximum.hpp"

int main()
{
  int a, b, c;

  std::cout << "Enter three integers: ";
  std::cin >> a >> b >> c;

// a, b and c below are arguments to 
// the maximum function call

  std::cout << "Maximum is: " << maximum( a, b, c ) << std::endl;

  return 0;
}