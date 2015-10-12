// Definition for class Player

#ifndef PLAYER_H
#define PLAYER_H

#include "Unit.h"

/**
* @class Player
* @brief Is the class from which all concrete Monsters derive
* inherites from Unit.
* @see Unit
*/

class Player : public Unit
{
  public:

    /**
    * @brief Implementation of inherited virtual function.
    * @return Unit* containing a deep copy of this object.
    */

    Unit * clone();
  private:
};

#endif
