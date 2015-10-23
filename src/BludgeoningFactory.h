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
	/**
	* @brief Concrete implementation of createPlayer, will create a Soldier
	*/
	virtual Unit* createPlayer();
	/**
	* @brief Concrete impletation of createMonster, will create an Ogre
	*/
	virtual Unit* createMonster();
};

#endif
