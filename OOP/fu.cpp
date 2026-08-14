#include <iostream>

using namespace std;

void addition(int a,int b){
    cout << "Addition : " << a+b << endl;
}
void addition(double a,double b){
    cout << "Addition : " << a+b << endl;
}

int main()
{
   addition(11,12);
   addition(12.3,4.5);
   return 0;
}