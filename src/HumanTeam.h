#ifndef HUMAN_TEAM_H
#define HUMAN_TEAM_H


#include "Team.h"

class GameMaster;
/**
* @class HumanTeam
* @brief Concrete Team that has a number of Units.
*/
class HumanTeam : public Team
{
  public:
    /**
    * @brief Constructor for class HumanTeam.
    */
    HumanTeam(GameMaster * inputGameMaster);
    /**
    * @brief Concrete implementation of initiation of units.
    */
    void initUnits();
    /**
    * @brief Concrete implementation of turn.
    */
    virtual void turn();
    /**
    * @brief Observer function for updating.
    */
    virtual void update(Team*);
    /**
    * @brief Concrete implementation of turn.
    */
    virtual void attack();
  private:

};

#endif
