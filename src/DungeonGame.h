#ifndef DUNGEONGAME_H
#define DUNGEONGAME_H

#include "Master.h"

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
    * @brief Pure virtual function for begining games of all concrete games.
    */
    virtual void beginGame() = 0;

    /*
    * @brief Virtual destructor
    */
    virtual ~DungeonGame();
};

#endif
