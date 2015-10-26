#ifndef SINGLE_PLAYER_H
#define SINGLE_PLAYER_H

#include <string>
#include "Team.h"
#include "Master.h"

using namespace std;

/**
* @class SinglePlayer
* @brief  A special case of Team, where there is only one unit.
*/

class SinglePlayer : public Team
{
  public:

    /**
    * @brief Constructor for class SinglePlayer
    */
    SinglePlayer(GameMaster * gameMaster);
    /**
    * @brief Concrete implementation of initiation of units.
    */
    void initUnits();
    /**
    * @brief Observer function for updating.
    */
    void update(Team*);
    /**
    * @brief Concrete implementation of turn.
    */
    void attack();
    /**
    * @brief Concrete implementation of turn.
    */
    void turn();

  private:
    int killCount;
};

#endif
