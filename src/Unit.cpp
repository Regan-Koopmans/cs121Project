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
	
}



void Unit::takeDamage(int inputDamage)
{
  if (getHealth() - inputDamage < 0)
  {
    setHealth(0);
  }
  else
  {
    setHealth(getHealth()-inputDamage);
  }
}
