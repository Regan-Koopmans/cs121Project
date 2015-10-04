#include <iostream>
#include "Map.h"
#include "Unit.h"
#include "Team.h"
#include <stdlib.h>
#include <time.h>

using namespace std;

//Default constructor randomizes map dimensions.

Map::Map()
{
  srand(time(NULL));
  MAX_X = 1 + rand() % 50;
  MAX_Y = 1 + rand() % 50;


  grid = new Unit ** [MAX_X];
  for (unsigned int x = 0; x < MAX_X; x++)
  {
    grid[x] = new Unit * [MAX_Y];
    for (unsigned int y = 0; y < MAX_Y; y++ )
    {
      grid[x][y] = 0;
    }
  }
}

Map::Map(unsigned int x, unsigned int y)
{
  MAX_X = x;
  MAX_Y = y;
	
grid = new Unit ** [MAX_X];
  for (unsigned int x = 0; x < MAX_X; x++)
  {
    grid[x] = new Unit * [MAX_Y];
    for (unsigned int y = 0; y < MAX_Y; y++ )
    {
      grid[x][y] = 0;
    }
  }
}

void Map::update()
{
	for (int x = 0; x < gameMaster->getNumberTeams(); x++)
	{
		for (int y = 0; y < gameMaster->getTeamAt(x)->getSize(); y++)
		{
			
		}
	}
}

void Map::draw()
{

  for (unsigned int x = 0; x < MAX_X; x++)
  {
	  cout << "\t";
    for (unsigned int y = 0; y < MAX_Y; y++)
    {
	    
        if (grid[x][y] != 0)
        {
	     cout << "\x1b[34m";
            cout << (char)167; //for Unit
        }
        else
        {
	   cout << "\x1b[32m";
          cout << ','; // empty space.
        }
    }
    cout << "\x1b[39m";
    cout << endl;
  }
}

int * Map::findUnit(Unit * inputUnit)
{
  int foundX = -1;
  int foundY = -1;

  for (unsigned int x = 0; x < MAX_X; x++)
  {
    for (unsigned int y = 0; y < MAX_Y; y++)
    {
      if (grid[x][y] == inputUnit)
      {
        foundX = x;
        foundY = y;
      }
    }
  }

  int * result = new int[2];
  result[0] = foundX;
  result[1] = foundY;
  return result;
}

bool Map::moveUnit(Unit * inputUnit, string direction)
{
  int * coordinates = findUnit(inputUnit);
  if (coordinates[0] == -1)
  {
      //Indicates that given unit is not on the grid
      delete coordinates;
      return false;
  }

  if (direction == "up")
  {
    //May need to do more bounds checking for terrain + other units
    if(coordinates[0] > 0)
    {
    grid[coordinates[0]-1][coordinates[1]] = grid[coordinates[0]][coordinates[1]];
    grid[coordinates[0]][coordinates[1]] = 0;
    }
  }
  else if (direction == "down")
  {
    if(static_cast<unsigned int>(coordinates[0])< (MAX_X - 1)) //there is room to move down.
    {
    grid[coordinates[0]+1][coordinates[1]] = grid[coordinates[0]][coordinates[1]];
    grid[coordinates[0]][coordinates[1]] = 0;
    }
  }
  else if (direction == "left")
  {
    if(coordinates[1] > 0)
    {
    grid[coordinates[0]][coordinates[1]-1] = grid[coordinates[0]][coordinates[1]];
    grid[coordinates[0]][coordinates[1]] = 0;
    }
  }
  else if (direction == "right")
  {
    if(static_cast<unsigned int>(coordinates[0]) < (MAX_Y - 1)) //there is room to move right.
    {
    grid[coordinates[0]][coordinates[1]+1] = grid[coordinates[0]][coordinates[1]];
    grid[coordinates[0]][coordinates[1]] = 0;
    }
  }
  else
  {
    delete coordinates;
    return false;
  }
  delete coordinates;
  return true;
}

 void Map::setMapTile(Unit * inputUnit, int x, int y)
{
	grid[x][y] = inputUnit;
}
