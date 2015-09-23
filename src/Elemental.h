#ifndef ELEMENTAL_H
#define ELEMENTAL_H

#include "Unit.h"
#include "Monster.h"

/**
* @class Elemental
* @brief A concrete Unit; Inherits from Monster
* @see Monster
* @ingroup Monsters (Dark)
*/

class Elemental : public Monster
{
  public:
    /**
    * Constructor for Elemental class
    * sets the stats and respective "class" of Elemental.
    */
    Elemental();

  private:

};

#endif
