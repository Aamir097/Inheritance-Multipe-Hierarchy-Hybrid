// Heirarchical Inheritance

#include<iostream>
using namespace std;

class Vehicle{
    public:
    void getmsg()
    {
        cout<<"Types of bikes & cars "<<endl;
    }
};

class bike: public Vehicle{
    public:
        void bikes()
        {
            cout<<"Sports Bikes"<<endl;;
        }
};

class car: public Vehicle{
    public:
    void cars()
    {
        cout<<"Sports Cars"<<endl;;
    }
};

int main()
{
    bike obj;
    obj.getmsg();
    obj.bikes();

    cout<<"------------"<<endl;

    car obj1;
    obj1.getmsg();
    obj1.cars();

    return 0;
}