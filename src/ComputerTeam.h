#ifndef COMPUTER_TEAM_H
#define COMPUTER_TEAM_H

#include "Team.h"

class ComputerTeam : public Team
{
  public:
    /**
    * @brief
    */
    ComputerTeam(GameMaster * inputGameMaster);
    /**
    * @brief
    */
    virtual void initUnits();
    /**
    * @brief
    */
    virtual void turn();
    /**
    * @brief
    */
    virtual void update(Team*);
    /**
    * @brief
    */
    virtual void attack();

  private:

};

#endif
