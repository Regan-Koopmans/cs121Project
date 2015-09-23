#ifndef TEAM_H
#define TEAM_H

#include <vector>
#include "GameMaster.h"

using namespace std;

class Team
{
  public:
    virtual void update() = 0;
    virtual void attack() = 0;
    virtual void turn() = 0;
    
    virtual void addUnit(Unit * inputUnit);
    void setGameMaster(GameMaster * );
  private:
    GameMaster * gameMaster;
    vector<Unit*> units;
};

#endif
