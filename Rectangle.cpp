#include"Rectangle.h"


    Rectangle::Rectangle(int x=0,int y=0,int h=0,int w=0):
        xLow(x), yLow(y), height(h), width(w){}

    int Rectangle::GetHeight(){
        return height;
    }

    int Rectangle::GetWidth(){
        return width;
    }
