#ifndef OGRE_H
#define OGRE_H

#include "Unit.h"
#include "Monster.h"

/**
* @class Ogre
* @brief A concrete Unit; Inherits from Monster
* @see Monster
* @ingroup Monsters (Dark)
*/

class Ogre : public Monster
{
  public:
    /**
    * Constructor for Ogre class
    * sets the stats and respective "class" of Orgre.
    */
    Ogre();

  private:
};

#endif
