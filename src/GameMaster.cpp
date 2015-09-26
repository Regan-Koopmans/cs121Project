#include <iostream>
#include <vector>
#include "GameMaster.h"
#include "Map.h"
#include "Team.h"

using namespace std;

//TO DO: ADD "ROCK PAPER SCISSORS" FUNCTIONALITY

GameMaster::GameMaster()
{
  map = new Map(50,50);
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

void GameMaster::notify()
{
  for (unsigned int x = 0; x < teams.size(); x++)
  {
    teams[x]->update();
  }
}

void GameMaster::turn()
{
  cout << "It is now Team " << currentTurn + 1;
  cout << "s turn." << endl;
  teams.at(currentTurn)->turn();

  ++currentTurn;
  if(currentTurn >= teams.size())
  {
    currentTurn = 0;
  }
}

bool GameMaster::moveUnit(Unit * inputUnit,string direction)
{
  //can check if should move, Chain of responsibilities.
  return (map->moveUnit(inputUnit, direction));
}

void GameMaster::drawMap()
{
    map->draw();
}

void GameMaster::addUnit(Team * inputTeam, Unit * inputUnit, unsigned int x, unsigned int y)
{
  inputTeam->addUnit(inputUnit);

  map->setMapTile(inputUnit,x,y);
}
