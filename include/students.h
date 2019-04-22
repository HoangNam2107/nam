#ifndef STUDENTS_H
#define STUDENTS_H
#include <string>

using namespace std;
class students
{
    public:
        //default constructor
        students();
        students(string name, int age);
        virtual ~students();
        string get_name();
        int get_age();
        void set_name(string name);
        void set_age(int age);
        void show_info();

    private:
        string _name;
        int _age;


};

#endif // STUDENTS_H
