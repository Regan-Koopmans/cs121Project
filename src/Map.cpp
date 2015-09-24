#include <iostream>
#include "Map.h"
#include "Unit.h"
#include <stdlib.h>
#include <time.h>

using namespace std;

//Default constructor randomizes map dimensions.

Map::Map()
{
  srand(time(NULL));
  MAX_X = 1 + rand() % 50;
  MAX_Y = 1 + rand() % 50;


  grid = new Unit * [MAX_X];
  for (int = 0; x < MAX_X; x++)
  {
    Unit[x] = new Unit * [MAX_Y];
    for (int y = 0; y < MAX_Y; y++ )
    {
      grid[x][y] = 0;
    }
  }
}

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

bool Map::moveUnit(Unit * inputUnit, string direction)
{
  if (direction == "up")
  {

  }
  else if (direction == "down")
  {

  }
  else if (direction == "left")
  {

  }
  else if (direction == "right")
  {

  }
  else
  {
    return false;
  }
}
