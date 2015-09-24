#ifndef GAME_MASTER_H
#define GAME_MASTER_H

#include <vector>
#include "Unit.h"
#include <string>

using namespace std;

class GameMaster
{
  public:
    GameMaster();
    void attachTeam(Team * inputTeam);
    void detachTeam(Team * inputTeam);
    void turn();
    bool moveUnit(Unit * inputUnit, string direction);
    void notify();
  private:
    Map * map;
    vector<Team*> teams;
    int currentTurn;
};

#endif
