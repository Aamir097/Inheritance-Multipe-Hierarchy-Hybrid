// Mutiple Inheritance

#include<iostream>
using namespace std;

class Dog{
    public:
        void dogs()
        {
            cout<<"Whoof Whoof"<<endl;
        }
};

class Cat{
    public:
        void cats()
        {   
            cout<<"Meow Meow"<<endl;
        }

};

class Animal: public Dog, public Cat{
    public:
        void sound()
        {
            cout<<"Dogs: ";
            dogs();
            cout<<"Cats: ";
            cats();
        }
};


int main()
{
    Animal sound;
    sound.sound();
    return 0;
}

