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
#include "SinglePlayer.h"
#include "GameMaster.h"

using namespace std;

/**
*  @brief An example implementation of the classes
*   in synergy.
*/

int main()
{
  GameMaster gameMaster;

  SinglePlayer * team1 = new SinglePlayer(&gameMaster);
  ComputerTeam * team2 = new ComputerTeam(&gameMaster);
  gameMaster.attachTeam(team1);

  gameMaster.attachTeam(team2);

team1->initUnits();
team2->initUnits();

	while (!gameMaster.gameOver())
	{
		gameMaster.turn();
		gameMaster.printMap();
	}

  delete team1;
  return 0;
}
