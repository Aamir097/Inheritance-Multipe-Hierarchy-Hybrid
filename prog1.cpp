// Multiple Inheritance

#include<iostream>
using namespace std;

class Dog{
    public:
        void print_dog()
        {
            cout<<"Bark Bark"<<endl;
        }
};

class Cat{
    public:
        void print_cat()
        {
            cout<<"Meow Meow"<<endl;
        }   
};  

class Animals: public Dog, public  Cat{
    public:
        void print_msg()
        {
            cout<<"Dog: ";
            print_dog();
            cout<<"Cat: ";
            print_cat();
        }
};  


int main()
{
    Animals sound;
    sound.print_msg();
    return 0;
}