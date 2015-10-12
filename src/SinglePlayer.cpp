#include <iostream>
#include <string>
#include <stdlib.h>
#include "BludgeoningFactory.h"
#include "UnitFactory.h"
#include "MagicFactory.h"
#include "PiercingFactory.h"
#include "SinglePlayer.h"

using namespace std;

// SinglePlayer::SinglePlayer()
// {
//
// }
//
// SinglePlayer::SinglePlayer(string inputClass)
// {
//
// }

SinglePlayer::SinglePlayer(GameMaster * gameMaster) : Team(gameMaster)
{
  killCount = 0;
}

void SinglePlayer::initUnits()
{
  UnitFactory * factory = 0;
  char input;
  cout << "\tClass Choice" << endl;
  cout << "\t-------------" << endl;

  cout << endl;
  cout << "Would you like to play as a [S]oldier, [M]age or a [T]hief : ";
  cin >> input;

  switch(input)
  {
    case 's': factory = new BludgeoningFactory;
    break;
    case 'S': factory = new BludgeoningFactory;
    break;
    case 'm': factory = new MagicFactory;
    break;
    case 'M': factory = new MagicFactory;
    break;
    case 't': factory = new PiercingFactory;
    break;
    case 'T': factory = new PiercingFactory;
    break;
  }

  addUnit(factory->createPlayer());
  delete factory;
}

void SinglePlayer::update()
{

}

void SinglePlayer::attack()
{
  string direction;

  if (units.at(0)->getClass() == "Magic")
  {
    cout << "[Fireball] -> Enter direction: ";
  }

  if (units.at(0)->getClass() == "Piercing")
  {
    cout << "[Arrow] -> Enter direction: ";
  }

  if (units.at(0)->getClass() == "Bludgeoning")
  {
    cout << "[Axe] -> Enter direction: ";
  }
  cin >> direction;
  cout << '\a';
}

void SinglePlayer::turn()
{
  string inputString;

  cout << "What would you like to do? ";
  cin >> inputString;

 
  if (inputString == "north" || inputString == "n" )

  if (inputString == "north" || inputString == "n")
    gameMaster->moveUnit(units.at(0),"up");

  if (inputString == "south" || inputString == "s")
    gameMaster->moveUnit(units.at(0),"down");

  if (inputString == "east" || inputString == "e")
    gameMaster->moveUnit(units.at(0),"right");

  if (inputString == "west" || inputString == "w")
    gameMaster->moveUnit(units.at(0),"left");

  if (inputString == "attack" || inputString == "a")
    attack();

  if (inputString == "concede" || inputString == "c")
  {
    cout << "You have conceded! Game over!" << endl;
    exit(0);
  }
}
