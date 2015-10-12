#include <iostream>
#include <stdlib.h>

#include <time.h>

#include "ComputerTeam.h"
#include "UnitFactory.h"
#include "MagicFactory.h"
#include "BludgeoningFactory.h"
#include "PiercingFactory.h"

using namespace std;

void ComputerTeam::update()
{
	cout << "updated" << endl;
}

void ComputerTeam::attack()
{

}

void ComputerTeam::turn()
{
	int randomDirection;
	srand(time(NULL));
	//unit movement
	
	for (unsigned int x = 0; x < units.size(); x++)
	{
		randomDirection = rand () % 4;
		switch (randomDirection)
		{
			case 0: gameMaster->moveUnit(units.at(x),"left");
				break;
			case 1: gameMaster->moveUnit(units.at(x),"right");
				break;
			case 2: gameMaster->moveUnit(units.at(x),"up");
				break;
			case 3: gameMaster->moveUnit(units.at(x),"down");
				break;
		}
	}


}

ComputerTeam::ComputerTeam(GameMaster * inputGameMaster) : Team(inputGameMaster)
{

}

void ComputerTeam::initUnits()
{
	UnitFactory * factory;
	int randomNumber;

	srand(time(NULL));

	randomNumber = rand() % 3 + 1;

	factory =  new BludgeoningFactory;
	addUnit(factory->createMonster());

	for (int x = 1;  x < randomNumber; x++)
	{
		addUnit(units.at(0)->clone());
	}

	delete factory;


	randomNumber = rand() % 10 + 1;

	factory =  new MagicFactory;
	addUnit(factory->createMonster());

	for (int x = 1;  x < randomNumber; x++)
	{
		addUnit(units.at(0)->clone());
	}

	delete factory;


	randomNumber = rand() % 10 + 1;

	factory =  new PiercingFactory;
	addUnit(factory->createMonster());

	for (int x = 1;  x < randomNumber; x++)
	{
		addUnit(units.at(0)->clone());
	}

	delete factory;
	cout << "Computer has assembled their team!" << endl;
	cout << endl;
}
