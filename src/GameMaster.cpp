#include <iostream>
#include <vector>
#include "GameMaster.h"
#include "Map.h"
#include "Team.h"

using namespace std;

//TO DO: ADD "ROCK PAPER SCISSORS" FUNCTIONALITY

GameMaster::GameMaster()
{
  map = new Map(100,100);
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
  //can check if should move, links to Chain of responsibility.
  return (map->moveUnit(inputUnit, direction));
}

void GameMaster::attack(Unit * attackingUnit, Team * attackTeam)
{
	
}

int GameMaster::getNumberTeams()
{
	return teams.size();
}