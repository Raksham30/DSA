#include<iostream>
using namespace std;


//Run time Polymorphism.


//Function over-riding.
class Animal{
    public:
        void name(string name){
            cout<<"My name is "<<name<<endl;
        }
        void speaking(){
            cout<<"I speak"<<endl;
        }
};

class Dog: public Animal{
    public:
        void speaking(){
            cout<<"I Bark"<<endl;
        }
};

class Cat: public Animal{
    public:
        void speaking(){
            cout<<"I do meow thing"<<endl;
        }
};


int main(){

    Dog d1 ;
    Cat c1 ;
    d1.name("xyz") ;
    d1.speaking();
    c1.name("Meow");
    c1.speaking();
    return 0;
}