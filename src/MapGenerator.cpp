#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <cstring>
#include <string>
#include <time.h>

using namespace std;

int main()
{

  int numDoors = 0;
  string filename;
  cout << "Enter desired name of map: ";
  cin >> filename;
  filename += ".txt";
  ifstream fileTester(filename.c_str());
  if (fileTester.good())
  {
    char choice;
    cout << "This file already exists, overwrite? ";
    cin >> choice;
    if (!(choice == 'y' || choice == 'Y'))
    {
      exit(0);
    }
  }

  fileTester.close();
  ofstream output(filename.c_str());


    output << "####################\n";
    for (int x = 0; x < 18; x++)
    {
      output << "#";
      for (int y = 0; y < 18; ++y)
      {
        int z = rand() % 4+1;
        if (rand() % 17 == 0 && y <= 18-z)
        {

            for (int t = 0; t < z; t++)
              output << '#';
            y += (z-1);
        }
        else
          if (numDoors == 0 && rand() % 50 == 2)
          {
            output << "[";
            ++numDoors;
          }
          else if (numDoors == 1 && rand() % 50 == 2)
          {
            ++numDoors;
            output << "]";
          }
          else
          {
            output << " ";
          }
      }
      output << "#\n";
    }
    output << "####################\n";

  output.close();
  return 0;
}
