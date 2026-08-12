#include<iostream>

using namespace std;

// Multi-level Inheritance :

class Grandfather{
    public:
        void land(){
            cout << "1000 viga land" << endl;
        }
};
class Father : public Grandfather{
    public:
        void gold(){
            cout << "1000 kg Gold" << endl;
        }
};
class Child : public Father{
    public:
        void bike(){
            cout << "Sport Bike" << endl;
        }
};


int main(){
    Child c1;
    c1.bike();
    c1.gold();
    c1.land();
    return 0;
}