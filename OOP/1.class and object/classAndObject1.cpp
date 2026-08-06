#include<iostream>

using namespace std;


// class     Student : classname
class Student{
    public:    // Access Modifiers
    // Properties
        string fname,lname;
        int age;

    //Constructor
    Student(string data1,string data2,int data3){
        fname = data1;
        lname = data2;
        age = data3;
    }
};

// class Student{
//     public:
//         string fname;
//         string lname = "shah";
//         int age = 12;
// };


int main(){
    // Student s1,s2;

    Student s1 =  Student("Raj","Shah",12);
    Student s2 =  Student("Rahul","Sharma",10);


    cout << s1.fname << endl;
    cout << s2.fname << endl;


    return 0;
}

// 15 Class Object : 
// 5 CPP file 