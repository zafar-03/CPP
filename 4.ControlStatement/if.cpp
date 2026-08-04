#include<iostream>

using namespace std;

int main(){
    int num1 =27,num2=220;
    // 1. If Statement 
    // if(num > 0){
    //     cout << num << endl;
    // }

    // 2. If-else
    // if(num > 0){
    //     cout << "Positive" << endl;
    // }else{
    //     cout << "Negative" << endl;
    // }


    // 3. Ladder/else-if Statement 
    // if(num1>num2){
    //     cout << "Number1 is Greater then Number 2" << endl ;
    // }else if(num1 == num2){
    //     cout << "Number1 and Number2 Both are Same." << endl;
    // }else{
    //     cout << "Number2 is Greater then Number 1" << endl ;
    // }


    // 4. Nested If-else Statement.
    if(num1 % 5 == 0 ){
        if(num1 % 3 == 0){
            cout << "Number is Divisable by 3 and 5." << endl;
        }else{
            cout << "Number is divisable by 5 but Not Divisable by 3." <<endl;
        }
    }else{
        cout << "Number is Not Divisable by 5." <<endl;
    }


    return 0;
}
// print : number zero larger    number > 0



/*
1. Display grade based on percentage: A, B, C, D, F.
    marks1 ...marks5 
    marks addtion / 5   = avg 

    A    : >=95
    B    : >=80   <95
    C    : >=65   <80
    D    : >=35    <65
    F    : >35   


2. Check voting eligibility based on age.

3. Traffic signal response (Red → Stop, Yellow → Wait, Green → Go).
*/