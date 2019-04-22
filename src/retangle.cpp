#include "retangle.h"

using namespace std;
retangle::retangle()
{
    _height = 10;
    _length = 15;
}

retangle::retangle(int height, int length)
{
    set_height(height);
    set_length(length);
}
void retangle::set_height(int height)
{
    _height = height;

}
void retangle::set_length(int length)
{
    _length = length;
}

int retangle::get_height()
{
    return _height;
}


int retangle::get_length()
{
    return _length;
}
void retangle::show()
{
    cout << "retangle has height = " << _height << ", length = " << length << ", perimeter = "<< get_perimeter() << ", area =" << get_area() << endl;
}
int retangle::get_area()
{
    return _height * _length;
}
int retangle::get_perimeter()
{
    return 2 * (height * length);
}
