#include "teststudent.h"
#include "students.h"
#include <iostream>
using namespace std;

teststudent::teststudent()
{
    s = new student();
}

teststudent::~teststudent()
{
    delete s;
    cout << "test student deleted" << endl;
}
void test_student::test()
{
    s.show_info();
}
