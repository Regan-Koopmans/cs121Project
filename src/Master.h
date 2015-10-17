#ifndef MASTER_H
#define MASTER_H

#include "GameMaster.h"

/**
* @class GameMaster
* @brief Controls the flow of operations in the simulation.
*
*/

class Master : public GameMaster
{
  public:
  	Master();
  	~Master();
    virtual void attachTeam(Team * inputTeam);
    virtual void detachTeam(Team * inputTeam);
	virtual bool moveUnit(Unit * inputUnit, string direction);
    virtual void notify(Team*);
	virtual void printMap();
	virtual void addToMap(Unit * inputUnit,int x, int y);
    virtual vector<int> locateUnit(Unit * inputUnit);
	virtual vector<int> requestFreeSpace();
	virtual Unit* locateUnit(int row, int col);
    virtual void removeDestroyedUnits();
 private:
    Map* map;
    Unit *** unitGrid;
};

#endif
