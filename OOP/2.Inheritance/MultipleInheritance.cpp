#include<iostream>

using namespace std;

// Multiple Inheritance :
class Human{
    public:
        void info(){
            cout << "You're Human" << endl;
        }
};

class Employee{
    public:
        void company(){
            cout << "Red & White skill Education" << endl;
        }
};

class Person : public Employee,public Human{
    public:
        void bioData(){
            cout << "Raj" << endl;
        }
};
int main(){
    
    Person p1;
    p1.bioData();
    p1.company();
    p1.info();
    return 0;
}


