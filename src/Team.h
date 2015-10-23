#ifndef TEAM_H
#define TEAM_H

#include <vector>
#include "GameMaster.h"
#include "Map.h"

using namespace std;

/**
* @class Team
* @brief Is the class from which all concrete Teams inherit
*
*/

class Team
{
  public:
    /**
    * @brief Constructor for class Team.
    */
    Team(GameMaster * inputGameMaster);
    /**
    * @brief Destructor of class Teams.
    */
    virtual ~Team();
    /**
    * @brief Abtract function fot intitializing the units of a team.
    */
    virtual void initUnits() = 0;
    /**
    * @brief Observer functions
    */
    virtual void update(Team*) = 0;
    /**
    * @brief Abstract function for attacking sequence.
    */
    virtual void attack() = 0;
    /**
    * @brief Abstract function for turn sequence.
    */
    virtual void turn() = 0;
    /**
    * @brief Function to distribute damage amongst a team.
    */
    void takeDamage(int damage);
    /**
    * @brief function to add a Unit to a Team.
    */
    virtual void addUnit(Unit * inputUnit);
    /**
    * @brief Function to retrieve Unit at specific index.
    * @return Unit* at given index.
    */
    Unit * getUnitAt(int index);
    /**
    * @brief Function to allocate Team to GameMaster.
    */
    void setGameMaster(GameMaster * );
    /**
    * @brief Determines the number of teams in the game.
    * @return int containing the number of live teams.
    */
    int getSize();
    /**
    * @brief Allocates Map pointer.
    */
    void setMap(Map*);

  protected:
    Map* map;
    GameMaster * gameMaster;
    vector<Unit*> units;
};

#endif
