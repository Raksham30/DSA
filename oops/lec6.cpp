#include <iostream>
using namespace std;

//Single Level Inheritance..

// class Animal{

//     public:
//         int age;
//         int weight;
//     void speak(){
//         cout<<"Speaking"<<endl;
//     }
// };

// class Dog : public Animal{

// };


class Animal{

    public:
        int age;
        int weight;
    void speak(){
        cout<<"Speaking"<<endl;
    }
};

class Dog : public Animal{

};

class Pug : public Dog{

};
int main(){

    Pug d1 ;
    d1.speak();
    return 0;
}