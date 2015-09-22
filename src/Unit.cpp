#include "Unit.h"

Unit * Unit::clone()
{
  Unit * temp = new Unit();
  temp->unitClass = unitClass;
  temp->health = health;
  temp->damage = damage;
  return temp;
}
