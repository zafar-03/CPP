#include<iostream>

using namespace std;

class Student{
    public:
        int marks;
    Student(int marks){
        this->marks = marks;
    }
    Student(Student &s){
        this->marks = s.marks;
    }
};

int main(){
    // int a =12;
    // int *ptr; 
    // ptr = &a;
    Student s1(12);
    Student *s2 = &s1;

    cout << s1.marks;
    cout << s2->marks;


    return 0;
}