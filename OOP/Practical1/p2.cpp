#include<iostream>

using namespace std;

// Parent Class : 
class Person{
    public:
        int age;
        string fname;

    // Constructor
    Person(string data1,int data2){
        this->fname = data1;
        this->age = data2;
    }
};

// child class :
class Student : public Person{
    public:
        int rollno;
        float marks;
    
    // Constructor
    Student(string studentname,int age,int endrollmentno,float marks):Person(studentname,age){
        this->rollno = endrollmentno;
        this->marks = marks;
    }

    // Method
    void displayData(){
        cout << "Student Name : " << this->fname << endl;
        cout << "Rollno : " << this->rollno << endl;
        cout << "Age : " << this->age << endl;
        cout << "Marks : " << this->marks << endl;
    }

};


int main(){
    string data1;
    int data2,data3;
    float data4;

    cout << "Enter Student Name : ";
    cin >> data1;
     cout << "Enter Student Age : ";
    cin >> data2;
     cout << "Enter Student Rollno : ";
    cin >> data3;
     cout << "Enter Student Marks : ";
    cin >> data4;

    Student s1(data1,data2,data3,data4);
    s1.displayData();
    return 0;
}