#ifndef TEAM_H
#define TEAM_H

#include <vector>
#include "GameMaster.h"

using namespace std;

/**
* @class Team
* @brief Is the class from which all concrete Teams inherit
*
*/

class Team
{
  public:
    Team(GameMaster * inputGameMaster);
    virtual ~Team();
    virtual void update() = 0;
    virtual void attack() = 0;
    virtual void turn() = 0;

    virtual void addUnit(Unit * inputUnit);
    void setGameMaster(GameMaster * );
  protected:
    GameMaster * gameMaster;
    vector<Unit*> units;
};

#endif
