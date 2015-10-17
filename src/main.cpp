#include <iostream>

#include "SinglePlayerGame.h"
#include "DungeonGame.h"

using namespace std;

/**
*  @brief An example implementation of the classes
*   in synergy.
*/

int main()
{
  DungeonGame * game = new SinglePlayerGame;
  
  game->setupGame();
  game->beginGame();

  delete game;
  return 0;
}
