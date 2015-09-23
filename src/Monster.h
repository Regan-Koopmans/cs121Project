// Definition for class Monster

#ifndef MONSTER_H
#define MONSTER_H

#include "Unit.h"

/**
* @class Monster
* @brief Is the class from which all concrete Monsters derive
* inherites from Unit.
* @see Unit
*/

class Monster : public Unit
{
public:

  /**
  * @brief Implementation of inherited virtual function.
  * @return Unit* containing a deep copy of this object.
  */

  Unit * clone();

  /**
  * @brief Implementation of inherited virtual function.
  */

  void attack(Unit &inputUnit);

private:

};

#endif
