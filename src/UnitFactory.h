#ifndef UNIT_FACTORY_H
#define UNIT_FACTORY_H

#include "Unit.h"

/**
* @class UnitFactory
* @brief Defines an interface for creating type Player and type Monster
*/

class UnitFactory
{
public:

  /**
  * @brief Constructor for abstract class UnitFactory.
  */

  UnitFactory();

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

protected:

  Unit * modelMonster;
  Unit * modelPlayer;

};

#endif
