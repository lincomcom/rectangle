#include <iostream>
#include"Rectangle.h"

using namespace std;

int main()
{
    //Rectangle r();

    Rectangle r(1,2,3,4);//assign Rectangle r
    Rectangle s(5,6,7,8);//assign Rectangle s
    Rectangle *t=&s;//t point to s
    cout<<r.GetHeight()<<endl;
    cout<<s.GetHeight()<<endl;
    cout<<t->GetHeight()<<endl;
    return 0;
};
