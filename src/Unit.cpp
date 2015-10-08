#include "Unit.h"
#include <stdlib.h>
#include <time.h>

int Unit::getDamage()
{
    return damage;
}

int Unit::getHealth()
{
  return health;
}

string Unit::getClass()
{
  return unitClass;
}

void Unit::setDamage(int inputDamage)
{
  damage = inputDamage;
}

void Unit::setHealth(int inputHealth)
{
  health = inputHealth;
}

void Unit::setClass(string inputClass)
{
  unitClass = inputClass;
}

Unit::~Unit()
{

}

Unit::Unit()
{
	srand(time(NULL));

	x = rand() % 20;
	y = rand() % 20;
}

unsigned int Unit::get_x()
{
	return x;
}

unsigned int Unit::get_y()
{
	return y;
}

void Unit::takeDamage(int inputDamage)
{
  setHealth(getHealth()-inputDamage);
}
