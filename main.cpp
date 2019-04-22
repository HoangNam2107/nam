#include <iostream>
//#include "students.h"
#include "retangle.h"
using namespace std;

int main()
{
    retangle r1;
    retangle r2(10, 15);

    r1.show_info();
    r2.show_info();

};
    /*test_student t;
    t.test();

    cout << "Create a student with default construction" << endl;
    students s1;
    s1.show_info();

    cout << "Create a student with default constructor" << endl;
    students s2 = new student ("john", 20);
    s2.show_info();

    delete s2;

    students s3("Paul", 22);
    s3.show_info();

    s3.set_age(38);
    s3.show_info();

    s2.set_name("Obama");
    s2.show_info();
    return 0;
*/
