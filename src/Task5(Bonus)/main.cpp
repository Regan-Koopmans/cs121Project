#include <iostream>
#include "Form.h"

using namespace std;

int main()
{
  Form myGameForm;
  for (int x = 3; x < 100; x++)
  {
    myGameForm.putPixel(x,x+2);
    myGameForm.draw();
    myGameForm.flush();
  }
  return 0;
}
