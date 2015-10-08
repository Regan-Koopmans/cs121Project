#include "UnitFactory.h"

UnitFactory::UnitFactory()
{
  modelMonster = 0;
  modelPlayer = 0;
}

UnitFactory::~UnitFactory()
{
  delete modelPlayer;
  delete modelMonster;

}
