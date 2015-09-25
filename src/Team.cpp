#include "Team.h"

void Team::addUnit(Unit * inputUnit)
{
  units.push_back(inputUnit);
}

void Team::setGameMaster(GameMaster * inputGameMaster)
{
  gameMaster = inputGameMaster;
}
