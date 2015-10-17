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
 	
}
void GameMaster::playGame()
{
    teams.at(0)->turn();
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
    defendingUnit->takeDamage(500);
    damageDivider++;
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

