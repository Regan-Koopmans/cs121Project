#ifndef GAMEMASTER_H
#define GAMEMASTER_H

#include <vector>
#include "Unit.h"
#include <string>

class Map;
class Team;

using namespace std;
/**
* @class GameMaster
* @brief An abstract class defining a general manager for a game.
*/
class GameMaster
{
public:

	/**
	* @brief Constructor for class GameMaster.
	*/

	GameMaster();

	/**
  * @brief Virtual destructor for class Unit
  */

	virtual void attachTeam(Team * inputTeam) = 0;

	/**
	* @brief Virtual destructor for class Unit
	*/

	virtual void detachTeam(Team * inputTeam) = 0;

	/**
	* @brief
	*/

	void playGame();

	/**
	* @brief
	*/

  virtual bool moveUnit(Unit * inputUnit, string direction) = 0;

	/**
	* @brief
	*/

  virtual void notify(Team*) = 0;

	/**
  * @brief
  */

	void attack(Unit * attackingUnit, Unit * defendingUnit);

	/**
  * @brief
  */

	int getNumberTeams();

	/**
  * @brief
	*/

	Team * getTeamAt(int index);

	/**
  * @brief Virtual destructor for class Unit
  */

	virtual void printMap() = 0;

	/**
	* @brief
	*/

	bool gameOver();

	/**
	* @brief
	*/

	virtual void addToMap(Unit * inputUnit,int x, int y) = 0;

	/**
	* @brief
	*/

	virtual vector<int> locateUnit(Unit * inputUnit) = 0;

	/**
  * @brief
  */

	virtual Unit* locateUnit(int row, int col) = 0;

	/**
  * @brief Pure
  */

	virtual vector<int> requestFreeSpace() = 0;

	/**
  * @brief Pure virtual function for removing destroyed Units.
  */

	virtual void removeDestroyedUnits() = 0;


protected:
    vector<Team*> teams;
    unsigned int currentTurn;
};


#endif
