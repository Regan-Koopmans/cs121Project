#include <iostream>
#include <string>
#include "HumanTeam.h"
#include "Team.h"
#include "GameMaster.h"

using namespace std;

void HumanTeam::turn()
{
  //Add code to allow the user to decide what to do:
  cout << "What would you like to do:" << endl;
}

void HumanTeam::update()
{
  cout << "Something has happened!" << endl;
}

void HumanTeam::attack()
{
	int attackUnitIndex;
	
	cout << "With which unit would you like to attack? (0-";
	cout << (units.size()-1) << ") : " << endl;
	
	cin >> attackUnitIndex;
	
	//Check for validity of unit
	
	
	cout << "Which team would you like to attack? (0-";
	cout << (gameMaster->getNumberTeams() -1) << ") : " << endl;
	
	//Check for validity of team
	
	gameMaster->attack
	
}

HumanTeam::HumanTeam(GameMaster * inputGameMaster) : Team(inputGameMaster)
{
}
