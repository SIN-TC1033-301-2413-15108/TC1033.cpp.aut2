// Functions that take no arguments
#include <iostream>

using std::cout;
using std::endl;

void function1();
void function2( void );

int main()
{
  function1();
  function2();

  return 0;
}

void function1()
{
  cout << "function1 takes no arguments" << endl;
}

void function2( void )
{
  cout << "function2 also takes no arguments" << endl;
}