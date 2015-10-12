#include <iostream>
#include "Team.h"
#include "GameMaster.h"
#include "Unit.h"

using namespace std;

Team::Team(GameMaster * inputGameMaster)
{
  gameMaster = inputGameMaster;
  map = 0;
}

void Team::addUnit(Unit * inputUnit)
{
  units.push_back(inputUnit);
  vector<int> location = gameMaster->requestFreeSpace();

  //cout << location.size() << endl;

  if (location.size() == 2)
    gameMaster->addToMap(inputUnit,(int)location.at(0),(int)location.at(1));
}

void Team::setGameMaster(GameMaster * inputGameMaster)
{
  gameMaster = inputGameMaster;
}

Team::~Team()
{

}

Unit * Team::getUnitAt(int index)
{
	return units.at(index);
}

void Team::takeDamage(int damage)
{
	Unit * temp;

	while (damage > 0)
	{
		temp  = units.back();
		if (damage > temp->getDamage())
		{
			units.pop_back();
			damage -= temp->getDamage();
		}
		else
		{
			temp->setDamage(temp->getDamage() - damage);
			temp = 0;
		}
	}
}

int Team::getSize()
{
	return units.size();
}
void Team::setMap(Map* m)
{
	map = m;
}
