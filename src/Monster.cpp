#include "Monster.h"

Unit * Monster::clone()
{
  Unit * temp = new Unit;
  temp->damage = damage;
  temp->health = health;
  temp->unitClass = unitClass;
  return temp;
}
