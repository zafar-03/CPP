#include<iostream>

using namespace std;

class Person{
    
    public : 
    static int count;
        int age;
    Person(int a){
        Person::count ++;
        this->age = a;
    }

    static void greeting(){
        cout << "h";
    }
};

int Person::count = 0;
int main(){
    // Person p1(12);
    // Person p2(22);
    // Person p3(30);
    // cout << p3.age;
    // Person p[] = {12,22,30};
    // cout << p[2].age;
    Person p1(12);
    Person p2(30);


    // cout << Person::count ;

    // p1.greeting();

    Person::greeting();
    return 0;
}