#include "MagicFactory.h"

Unit* MagicFactory::createPlayer()
{
	if (!modelPlayer)
	{
		modelPlayer = new Mage();
		return modelPlayer->clone();
	}
	else
	{
		return modelPlayer->clone();
	}
}
Unit* MagicFactory::createMonster()
{
	if (!modelMonster)
	{
		modelMonster = new Elemental();
		return modelMonster->clone();
	}
	else
	{
		return modelMonster->clone();
	}
}
