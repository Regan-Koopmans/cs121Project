#ifndef BLUDGEONING_FACTORY_H
#define BLUDGEONING_FACTORY_H

#include "UnitFactory.h"
#include "Soldier.h"
#include "Ogre.h"

/**
* @class BludgeoningFactory
* @brief Concrete factory that creates Soldier or Ogre objects
* @see UnitFactory
*/

class BludgeoningFactory : public UnitFactory
{
public:
	virtual Unit* createPlayer();
	virtual Unit* createMonster();
};

#endif
