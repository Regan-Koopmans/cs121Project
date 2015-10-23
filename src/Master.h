#ifndef MASTER_H
#define MASTER_H

#include "GameMaster.h"

/**
* @class GameMaster
* @brief Controls the flow of operations in the simulation.
*
*/

class Master : public GameMaster
{
  public:
    /**
    * @brief Constructor for class Master.
    */
  	Master();
    /**
    * @brief Destructor for class Master.
    */
  	~Master();
    /**
    * @brief
    */
    virtual void attachTeam(Team * inputTeam);
    /**
    * @brief
    */
    virtual void detachTeam(Team * inputTeam);
    /**
    * @brief A simplifie
    * @return boolean stating whether movement was correct.
    */
    virtual bool moveUnit(Unit * inputUnit, string direction);
    /**
    * @brief Observer function to indicate to Observers to update.
    */
    virtual void notify(Team*);
    /**
    * @brief Function that invokes the print of map.
    */
	  virtual void printMap();
    /**
    * @brief Adds Unit pointer to given x-y coordinates
    */
    virtual void addToMap(Unit * inputUnit,int x, int y);
    /**
    * @brief Will search map for Unit pointer at given coordinates.
    * @return vector containing coordinates of given Unit pointer. Will
    */
    virtual vector<int> locateUnit(Unit * inputUnit);
    /**
    * @brief Finds an empty space on a map for the purpose
    * @return vector containing empty coordinates on the map.
    */
    virtual vector<int> requestFreeSpace();
    /**
    * @brief Retrieves Unit at given coordinates.
    * @return Unit* at a given row and column coordinate.
    */
    virtual Unit* locateUnit(int row, int col);
    /**
    * @brief Function to ensure
    */
    virtual void removeDestroyedUnits();
 private:
    Map* map;
    Unit *** unitGrid;
};

#endif
