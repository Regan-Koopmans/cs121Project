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
    virtual void initUnits() = 0;
    virtual void update() = 0;
    virtual void attack() = 0;
    virtual void turn() = 0;
    
    void takeDamage(int damage);
    virtual void addUnit(Unit * inputUnit);
    Unit * getUnitAt(int index);
    void setGameMaster(GameMaster * );
    int getSize();
  
  protected:
    GameMaster * gameMaster;
    vector<Unit*> units;
};

#endif
