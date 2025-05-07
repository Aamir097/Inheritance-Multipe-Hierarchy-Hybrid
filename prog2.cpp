// Multiple Inheritance

#include<iostream>
using namespace std;

class Engine{
    public:
       void getengine()
       {
        cout<<"Powerfull Engine"<<endl;;
       }
};

class Suspension{
    public:
        void getsuspension()
        {   
            cout<<"High Suspension"<<endl;;
        }
};

class Car: public Engine, public Suspension{
    public:
        void carparts()
        { 
            cout<<"These are the car parts: ";
            getengine();
            cout<<"These are the car parts: ";
            getsuspension();

        }
};

int main()
{
    Car parts;
    parts.carparts();
    return 0;
}