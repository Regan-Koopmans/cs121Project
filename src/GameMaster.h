#ifndef GAMEMASTER_H
#define GAMEMASTER_H

#include <vector>
#include "Unit.h"
#include <string>

class Map;
class Team;

using namespace std;

class GameMaster
{
public:
	GameMaster();
    virtual void attachTeam(Team * inputTeam) = 0;
    virtual void detachTeam(Team * inputTeam) = 0;
    void playGame();
    virtual bool moveUnit(Unit * inputUnit, string direction) = 0;
    virtual void notify(Team*) = 0;
    void attack(Unit * attackingUnit, Unit * defendingUnit);
    int getNumberTeams();
    Team * getTeamAt(int index);
    virtual void printMap() = 0;
    bool gameOver();
    virtual void addToMap(Unit * inputUnit,int x, int y) = 0;
    virtual vector<int> locateUnit(Unit * inputUnit) = 0;
    virtual Unit* locateUnit(int row, int col) = 0;
    virtual vector<int> requestFreeSpace() = 0;
    virtual void removeDestroyedUnits() = 0;
protected:
    vector<Team*> teams;
    unsigned int currentTurn;
};


#endif