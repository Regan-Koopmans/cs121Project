#include "MagicFactory.h"

Unit* MagicFactory::createPlayer()
{
	return new Mage();
}
Unit* MagicFactory::createMonster()
{
	return new Elemental();
}