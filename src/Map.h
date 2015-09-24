#ifndef MAP_H
#define MAP_H

#include <string>

using namespace std;

class Map
{
  public:

    Map();
    Map(unsigned int x, unsigned int y);
    void update();
    void draw();
    bool moveUnit(Unit * inputUnit, string direction);
    int[2] findUnit();

  private:
    /**
    * Variable that is a dynamic 2d array of pointers to units.
    */
    Unit *** grid;
    unsigned int MAX_X;
    unsigned int MAX_Y;
    GameMaster * gameMaster;
};

#endif
