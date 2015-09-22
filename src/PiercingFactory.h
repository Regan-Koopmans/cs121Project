#ifndef PIERCING_FACTORY_H
#define PIERCING_FACTORY_H

#include "UnitFactory.h"

/**

DOXYGEN COMMENT HERE.

*/

class PiercingFactory : public UnitFactory
{
  public:
    Unit * makeLight();
    Unit * makeDark();
};

#endif
