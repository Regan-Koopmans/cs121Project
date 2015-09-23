#ifndef UNIT_FACTORY_H
#define UNIT_FACTORY_H

#include "Unit.h"

/**

* @class Unitfactory
* @brief Defines an interface for creating players and monsters

*/

class UnitFactory
{
public:

  /**
  * @brief Virtual destructor for class Unit
  */

  virtual ~UnitFactory();

  /**
  * @brief Pure virtual function for creating Players.
  * @return Unit* of type concrete Player
  */

  virtual Unit * createPlayer() = 0;

  /**
  * @brief Pure virtual function for creating Mosters.
  * @return Unit* of type concrete Monsters
  */

  virtual Unit * createMonster() = 0;
};

#endif
