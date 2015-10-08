//This class is meant to be abstract, but I have found that
// since the child class are the same but for their data
//values, having functions here saves code duplication.

#ifndef UNIT_H
#define UNIT_H

#include <string>

using namespace std;

/**
* @class Unit
* @brief Is the class from which all concrete Units derive
*
*/

class Unit
{
  public:

	Unit();

    /**
    * @brief virtual destructor
    */

    virtual ~Unit();

    /**
    * @brief pure virtual function that allows prototypes of Units to be clone.
    * @return a new Unit cloned from member variables.
    */

    virtual Unit * clone() = 0;

    /**
    * @brief pure virtual function that allows prototypes of Units to be clone.
    * @return a new Unit cloned from member variables.
    */

    virtual void attack(Unit &inputUnit) = 0;

    /**
    * @brief Public interface to damage member variable.
    * @return int containing value of damage.
    */

    int getDamage();

    /**
    * @brief Public interface to health member variable.
    * @return int containing value of health.
    */

    int getHealth();

    /**
    * @brief Public interface to "class" member variable.
    * @return string containing the class of object.
    */

    string getClass();

    void takeDamage(int inputDamage);

  protected:

    /**
    * @brief Protected interface to modify damage member.
    */

    void setDamage(int inputDamage);

    /**
    * @brief Protected interface to modify health member.
    */

    void setHealth(int inputHealth);

    /**
    * @brief Protected interface to modify "class" member.
    */

    void setClass(string inputClass);

    unsigned int get_x();
    unsigned int get_y();

protected:

    string unitClass;
    int damage;
    int health;

   //Not sure if the below members are still in use.

    unsigned int x;
    unsigned int y;

   friend class Team;

};

#endif
