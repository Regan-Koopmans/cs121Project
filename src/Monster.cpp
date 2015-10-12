#include "Monster.h"

Unit * Monster::clone()
{
  Monster * temp = new Monster;
  temp->setDamage(this->getDamage());
  temp->setHealth(this->getHealth());
  temp->setClass(this->getClass());
  return temp;
}

