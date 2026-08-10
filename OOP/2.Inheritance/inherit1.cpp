#include<iostream>

using namespace std;

class Animal{
    public:
        void sleep(){
            cout << "Sleeping" << endl;
        }

        void eat(){
            cout << "Eating" << endl ;
        }
};

class Dog : public Animal{
    public :
        void barks(){
            cout << "Bhaww Bhawuuu" << endl;
        }        
};

class Cat : public Animal{
    public :
        void meow(){
            cout << "Meow Meow" << endl;
        }
};

int main(){
    // Animal dog;
    // Animal cat;

    // dog.eat();
    // cat.eat();
    Dog d1;
    Cat c1;
    d1.eat();
    d1.barks();
    d1.me

    c1.eat();
    c1.meow();

    return 0;
}