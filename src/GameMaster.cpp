#include <vector>
#include "GameMaster.h"

using namespace std;

//TO DO: ADD "ROCK PAPER SCISSORS" FUNCTIONALITY

GameMaster::GameMaster()
{
  map = new Map(5,5);
  pos = 0;
}

void GameMaster::attachTeam(Team * inputTeam)
{
  teams.push_back(inputTeam);
}

void GameMaster::detachTeam(Team * inputTeam);
{
  //to-do: add detach functionality.
}

void GameMaster::notify
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
  if(pos >= teams.size())
  {
    currentTurn = 0;
  }
}

bool GameMaster::moveUnit(Unit * inputUnit,string direction)
{
  //can check if should move, Chain of responsibilities.
  return (map.moveUnit(inputUnit, direction));
}
