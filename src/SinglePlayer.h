#ifndef SINGLE_PLAYER_H
#define SINGLE_PLAYER_H

#include <string>
#include "Team.h"

using namespace std;

class SinglePlayer
{
  public:
    SinglePlayer(string class);
    void initUnits();
    void update();
    void attack();
    void turn();

  private:

};

#endif
