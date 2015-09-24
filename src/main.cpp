#include <iostream>
#include "Unit.h"
#include "Player.h"
#include "Mage.h"
#include "UnitFactory.h"
#include "PiercingFactory.h"
#include "BludgeoningFactory.h"
#include "MagicFactory.h"
#include "PiercingFactory.h"
#include "BludgeoningFactory.h"

using namespace std;

/**

*/

int main()
{
  Mage * mage1 = new Mage;
  Unit * mage2 = mage1->clone();
  BludgeoningFactory factory;
  Unit* unit = factory.createPlayer();

  UnitFactory * myMagicFactory = new BludgeoningFactory;
  Unit * myUnit = myMagicFactory->createMonster();

  cout << myUnit->getClass() << endl;
  cout << myUnit->getDamage() << endl;
  cout << myUnit->getHealth() << endl;

  cout << endl;

  cout << unit->getClass() << endl;
  cout << unit->getHealth() << endl;
  cout << unit->getDamage() << endl;


  delete myMagicFactory;


  delete myUnit;
  delete mage1;
  delete mage2;
 // delete factory;
  delete unit;
  return 0;
}
