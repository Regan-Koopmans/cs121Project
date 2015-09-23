#ifndef PIERCING_FACTORY_H
#define PIERCING_FACTORY_H

#include "UnitFactory.h"
#include "Goblin.h"
#include "Thief.h"

/**

* @class PiercingFactory
* @brief Concrete factory that creates Thief or Goblin objects
* @see UnitFactory

*/

class PiercingFactory : public UnitFactory
{
public:
	virtual Unit * createPlayer();
    virtual Unit * createMonster();
};

#endif
