#include <iostream>
#include <string>
#include "HumanTeam.h"
#include "Team.h"
#include "GameMaster.h"

using namespace std;

void HumanTeam::turn()
{
  //Add code to allow the user to decide what to do:
  cout << "What would you like to do" << endl;
}

void HumanTeam::update()
{
  cout << "Something has happened!" << endl;
}

void HumanTeam::attack()
{

}

HumanTeam::HumanTeam(GameMaster * inputGameMaster) : Team(inputGameMaster)
{
}
