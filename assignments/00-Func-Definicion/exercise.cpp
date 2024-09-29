#include <iostream>
#include "square.hpp"


int main()
{
  for ( int x = 1; x <= 10; x++ )
    std::cout << square( x ) << " ";

    std::cout << std::endl;
    
    return 0;
 }