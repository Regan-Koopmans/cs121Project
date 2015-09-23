#include <iostream>
#include "Unit.h"
#include "Player.h"
#include "Mage.h"
#include "UnitFactory.h"
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

  cout << mage1->getClass() << endl;
  cout << mage1->getHealth() << endl;
  cout << mage1->getDamage() << endl;

  cout << endl;

  cout << mage2->getClass() << endl;
  cout << mage2->getHealth() << endl;
  cout << mage2->getDamage() << endl;

  cout << endl;

  cout << unit->getClass() << endl;
  cout << unit->getHealth() << endl;
  cout << unit->getDamage() << endl;


  delete mage1;
  delete mage2;
 // delete factory;
  delete unit;
  return 0;
}
