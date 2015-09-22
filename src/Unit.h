#ifndef UNIT_H
#define UNIT_H

/**

@brief The abstact class from which all other units inherit.
DOXYGEN COMMENT HERE.

*/

class Unit
{
  public:
    Unit * clone();
  private:
    int damage;
    int health;
};

#endif
