<<<<<<< HEAD
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
=======
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
>>>>>>> f80cc7dccc28693dd5c7f647521341d4ed177e42
