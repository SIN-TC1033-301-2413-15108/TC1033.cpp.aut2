#include <iostream>
#include <iomanip>
#include <cstdlib>

int main()
{
  unsigned seed;

  std::cout << "Enter seed: ";
  std::cin >> seed;
  srand( seed );

  for ( int i = 1; i <= 10; i++ ) {
    std::cout << std::setw( 10 ) << 1 + rand() % 6;

    if ( i % 5 == 0 ) 
      std::cout << std::endl;
  }

  return 0;
}