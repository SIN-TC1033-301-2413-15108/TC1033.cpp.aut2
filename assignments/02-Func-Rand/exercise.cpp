// Shifted, scaled integers produced by 1 + rand() % 6
#include <iostream>
#include <iomanip>
#include <cstdlib>

int main()
{
  for ( int i = 1; i <= 20; i++ ) {
    std::cout << std::setw( 10 ) << ( 1 + rand() % 6 );

    if ( i % 5 == 0 )
        std::cout << std::endl;
  }

  return 0;
}