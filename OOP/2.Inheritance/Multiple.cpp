#include<iostream>

using namespace std;

// Multiple Inheritance :
class Car{
    public:
        void drive(){
            cout << "Method of Car Class(Drive)" << endl;
        }
};


class Sportcar : public Car{
    public:
        void racing(){
            cout << "Method of Sportcar Class (use in a race)" << endl;
        }
};

class NormalCar : public Car{
    public:
        void greeting(){
            cout << "Method of Normalcar Class (Routine)" << endl;
        }
};

int main(){
    Sportcar s1;
    NormalCar n1;
    n1.greeting();
    s1.racing();


    n1.drive();
    s1.drive();
    return 0;
}