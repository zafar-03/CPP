#include<iostream>

using namespace std ;

int main(){
    // int arr[100],n; 
    int n;
    // char arr[100];
    float arr[100];

    cout << "Enter the Value of N : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the Value of arr[" << i <<"] : " ;
        cin >> arr[i];
    }
    

    cout << "Array is  : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }


    return 0;
}