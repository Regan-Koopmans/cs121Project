#include <iostream>
#include <string>
#include "HumanTeam.h"
#include "Team.h"
#include "GameMaster.h"
#include "UnitFactory.h"
#include "MagicFactory.h"
#include "PiercingFactory.h"
#include "BludgeoningFactory.h"

using namespace std;

void HumanTeam::turn()
{
   string inputCommand;
  //Add code to allow the user to decide what to do:
  cout << "What would you like to do:" << endl;
   cin >> inputCommand;
}

void HumanTeam::update(Team* inputTeam)
{
  cout << "Something has happened!" << endl;
}

void HumanTeam::attack()
{
	int attackUnitIndex;
	int attackTeamIndex;
	
	
	cout << "With which unit would you like to attack? (0-";
	cout << (units.size()-1) << ") : " << endl;
	
	cin >> attackUnitIndex;
	
	//Check for validity of unit
	
	
	cout << "Which team would you like to attack? (0-";
	cout << (gameMaster->getNumberTeams() -1) << ") : " << endl;
	
	cin >> attackTeamIndex;
	
	//Check for validity of team
	
	Team * attackTeam = gameMaster->getTeamAt(attackTeamIndex);
	
	
	gameMaster->attack(units.at(attackUnitIndex),attackTeam);
	
}

HumanTeam::HumanTeam(GameMaster * inputGameMaster) : Team(inputGameMaster)
{
}

void HumanTeam::initUnits()
{
	int numberChoice;
	char menuChoice;
	UnitFactory * factory;
	
	cout << "Army Construction" << endl;
	cout << "-----------------" << endl;
	cout << endl;
	cout << "Would you like to add Soldiers? : ";
	cin >> menuChoice;
	
	
	if (menuChoice == 'y' || menuChoice == 'Y')
	{
		factory = new BludgeoningFactory();
		cout << "How many Soldiers would you like to add?: ";
		
		cin >> numberChoice;
		
		addUnit(factory->createPlayer());
		for (int x = 1; x < numberChoice; x++)
		{
			addUnit(units.at(0)->clone());
		}
		
		delete factory;
	}
	cout << endl;
	
	cout << "Would you like to add Mages? : ";
	cin >> menuChoice;
	
	if (menuChoice == 'y' || menuChoice == 'Y')
	{
		factory = new MagicFactory();
		cout << "How many Mages would you like to add?: ";
		
		cin >> numberChoice;
		
		addUnit(factory->createPlayer());
		for (int x = 1; x < numberChoice; x++)
		{
			addUnit(units.at(0)->clone());
		}
		
		delete factory;
	}
	
	cout << endl;
	
	cout << "Would you like to add Thieves? : ";
	cin >> menuChoice;
	
	if (menuChoice == 'y' || menuChoice == 'Y')
	{
		factory = new PiercingFactory();
		cout << "How many Thieves would you like to add?: ";
		
		cin >> numberChoice;
		
		addUnit(factory->createPlayer());
		for (int x = 1; x < numberChoice; x++)
		{
			addUnit(units.at(0)->clone());
		}
		
		delete factory;
	}
	cout << endl;
	cout << "Player has assembled their team!" << endl;
	cout << endl;
}
