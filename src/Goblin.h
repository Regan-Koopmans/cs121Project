#ifndef GOBLIN_H
#define GOBLIN_H

#include "Unit.h"
#include "Monster.h"

/**
* @class Goblin
* @brief A concrete Unit; Inherits from Monster
* @see Monster
* @ingroup Monsters (Dark)
*/

class Goblin : public Monster
{

  public:
    /**
    * Constructor for Goblin class
    * sets the stats and respective "class" of Goblin.
    */
    Goblin();

  private:

};

#endif
