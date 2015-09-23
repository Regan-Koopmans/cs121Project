#ifndef HUMAN_TEAM_H
#define HUMAN_TEAM_H

#include "Team.h"

class HumanTeam : public Team
{
  public:
    virtual void turn();
    virtual void update();
    virtual void attack();
  private:

}

#endif
