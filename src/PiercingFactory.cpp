#include "PiercingFactory.h"

 Unit * PiercingFactory::createPlayer()
 {
 	return new Thief();
 }
 
 Unit* PiercingFactory::createMonster()
 {
 	return new Goblin();
 }