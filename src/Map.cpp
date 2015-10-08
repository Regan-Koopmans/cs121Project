#include "Map.h"
#include <iostream>
#include <fstream>
#include <string>
#include <string.h>

using namespace std;

Map::Map(char* fileName)
{
    FileLocation = fileName;
    mapSizeX = 20;
    mapSizeY = 21;
    setMap();
}

Map::~Map()
{
  /**
   * @TODO Fill in Destructor here
   */
}

void Map::setMap()
{
    MapContents = new char*[mapSizeX];
    for(int i=0;i<mapSizeX;i++)
    {
        MapContents[i] = new char[mapSizeY];
    }
    ifstream myReadFile;
    myReadFile.open(FileLocation);
    string output;
    int count = 0;
    if (myReadFile.is_open())
    {
        while (getline(myReadFile, output))
        {
            strcpy(MapContents[count], output.c_str());
            count++;
        }
    }
    myReadFile.close();
}
void Map::printMap()
{
    for(int i = 0; i < mapSizeX;i++)
    {
      for (int j = 0; j < mapSizeY; j++)
      {
        if (MapContents[i][j] ==  '#')
          cout << "\x1b[30;1m";

        if (MapContents[i][j] ==  ']' || MapContents[i][j] ==  '[')
          cout << "\x1b[33;1m";

        if (MapContents[i][j] ==  '&')
          cout << "\x1b[31;1m";

        if (MapContents[i][j] ==  '@')
              cout << "\x1b[34;1m";

           cout << getMapTile(i,j);


        cout << "\x1b[37;1m";
      }
        cout << endl;
      }
}

bool Map::Move(int x, int y, int newX, int newY)
{
  if (newX < mapSizeX && newY < mapSizeY && MapContents[newX][newY] == ' ')
  {
      MapContents[newX][newY] = MapContents[x][y];
      MapContents[x][y] = ' ';
      return true;
  }
  else
  {
    return false;
  }
}

int Map::getMapSizeX()
{
  return mapSizeX;
}

int Map::getMapSizeY()
{
  return mapSizeY;
}

char Map::getMapTile(int x, int y)
{
  if (x < mapSizeX && y < mapSizeY)
    return MapContents[x][y];
  else
    return ' ';
}

void Map::setMapTile(char c, int x, int y)
{
  MapContents[x][y] = c;
}
