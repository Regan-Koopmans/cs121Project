#ifndef MAP_H
#define MAP_H

#include <string>
#include "Unit.h"
#include "GameMaster.h"

using namespace std;

class Map
{
  public:

    /**
    * @brief Default constructor for map.
    */
    Map();

    /**
    * @brief Constructor that allows custom dimensions for map.
    */

    Map(unsigned int x, unsigned int y);

    /**
    * @brief  Update function (not sure if this is still necessary)
    */

    void update();

    /**
    * @brief
    */

    void draw();

    /**
    * Default constructor for map.
    */

    bool moveUnit(Unit * inputUnit, string direction);

    /**
    * Default constructor for map.
    */

    int * findUnit(Unit * inputUnit);

    /**
    * @brief Default constructor for map.
    */

    void setMapTile(Unit * inputUnit, unsigned int x, unsigned int y);

    /**
    * @brief
    * @param x The x dimensions
    * @param y
    * @return Pointer to a unit at this spot.
    */

    Unit * getMapTile(unsigned int x, unsigned int y);

  private:

    /**
    * Variable that is a dynamic 2d array of pointers to units.
    */

    Unit *** grid;

    /**
    * Variable defining the x bounds of the map.
    */

    unsigned int MAX_X;

    /**
    * Variable defining the y bounds of the map.
    */

    unsigned int MAX_Y;

    /**
    * Pointer to the GameMaster which the Map communicates with.
    */

    GameMaster * gameMaster;
};

#endif
