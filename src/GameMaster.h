#ifndef GAME_MASTER_H
#define GAME_MASTER_H

#include <vector>
#include "Unit.h"
#include <string>

class Map;
class Team;

using namespace std;

/**
* @class GameMaster
* @brief Controls the flow of operations in the simulation.
*
*/

class GameMaster
{
  public:

    GameMaster();
    void attachTeam(Team * inputTeam);
    void detachTeam(Team * inputTeam);
    void turn();
    bool moveUnit(Unit * inputUnit, string direction);
    void notify();
    void attack(Unit * attackingUnit, Unit * defendingUnit);
    int getNumberTeams();
    Team * getTeamAt(int index);
    void printMap();
    bool gameOver();
    void addToMap(Unit * inputUnit,int x, int y);
    vector<int> locateUnit(Unit * inputUnit);
    vector<int> requestFreeSpace();

  private:

    Unit *** unitGrid;
    Map * map;
    vector<Team*> teams;
    unsigned int currentTurn;
};

#endif
