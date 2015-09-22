<<<<<<< HEAD
#include <iostream>
#include "Form.h"

using namespace std;

Form::Form(int inputMaxX, int inputMaxY)
{
  max_x = inputMaxX;
  max_y = inputMaxY;

  canvas = new int * [max_x];
  for (int x = 0; x < max_x; x++)
  {
    canvas[x] = new int[max_y];
  }

  for (int x = 0; x < max_x; x++)
  {
    for (int y = 0; y < max_y; y++)
    {
      canvas[x][y] = 0;
    }
  }
}

void Form::putPixel(int x, int y)
{
  if ((x < max_x && y < max_y) && (x >= 0 && y >= 0))
  {
    canvas[x][y] = 1;
  }
  else
  {
    throw "Invalid Insertion";
  }
}

void Form::flush()
{
  for (int x = 0; x < max_y; x++)
  {
    cout << endl;
  }
}

void Form::draw()
{
  for (int x = 0; x < max_x; x++)
  {
    for (int y = 0; y < max_y; y++)
    {
      if (canvas[x][y])
      {
        cout << (char)219;
      }
      else
      {
        cout << " ";
      }
    }
    cout << endl;
  }
}

Form::~Form()
{
  for (int x = 0; x < max_x; x++)
  {
    delete [] canvas[x];
  }

  delete [] canvas;
}
=======
#include <iostream>
#include "Form.h"

using namespace std;

Form::Form(int inputMaxX, int inputMaxY)
{
  max_x = inputMaxX;
  max_y = inputMaxY;

  canvas = new int * [max_x];
  for (int x = 0; x < max_x; x++)
  {
    canvas[x] = new int[max_y];
  }

  for (int x = 0; x < max_x; x++)
  {
    for (int y = 0; y < max_y; y++)
    {
      canvas[x][y] = 0;
    }
  }
}

void Form::putPixel(int x, int y)
{
  if ((x < max_x && y < max_y) && (x >= 0 && y >= 0))
  {
    canvas[x][y] = 1;
  }
  else
  {
    throw "Invalid Insertion";
  }
}

void Form::flush()
{
  for (int x = 0; x < max_y; x++)
  {
    cout << endl;
  }
}

void Form::draw()
{
  for (int x = 0; x < max_x; x++)
  {
    for (int y = 0; y < max_y; y++)
    {
      if (canvas[x][y])
      {
        cout << (char)219;
      }
      else
      {
        cout << " ";
      }
    }
    cout << endl;
  }
}

Form::~Form()
{
  for (int x = 0; x < max_x; x++)
  {
    delete [] canvas[x];
  }

  delete [] canvas;
}
>>>>>>> f80cc7dccc28693dd5c7f647521341d4ed177e42
