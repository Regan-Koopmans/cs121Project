#ifndef UNIT_FACTORY_H
#define UNIT_FACTORY_H

#include "Unit.h"

/**

DOXYGEN COMMENT HERE.

*/

class UnitFactory
{
public:
  Unit * makeLight();
  Unit * makeDark();
};

#endif
