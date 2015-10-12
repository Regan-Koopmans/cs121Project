#include "PiercingFactory.h"

 Unit * PiercingFactory::createPlayer()
 {
   if (!modelPlayer)
   {
     modelPlayer = new Thief();
 	   return modelPlayer->clone();
   }
   else
   {
     return modelPlayer->clone();
   }
 }

 Unit* PiercingFactory::createMonster()
 {
 	if (!modelMonster)
  {
    modelMonster = new Thief();
    return modelMonster->clone();
  }
  else
  {
    return modelMonster->clone();
  }
 }
