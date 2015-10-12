#ifndef HUMAN_TEAM_H
#define HUMAN_TEAM_H


#include "Team.h"

class GameMaster;

class HumanTeam : public Team
{
  public:
    HumanTeam(GameMaster * inputGameMaster);
    void initUnits();
    virtual void turn();
    virtual void update(Team*);
    virtual void attack();
  private:

};

#endif
