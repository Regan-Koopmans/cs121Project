#include "Player.h"

Unit * Player::clone()
{
  Player * temp = new Player;
  temp->setDamage(this->getDamage());
  temp->setHealth(this->getHealth());
  temp->setClass(this->getClass());
  return temp;
}
