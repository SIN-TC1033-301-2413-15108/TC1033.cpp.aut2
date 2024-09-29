// Craps
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "dice.hpp"

int main()
{
  enum Status { CONTINUE, WON, LOST };
  int sum, myPoint;
  Status gameStatus;

  srand( time( 0 ) );
  sum = rollDice(); // first roll of the dice

  switch ( sum ) {
      case 7: 
      case 11: // win on first roll
          gameStatus = WON;
          break;
      case 2: 
      case 3: 
      case 12: // lose on first roll
          gameStatus = LOST;
          break;
      default: // remember point
          gameStatus = CONTINUE;
          myPoint = sum;
          std::cout << "Point is " << myPoint << std::endl;
          break; // optional 
  }

  while ( gameStatus == CONTINUE ) { // keep rolling
    sum = rollDice();

    if ( sum == myPoint ) // win by making point
        gameStatus = WON;
    else
        if ( sum == 7 ) // lose by rolling 7
          gameStatus = LOST;
  }

  if ( gameStatus == WON )
    std::cout << "Player wins" << std::endl;
  else
    std::cout << "Player loses" << std::endl;

  return 0;
}