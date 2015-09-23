//This class is meant to be abstract, but I have found that
// since the child class are the same but for their data
//values, having functions here saves code duplication.

#ifndef UNIT_H
#define UNIT_H

#include <string>

using namespace std;

/**

@brief The abstact class from which all other units inherit.
DOXYGEN COMMENT HERE.

*/

class Unit
{
  public:
    virtual Unit * clone() = 0;
    virtual void attack(Unit &inputUnit) = 0;
    int getDamage();
    int getHealth();
    string getClass();
  protected:

    void setDamage(int inputDamage);
    void setHealth(int inputHealth);
    void setClass(string inputClass);

    string unitClass;
    int damage;
    int health;
};

#endif
