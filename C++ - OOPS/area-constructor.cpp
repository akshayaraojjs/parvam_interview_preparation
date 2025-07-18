#include <iostream>
using namespace std;

class Area
{
    int length, breadth, height;

public:
    int area;

    Area()
    {
        length = 0;
        breadth = 0;
        height = 0;
        cout << "Area is equal to Zero";
    }

    Area(int side)
    {
        length = side;
        area = side * side;
        cout << "Area of Square: " << area << endl;
    }

    Area(int len, int wid);
    // Area(int len, int wid){
    //     length = len;
    //     breadth = wid;
    //     area = length * breadth;
    //     cout << "Area of Rectangle: " << area << endl;
    // }

    Area(int l, int w, int h)
    {
        length = l;
        breadth = w;
        height = h;
        area = length * breadth * height;
        cout << "Area of Cube: " << area << endl;
    } 
};
// Scope Resolution operator(::) has been used to define the paramaterized constructor
// Syntax: ClassName::ConstructorName(parameter1, parameter2, ...)
Area::Area(int len, int wid)
{
    length = len;
    breadth = wid;
    area = length * breadth;
    cout << "Area of Rectangle: " << area << endl;
}

int main()
{
    int Length, Width, Height;
    Area Square, Rectangle, Cube;
    cout << "Enter length, width & height: " << endl;
    cin >> Length >> Width >> Height;
    Square = Area(Length);
    Rectangle = Area(Length, Width);
    Cube = Area(Length, Width, Height);
}