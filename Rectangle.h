#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED

class Rectangle{
public:

    Rectangle(int x,int y,int h,int w); //constructor
    ~Rectangle(){};//destructor
    int GetHeight();
    int GetWidth();
private:
    int xLow,yLow,height,width;
};

#endif // RECTANGLE_H_INCLUDED
