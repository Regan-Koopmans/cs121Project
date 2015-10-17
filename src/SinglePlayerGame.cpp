#include "SinglePlayerGame.h"
#include "SinglePlayer.h"
#include  "ComputerTeam.h"

void SinglePlayerGame::setupGame()
{
  gameMaster = Master();

  SinglePlayer * team1 = new SinglePlayer(&gameMaster);
  ComputerTeam * team2 = new ComputerTeam(&gameMaster);

  gameMaster.attachTeam(team1);
  gameMaster.attachTeam(team2);

  team1->initUnits();
  team2->initUnits();
}
