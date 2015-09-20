#ifndef FORM_H
#define FORM_H

class Form
{
  public:

    Form(int inputMaxX = 300, int inputMaxY = 80);
    void putPixel(int x, int y);
    void flush();
    void draw();
    ~Form();

  private:
    int ** canvas;
    int max_x;
    int max_y;

};

#endif
