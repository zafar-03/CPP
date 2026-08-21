#include<iostream>

using namespace std;

class Bank{
    protected:
        string bankname = "SBI";

    // public:
    // string getName(){
    //     return this->bankname;
    // }
};


class Person : public Bank{
    public:
    string getName(){
        return this->bankname;
    }
};

int main(){
    Person p1;
    // Bank b1;
    cout << p1.getName();
    // cout << p1.bankname;
}


/*
 public :   Direct Accessable / Accessable in Sub class
 protected : Direct Not Accessable / Accessable in Sub class
 private :  Direct Not Accessable / Not Accessable in Sub class

*/ 
