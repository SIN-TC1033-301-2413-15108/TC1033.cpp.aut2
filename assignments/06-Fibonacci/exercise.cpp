// Recursive fibonacci function
#include <iostream>
#include "fibonacci.hpp"

using std::cout;
using std::cin;
using std::endl;

int main()
{
  unsigned long result, number;

  cout << "Enter an integer: ";
  cin >> number;
  result = fibonacci( number );

  cout << "Fibonacci(" << number << ") = " << result << endl;
  return 0;
}