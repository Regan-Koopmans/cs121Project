#ifndef UNIT_FACTORY_H
#define UNIT_FACTORY_H

#include "Unit.h"

/**

DOXYGEN COMMENT HERE.

*/

class UnitFactory
{
public:
  virtual Unit * makeLight() = 0;
  virtual Unit * makeDark() = 0;
};

#endif
