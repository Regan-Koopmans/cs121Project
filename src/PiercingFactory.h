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
	/**
	* @brief Concrete implementation of createPlayer, will create a Theif
	*/
	virtual Unit * createPlayer();
	/**
	* @brief Concrete impletation of createMonster, will create a Goblin
	*/
	virtual Unit * createMonster();
};

#endif
