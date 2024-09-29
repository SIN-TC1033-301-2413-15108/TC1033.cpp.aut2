// Using overloaded functions
#include <iostream>

using std::cout;
using std::endl;

int square( int x ) { return x * x; }

double square( double y ) { return y * y; }

int main()
{
  cout << "The square of integer 7 is " << square( 7 )
  << "\nThe square of double 7.5 is " << square( 7.5 ) 
  << endl; 

  return 0;
}