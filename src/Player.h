// Definition for class Player

#ifndef PLAYER_H
#define PLAYER_H

#include "Unit.h"

/**

DOXYGEN COMMENT HERE.

*/

class Player : public Unit
{
  public:
    Unit * clone();
    void attack(Unit &inputUnit);
  private:
};

#endif
