#include "Team.h"

Team::Team(GameMaster * inputGameMaster)
{
  gameMaster = inputGameMaster;
}

void Team::addUnit(Unit * inputUnit)
{
  units.push_back(inputUnit);
}

void Team::setGameMaster(GameMaster * inputGameMaster)
{
  gameMaster = inputGameMaster;
}

Team::~Team()
{
  
}
