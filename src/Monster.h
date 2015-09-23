// Definition for class Monster

#ifndef MONSTER_H
#define MONSTER_H

#include "Unit.h"

/**

DOXYGEN COMMENT HERE.

*/

class Monster : public Unit
{
public:
  Unit * clone();
private:
};

#endif
