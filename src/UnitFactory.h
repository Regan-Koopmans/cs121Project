

#ifndef UNIT_FACTORY_H
#define UNIT_FACTORY_H

#include "Unit.h"

class UnitFactory
{
public:
  Unit * makeLight();
  Unit * makeDark();
};

#endif
