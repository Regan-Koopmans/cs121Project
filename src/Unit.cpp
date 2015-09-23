#include "Unit.h"

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
