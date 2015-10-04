#include <iostream>
#include <string>
#include "SinglePlayer.h"

using namespace std;

SinglePlayer::SinglePlayer(string class)
{

}

void SinglePlayer::initUnits()
{
  char input;
  cout << "\tClass Choice" << endl;
  cout << "\t---------------" << endl;

  cout << endl;
  cout << "Would you like to play as a [S]oldier, [M]age or a [T]hief : ";
  cin >> input;

  switch(input)
  {
    case 's':
    case 'S':
    case 'm':
    case 'M':
    case 't':
    case 'T':
  }
}

void SinglePlayer::update()
{

}

void SinglePlayer::attack()
{

}

void SinglePlayer::turn()
{


  cout << "What would you like to do? ";
  cin
}
