#include "square.h"
/*using namespace std;
square::square()
{
    _side =10;
}

square::~square(int side)
{
    set_side(side);
}
void square:set_side(int side)
{
    _side = side;
}
int square::get_side()
{
    return_side;
}
void square::show()
{
    cout << "Square has side = " << _side << ", perimeter = "<< get_perimeter() << ", area =" << get_area() << endl;
}
int square::get_area()
{
    return _side * _side;
}
int square::get_perimeter()
{
    return 4 * _side;
}
