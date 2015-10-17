#ifndef DUNGEONGAME_H
#define DUNGEONGAME_H

#include "GameMaster.h"

/**
* @class DungeonGame
* @brief A simple interface for creating typical games
*/

class DungeonGame
{
  public:

    /**
    * @brief Pure virtual function, which concrete games will define specific to requirements.
    */
    virtual void setupGame() = 0;
    /**
    * @brief Standard function for begining games of all concrete games.
    */
    void beginGame();
    /**
    * @brief virtual destructor, in case child classes use dynamic memory.
    */
    virtual ~DungeonGame();

  protected:
    /**
    * @brief A instance of GameMaster that is the entry point to the rest of the system.
    */
    GameMaster gameMaster;
};

#endif
