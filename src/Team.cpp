#include "Team.h"
#include "GameMaster.h"
#include "Unit.h"

Team::Team(GameMaster * inputGameMaster)
{
  gameMaster = inputGameMaster;
}

void Team::addUnit(Unit * inputUnit)
{
  units.push_back(inputUnit);
  gameMaster->addToMap(inputUnit,inputUnit->get_x(),inputUnit->get_y());
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