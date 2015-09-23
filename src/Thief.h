#ifndef THIEF_H
#define THEIF_H

#include "Unit.h"
#include "Player.h"

/**
* @class Thief
* @brief A concrete Unit; Inherits from Player
* @see Player
* @ingroup Players (Light)
*/

class Thief : public Player
{

  public:
    /**
    * Constructor for Thief class
    * sets the stats and respective "class" of Thief.
    */
    Thief();

  private:

};

#endif
