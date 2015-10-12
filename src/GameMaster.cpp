#include <iostream>
#include <vector>
#include <time.h>
#include <stdlib.h>
#include "GameMaster.h"
#include "Map.h"
#include "Team.h"

using namespace std;



GameMaster::GameMaster()
{
  map = new Map((char*)"Map.txt");
  unitGrid = new Unit ** [map->getMapSizeX()];
  for (int x = 0; x < map->getMapSizeX(); x++)
  {
    unitGrid[x] = new Unit * [map->getMapSizeY()];
    for (int y = 0; y < map->getMapSizeY(); y++)
    {
      unitGrid[x][y] = 0;
    }
  }
  currentTurn = 0;
}

void GameMaster::attachTeam(Team * inputTeam)
{
  teams.push_back(inputTeam);
}

void GameMaster::detachTeam(Team * inputTeam)
{
  //to-do: add detach functionality.
}

void GameMaster::notify(Team* inputTeam)
{
  if (!gameOver())
  {
    printMap();
    for (unsigned int x = 0; x < teams.size(); x++)
    {
      teams[x]->update(inputTeam);
    }
  }
}

void GameMaster::playGame()
{
    teams.at(0)->turn();
}

bool GameMaster::moveUnit(Unit * inputUnit,string direction)
{
  //can check if should move, links to Chain of responsibility.
  vector<int> location = locateUnit(inputUnit);
  int newX, newY;

  switch(direction[0])
  {
    case 'u': newX = location.at(0) - 1;
              newY = location.at(1);
    break;
    case 'd': newX = location.at(0) + 1;
              newY = location.at(1);
    break;
    case 'l': newX = location.at(0);
              newY = location.at(1) - 1;
    break;
    case 'r': newX = location.at(0);
              newY = location.at(1) + 1;
    break;
  }

  if (location.size() == 2 && unitGrid [newX][newY] == 0 && map->getMapTile(newX,newY) == ' ')
  {
  if (location.size() == 2)
  {
    unitGrid[newX][newY] = inputUnit;
    unitGrid[location.at(0)][location.at(1)] = 0;
    return(map->Move(location.at(0),location.at(1),newX,newY));
  }
  else
  {
    return false;
  }
  }
  return false;
}

void GameMaster::attack(Unit * attackingUnit, Unit * defendingUnit)
{
  int damageDivider;

  if (attackingUnit->getClass() == "Magic")
  {
    if (defendingUnit->getClass() == "Magic")
      damageDivider = 3;

    if (defendingUnit->getClass() == "Piercing")
      damageDivider = 2;

    if (defendingUnit->getClass() == "Bludgeoning")
      damageDivider = 1;
  }
  else if (attackingUnit->getClass() == "Piercing")
  {
    if (defendingUnit->getClass() == "Piercing")
      damageDivider = 3;

    if (defendingUnit->getClass() == "Bludgeoning")
      damageDivider = 2;

    if (defendingUnit->getClass() == "Magic")
      damageDivider = 1;
  }
  else
  {
    if (defendingUnit->getClass() == "Bludgeoning")
      damageDivider = 3;

    if (defendingUnit->getClass() == "Magic")
      damageDivider = 2;

    if (defendingUnit->getClass() == "Piercing")
      damageDivider = 1;
  }

	int attackingDamage = attackingUnit->getDamage()/damageDivider;
	while(attackingDamage > 0)
	{
		defendingUnit->takeDamage(attackingDamage);
    attackingDamage -= defendingUnit->getHealth();
	}
}

int GameMaster::getNumberTeams()
{
	return teams.size();
}

Team * GameMaster::getTeamAt(int index)
{
	return teams.at(index);
}

bool GameMaster::gameOver()
{
	return (!(teams.size() > 1));
}

void GameMaster::printMap()
{
	map->printMap();
}

void GameMaster::addToMap(Unit * inputUnit,int x, int y)
{

	unitGrid[x][y] = inputUnit;

  bool player = false;

for (unsigned int j = 0; j < 1; j++)
{
  for (int i = 0; i < teams.at(j)->getSize(); i++)
  {
    if (inputUnit == teams.at(j)->getUnitAt(i))
    {
      player = true;
    }
  }

}

  if (player)
  map->setMapTile('@',x,y);
  else
  map->setMapTile('&',x,y);
}

vector<int> GameMaster::locateUnit(Unit * inputUnit)
{
  vector<int> location;
  for (int x = 0; x < map->getMapSizeX(); x++)
  {
    for (int y = 0; y < map->getMapSizeY(); y++)
    {
      if (unitGrid[x][y] == inputUnit)
      {
        location.push_back(x);
        location.push_back(y);
        return location;
      }
    }
  }
  return location;
}

vector<int> GameMaster::requestFreeSpace()
{
  vector<int> location;
  srand(time(NULL));

  int x,y;

  do
  {

    x = rand() % 19 + 1;
    y = rand() % 19 + 1;

  } while (map->getMapTile(x,y) != ' ' || unitGrid[x][y] != 0);

  location.push_back(x);
  location.push_back(y);
  return location;
}
