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
  
}

ComputerTeam::ComputerTeam(GameMaster * inputGameMaster) : Team(inputGameMaster)
{
	
}

void ComputerTeam::initUnits()
{
	UnitFactory * factory;
	int randomNumber;
	
	srand(time(NULL));
	
	randomNumber = rand() % 10 + 1;
	
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