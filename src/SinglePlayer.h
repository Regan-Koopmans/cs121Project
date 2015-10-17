#ifndef SINGLE_PLAYER_H
#define SINGLE_PLAYER_H

#include <string>
#include "Team.h"
#include "Master.h"

using namespace std;

/**
* @class SinglePlayer A special case of Team, where there is only one unit.
*/

class SinglePlayer : public Team
{
  public:

    SinglePlayer(GameMaster * gameMaster);
    void initUnits();
    void update(Team*);
    void attack();
    void turn();

  private:
    int killCount;
};

#endif
