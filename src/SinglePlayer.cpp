#include <iostream>
#include <string>
#include <stdlib.h>
#include "BludgeoningFactory.h"
#include "UnitFactory.h"
#include "MagicFactory.h"
#include "PiercingFactory.h"
#include "SinglePlayer.h"
#include "Master.h"

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

void SinglePlayer::update(Team* inputTeam)
{
  if (this != inputTeam)
  {
    turn();
  }
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
  bool hit = false;

  while (!hit)
  {
    cin >> direction;
    // locate the player
    vector <int> location = gameMaster->locateUnit(this->units[0]);
    int row = location[0];
    int column = location[1];
    if (direction == "w")
    {
      for (int i = row - 1; i >= 0; --i)
      {
        if (map->getMapTile(i, column) == '&')
        {
          gameMaster->attack(this->units[0], gameMaster->locateUnit(i, column));
          hit = true;
          break;
        }
      }
    }
    else if (direction == "s")
    {
      for (int i = row + 1; i < map->getMapSizeY(); i++)
      {
        if (map->getMapTile(i, column) == '&')
        {
          gameMaster->attack(this->units[0], gameMaster->locateUnit(i, column));
          hit = true;
          break;
        }
      }
    }
    else if (direction == "a")
    {
      for (int i = column - 1; i >= 0; --i)
      {
        if (map->getMapTile(row, i) == '&')
        {
          gameMaster->attack(this->units[0], gameMaster->locateUnit(row, i));
          hit = true;
          break;
        }
      }
    }
    else if (direction == "d")
    {
      for (int i = column + 1; i < map->getMapSizeX(); i++)
      {
        if (map->getMapTile(row, i) == '&')
        {
          gameMaster->attack(this->units[0], gameMaster->locateUnit(row, i));
          hit = true;
          break;
        }
      }
    }
    if (hit)
    {
      cout << "Target Hit!" << endl;
    }
    else
    {
      cout << "There is no target in that direction!" << endl;
      turn();
    }
  }
}
void SinglePlayer::turn()
{
  cout << "It is now Player 1's turn " << endl;
  string inputString;

  cout << "\nWhat would you like to do? ";
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
  gameMaster->notify(this);
}
