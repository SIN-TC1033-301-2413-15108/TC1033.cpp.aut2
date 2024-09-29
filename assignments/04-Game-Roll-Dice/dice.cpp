#include <iostream>
#include <cstdlib>
#include "dice.hpp"

int rollDice( void )
{
  int die1, die2, workSum;

  die1 = 1 + rand() % 6;
  die2 = 1 + rand() % 6;
  workSum = die1 + die2;
  std::cout << "Player rolled " << die1 << " + " << die2 << " = " << workSum << std::endl;

  return workSum;
}