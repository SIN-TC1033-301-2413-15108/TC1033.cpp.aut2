#include "fibonacci.hpp"

// Recursive definition of function fibonacci
unsigned long fibonacci( unsigned long n )
{
  if ( n == 0 || n == 1 ) // base case
    return n;
  else // recursive case
    return fibonacci( n - 1 ) + fibonacci( n - 2 );
}