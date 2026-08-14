#include <iostream>

using namespace std;

class Person
{
public:
    int marks;
    Person(int m){
        this->marks = m;
    }

    void getData()
    {
        cout << this->marks << endl;
    }
};

int main()
{
    // Pointer of Object :
    // Person p1;
    // Person *ptr;

    // ptr = &p1;

    // ptr->getData();
    // return 0;


    // Array of Pointer Objects : 

    // Person p1(30);
    // Person p2(40);
    // Person p3(80);

    // Person *ptr[3];
    // ptr[0] = &p1;
    // ptr[1] = &p2;
    // ptr[2] = &p3;

    // ptr[0]->getData();
    // ptr[1]->getData();
    // ptr[2]->getData();

    // new operator
   Person *ptr = new Person(34);
   ptr->getData();

    //    delete operator
    delete ptr;

   ptr->getData();
   return 0;
}