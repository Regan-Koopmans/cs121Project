#include <iostream>
#include "Unit.h"
#include "Player.h"
#include "Mage.h"
#include "UnitFactory.h"
#include "PiercingFactory.h"
#include "BludgeoningFactory.h"
#include "MagicFactory.h"

using namespace std;

/**

*/

int main()
{
  Mage * mage1 = new Mage;
  Unit * mage2 = mage1->clone();

  UnitFactory * myMagicFactory = new BludgeoningFactory;
  Unit * myUnit = myMagicFactory->createMonster();

  cout << myUnit->getClass() << endl;
  cout << myUnit->getDamage() << endl;
  cout << myUnit->getHealth() << endl;

  delete myMagicFactory;

  delete myUnit;
  delete mage1;
  delete mage2;
  return 0;
}
