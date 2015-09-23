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
  virtual Unit * createPlayer() = 0;
  virtual Unit * createMonster() = 0;
};

#endif
