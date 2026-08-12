#include <iostream>

using namespace std;

class A{
    public :
        void showdata(){
            cout << "Class A"<< endl;
        }
};
class B{
    public :
        void showdata(){
            cout << "Class B"<< endl;
        }
};
class C : public A,public B{

};

int main(){
    C c1;
    c1.A::showdata();
    return 0;
}