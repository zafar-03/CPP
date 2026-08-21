//Polymorphism : many forms
// 1. method over loading 
    // only with function
    // with class

// 2. method over riding
#include<iostream>

using namespace std;

// void addition(int a,int b){
//     cout << "Additiion :" << a+b  << endl;
// }

// void addition(double a,double b){
//     cout << "Additiion :" << a+b  << endl;
// }
class calc{
    public:
        void addition(int a,int b){
            cout << "Additiion :" << a+b  << endl;
        }

        void addition(double a,double b){
            cout << "Additiion :" << a+b  << endl;
        }

        void greeting(){
            cout << "Hello";
        }
};


class Operation : public calc{
    public :
    void greeting(){
        cout << "Operation Method";
    }
};

int main(){
    // addition(11,12);
    // addition(11.4,12.3);
    // calc c1;

    // c1.addition(1,2);
    // c1.addition(1.7,2.4);

    Operation o1;

    o1.greeting();

    return 0;
}