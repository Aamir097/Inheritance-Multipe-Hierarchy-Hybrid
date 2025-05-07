// Multilevel inheritance

#include<iostream>
using namespace std;

class Msg{
    public:
        void msg()
        {
            cout<<"Good morning: "<<endl;
        }
};

class For: public Msg{
    public:
        void msg2()
        {
            cout<<"Everyone: "<<endl;
        }
};

class Stud: public For{
    public:
        void msg3()
        {
            cout<<"How are you? "<<endl;
        }
};

int main()
{
    Stud obj;
    obj.msg();
    obj.msg2();
    obj.msg3();
    return 0;
}