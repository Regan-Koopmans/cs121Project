#ifndef MAGIC_FACTORY_H
#define MAGIC_FACTORY_H

#include "UnitFactory.h"

/**

DOXYGEN COMMENT HERE.

*/

class MagicFactory : public UnitFactory
{
public:
  Unit * makeLight();
  Unit * makeDark();
};

#endif
