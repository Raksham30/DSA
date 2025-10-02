#include<iostream>
using namespace std;


// Class Inheritance Ambiguity..

class A {
    public:
        void abc(){
            cout<<"Class A function"<<endl;
        }
};

class B {
    public:
        void abc(){
            cout<<"Class B function"<<endl;
        }
};

class C : public  A , public  B{

};

int main(){

    C obj ;
    obj.A::abc();
    obj.B::abc();
    // obj.abc(); // Shows Error without  any scope resolution .. 

    return 0;
}