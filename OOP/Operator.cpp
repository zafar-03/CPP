#include <iostream>

using namespace std;

class Person
{
public:
    int age;
    Person(int a)
    {
        this->age = a;
    }

    Person operator++(int)
    {
        Person p = *this;
        age++;
        return p;
    }

    ~Person()
    {
        
        cout << "Resource freed successfully.\n";
    }
};

int main()
{
    Person p1(12);

    cout << p1.age << endl;
    // p1++;

    cout << p1.age << endl;

    return 0;
}