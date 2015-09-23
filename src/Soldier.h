// Definition for class Soldier

#ifndef SOLDIER_H
#define SOLDIER_H

#include "Unit.h"
#include "Player.h"

/**
* @class Soldier
* @brief A concrete Unit; Inherits from Player
* @see Player
* @ingroup Players (Light)
*/

class Soldier : public Player
{

  public:
    /**
    * Constructor for Soldier class
    * sets the stats and respective "class" of Soldier.
    */
    Soldier();


  private:

};

#endif
