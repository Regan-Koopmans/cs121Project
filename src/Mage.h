// Definition for class Mage

#ifndef MAGE_H
#define MAGE_H

#include "Unit.h"
#include "Player.h"

/**
* @class Soldier
* @brief A concrete Unit; Inherits from Player
* @see Player
* @ingroup Players (Light)
*/

class Mage : public Player
{
  public:
    /**
    * Constructor for Mage class
    * sets the stats and respective "class" of Mage.
    */
    Mage();


  private:

};

#endif
