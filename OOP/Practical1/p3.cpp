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
        float marks[3];
        string coursename;
    
    // Constructor
    Student(string studentname,int age,int endrollmentno,string course,float mark1,float mark2,float mark3):Person(studentname,age){
        this->rollno = endrollmentno;
        this->marks[0] = mark1;
        this->marks[1] = mark2;
        this->marks[2] = mark3;
        
        this->coursename = course;
    }
};

// child 2 Class : 
class Result : public Student{
    public:
        float percentage;

    Result(string studentname,int age,int endrollmentno,string course,float mark1,float mark2,float mark3): Student(studentname,age,endrollmentno,course,mark1,mark2,mark3){
            for (int i = 0; i < 3; i++)
            {
                this->percentage+= this->marks[i];
            }
            this->percentage/=3;        
    }

    void markscard(){
        for (int i = 0; i < 3; i++)
        {
            cout << "Marks"<< i+1 << ":" << this->marks[i] << endl;
        }
        cout << "percentage : " << this->percentage << endl;
    }
};


int main(){
    Result r1("Raj",12,1234,"IT",78.9,90,78);

    r1.markscard();
    return 0;
}