#include<iostream>

using namespace std;

int main(){
    int choice;
    cout << "choice : 1\n2\n3." << endl;
    cout << "Enter Your Choice : " << endl;
    cin >> choice;

    switch (choice)
    {
    case 1: cout << "Case 1 " << endl;
        break;
    case 2: cout << "Case 2 " << endl;
        break;
    case 3: cout << "Case 3 " << endl;
        break;
    
    default: cout << "Case Default" << endl;
        break;
    }
    return 0;
}

/*
 user choice : switch case.
 data enter : answer : condition (if-else)


 in C : case int/char 
 in CPP : int/char/string + vector
*/ 