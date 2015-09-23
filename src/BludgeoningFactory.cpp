#include "BludgeoningFactory.h"

Unit* BludgeoningFactory::createPlayer()
{
	return new Soldier();
}
Unit* BludgeoningFactory::createMonster()
{
	return new Ogre();
}