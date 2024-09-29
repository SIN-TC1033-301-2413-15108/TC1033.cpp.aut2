// Function definition
#include "maximum.hpp"

// Function maximum definition
// x, y and z below are parameters to 
// the maximum function definition

int maximum( int x, int y, int z )
{
   int max = x;

   if ( y > max )
      max = y;

   if ( z > max )
      max = z;

   return max;
}