#include <vector>
#include "GameMaster.h"

using namespace std;

GameMaster::GameMaster()
{
  map = new Map(5,5);
  pos = 0;
}

void GameMaster::attachTeam(Team * inputTeam)
{
  teams.push_back(inputTeam)
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

  teams.at(pos)->turn();

  ++pos;
  if(pos >= teams.size())
  {
    pos = 0;
  }
}
