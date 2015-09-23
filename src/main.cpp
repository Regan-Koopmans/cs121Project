#include <iostream>
#include "Unit.h"
#include "Player.h"
#include "Mage.h"

using namespace std;

/**

*/

int main()
{
  Mage * mage1 = new Mage;
  Unit * mage2 = mage1->clone();

  cout << mage1->getClass() << endl;
  cout << mage1->getHealth() << endl;
  cout << mage1->getDamage() << endl;

  cout << endl;

  cout << mage2->getClass() << endl;
  cout << mage2->getHealth() << endl;
  cout << mage2->getDamage() << endl;


  delete mage1;
  delete mage2;
  return 0;
}
