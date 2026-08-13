#include <iostream>

using namespace std;

class Student{
    public : 
        float marks[3];

        Student(float m1,float m2,float m3){
            this->marks[0] = m1;
            this->marks[1] = m1;
            this->marks[2] = m1;
        }
};  
class Sports{
    public : 
        float mark;

        Sports(float m1){
            this->mark = m1;
        }

};

class Result : public Student , public Sports{
    public :
        float result;
    Result(float makr1,float makr2,float makr3,float makr4) : Student(makr1,makr2,makr3),Sports(makr4) {
        this->result = (this->marks[0]+this->marks[1]+this->marks[2]+this->mark)/4;
    }

    void displayResult(){
        cout << this->result;
    }
};

int main(){

    Result person1(78,90,87,67);

    person1.displayResult();
    return 0;
}