#include <iostream>

#include <vector>
#include <time.h>
#include <stdlib.h>
#include "Master.h"
#include "Map.h"              
#include "Team.h"

using namespace std;

Master::Master() : GameMaster()
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
void Master::notify(Team* inputTeam)
{
  if (!gameOver())
  {
    removeDestroyedUnits();
    printMap();
    for (unsigned int x = 0; x < teams.size(); x++)
    {
      teams[x]->update(inputTeam);
    }
  }
}
void Master::printMap()
{
  map->printMap();
}
Master::~Master()
{

}
void Master::removeDestroyedUnits()
{
  for (unsigned int i = 0; i < teams.size(); i++)
  {
    for (int j = 0; j < teams[i]->getSize(); j++)
    {
      if (teams[i]->getUnitAt(j)->getHealth() == 0)
      {
        vector<int> location = locateUnit(teams[i]->getUnitAt(j));
        if (location.size() > 0)
        {
          unitGrid[location.at(0)][location.at(1)] = 0;
          map->setMapTile(' ', location.at(0), location.at(1));
        }
      }
    }
  }
}
vector<int> Master::requestFreeSpace()
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
vector<int> Master::locateUnit(Unit * inputUnit)
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
void Master::addToMap(Unit * inputUnit,int x, int y)
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

bool Master::moveUnit(Unit * inputUnit,string direction)
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
void Master::attachTeam(Team * inputTeam)
{
  inputTeam->setMap(map);
  teams.push_back(inputTeam);
}

void Master::detachTeam(Team * inputTeam)
{
  //to-do: add detach functionality.
}
Unit* Master::locateUnit(int row, int col)
{
  return unitGrid[row][col];
}