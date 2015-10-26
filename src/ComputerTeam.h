#ifndef COMPUTER_TEAM_H
#define COMPUTER_TEAM_H

#include "Team.h"

	/**
    * @class ComputerTeam
	* @brief A concrete Team with automatic turns.
	*/

class ComputerTeam : public Team
{
  public:
    /**
    * @brief Constructor that takes a GameMater pointer.
    */
    ComputerTeam(GameMaster * inputGameMaster);
    /**
    * @brief Function to initialize units of a team randomly.
    */
    virtual void initUnits();
    /**
    * @brief Function that moves teamates and attack if possible.
    */
    virtual void turn();
    /**
    * @brief Observer function to indicate that a turn is over.
    */
    virtual void update(Team*);
    /**
    * @brief A collection of actions representing an attack.
    */
    virtual void attack();

  private:

};

#endif
