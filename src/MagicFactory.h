#ifndef MAGIC_FACTORY_H
#define MAGIC_FACTORY_H

#include "UnitFactory.h"
#include "Elemental.h"
#include "Mage.h"

/**

* @class MagicFactory
* @brief Concrete Factory that creates a Mage or Elemental object
* @see UnitFactory

*/

class MagicFactory : public UnitFactory
{
public:
  virtual Unit * createPlayer();
  virtual Unit * createMonster();
};

#endif
