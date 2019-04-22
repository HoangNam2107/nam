#include "students.h"
#include<iostream>
using namespace std;
students::students()
{
    _name = "Nguyen Van A";
    _age = 18;
}

students::~students()
{
    cout << _name << " is leaving for good" << endl;
}

students::students(string name, int age)
{
    _name = name;
    _age = age;
}

string students::get_name()
{
    return _name;

}

int students::get_age()
{
    return _age;
}

void students::set_name(string name)
{
    _name = name;
}

void students::set_age(int age)
{
    _age = age;
}

void students::show_info()
{
    cout << "Student: " << _name << ", age: " << _age <<endl;
}
