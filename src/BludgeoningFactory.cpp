#include "BludgeoningFactory.h"

Unit* BludgeoningFactory::createPlayer()
{
	if (!modelPlayer)
	{
		modelPlayer = new Soldier();
		return modelPlayer->clone();
	}
	else
	{
		return modelPlayer->clone();
	}
}

Unit* BludgeoningFactory::createMonster()
{
	if (!modelMonster)
	{
		modelMonster = new Ogre();
		return modelMonster->clone();
	}
	else
	{
		return modelMonster->clone();
	}
}
