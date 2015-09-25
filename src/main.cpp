#include <iostream>
#include "Unit.h"
#include "Player.h"
#include "Mage.h"
#include "UnitFactory.h"
#include "PiercingFactory.h"
#include "BludgeoningFactory.h"
#include "MagicFactory.h"
#include "PiercingFactory.h"
#include "BludgeoningFactory.h"
#include "Team.h"
#include "HumanTeam.h"
#include "ComputerTeam.h"
#include "GameMaster.h"

using namespace std;

/**
*  @brief An example implementation of the classes
*   in synergy.
*/

int main()
{
  GameMaster gameMaster;

  HumanTeam * team1 = new HumanTeam(&gameMaster);
  gameMaster.attachTeam(team1);
  delete team1;
  return 0;
}
