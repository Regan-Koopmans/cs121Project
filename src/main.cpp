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

  Unit * unit1 = new Mage();
  HumanTeam * team1 = new HumanTeam(&gameMaster);
  gameMaster.attachTeam(team1);
  gameMaster.addUnit(team1,unit1,10,10);
  gameMaster.drawMap();
  for (int x = 0; x< 3; x++)
  {
    gameMaster.moveUnit(unit1,"left");
    cout << endl;
    gameMaster.drawMap();
  }
  delete team1;
  delete unit1;
  return 0;
}
