#ifndef SINGLEPLAYER_H
#define SINGLEPLAYER_H

#include "DungeonGame.h"

/**
* @class SinglePlayerGame
* @brief a concrete DungeonGame defining a standard single player game.
*/
class SinglePlayerGame : public DungeonGame
{
public:

  /**
  * @brief Implementation creating one ComputerTeam and one SinglePlayer team.
  */
  void setupGame();

   /**
  * @brief Implementation creating one ComputerTeam and one SinglePlayer team.
  */
  void beginGame();

private:
	Master gameMaster;
};

#endif
