#ifndef GAME_MASTER_H
#define GAME_MASTER_H

#include <vector>
#include "Unit.h"

using namespace std;

class GameMaster
{
  public:
    GameMaster();
    void attachTeam(Team * inputTeam);
    void detachTeam(Team * inputTeam);
    void turn();
    void notify();
  private:
    Map * map;
    vector<Team*> teams;
    int currentTurn;
};

#endif
