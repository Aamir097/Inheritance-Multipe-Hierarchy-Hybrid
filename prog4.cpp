// Hybrid Inheritance

#include<iostream>
using namespace std;

class Person{
    public:
    void name()
    {
        cout<<"Aamir"<<endl;
    }        
};

class Employee: public Person{
    public:
        void emp_id()
        {
            cout<<9632<<endl;
        }
};

class Student: public Person{
    public:
        void stud_course()
        {
            cout<<"Full Stack Development";
        }
};

class Part_time_workers: public Employee, public Student{
    public:
    void info()
    {
        cout<<"Name"<<name<<endl;
        cout<<"Employee id"<<emp_id<<endl;
        cout<<"Course"<<stud_course<<endl;
    }
};

int main()
{
    Part_time_workers ptw;
    ptw.info();
    return 0;
}