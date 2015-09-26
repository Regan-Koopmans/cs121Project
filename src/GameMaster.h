#ifndef GAME_MASTER_H
#define GAME_MASTER_H

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
    void attachTeam(Team * inputTeam);
    void detachTeam(Team * inputTeam);
    void addUnit(Team * inputTeam, Unit * inputUnit, unsigned int x, unsigned int y);
    void turn();
    bool moveUnit(Unit * inputUnit, string direction);
    void notify();
    void drawMap();
  private:
    Map * map;
    vector<Team*> teams;
    unsigned int currentTurn;
};

#endif
