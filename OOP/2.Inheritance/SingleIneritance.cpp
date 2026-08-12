#include<iostream>

using namespace std;

// Single Inheritance :
class Birds{
    public:
        void sleep(){
            cout << "Bird Sleeping " << endl;
        }
};

class Dove : public Birds{
    public:
        void fly(){
            cout << "Dove is Flying " << endl;
        }
};

int main(){
    Dove d1;
    Birds b1;

    d1.fly();
    d1.sleep();
    return 0;
}