#include<iostream>

using namespace std;
class Animal{
    public : 
    void eating(){
        cout << "Animal Eating" << endl;
    }
    void sleeping(){
        cout << "Animal Sleeping" << endl;
    }
};

class Dog : public Animal {
    public : 
    void clever(){
        cout << "Vafadar" << endl;

    }
};

class Cat : public Animal {
    public : 
    void lazy(){
        cout << "Lazy" << endl;
    }
};

class Cow : public Animal {
     public:
    void loving(){
        cout << "Loving" << endl;
    }
};

int main(){
    Dog dog1;
    Cow cow1;
    Cat cat1;

    dog1.eating();
    cow1.eating();
    cat1.eating();

    dog1.clever();
    cow1.loving();
    cat1.lazy();


    return 0;
}