#include<iostream>

using namespace std;

class Animal{
    public :
        virtual void sound(){
            cout << "Animal Method" << endl;
        }
};

class Dog : public Animal{
    public :
        void sound(){
            cout << "Dog Sound" << endl;
        }
}; 



// class Animal{
//     public :
//         virtual void sound() = 0; // pure Virtual
// };

// class Dog : public Animal{
//     public :
//         void sound(){
//             cout << "Dog Sound" << endl;
//         }
// }; 


int main(){
    Animal a1;
    // Dog d1;
    // a1.sound();
    // d1.sound();

    // Animal* a1;
    // Dog d1;

    // a1 = &d1;

    // a1->sound();


    return 0;
}