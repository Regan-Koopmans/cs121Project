#include <iostream>
#include "Map.h"

using namespace std;

Map::Map(unsigned int x, unsigned int y)
{
  MAX_X = x;
  MAX_Y = y;
}

void Map::update();
{

}

void Map::draw()
{
  for (unsigned int y = 0; y < MAX_Y; y++)
  {
    cout << "#";
    cout << endl;
  }
}
