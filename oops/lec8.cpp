#include <iostream>
using namespace std ;

//Compile time polymorphism..

class A{

    // Function overloading .
    public: 

        int a,b;

        void sayHello(){
            cout<<"Hlloo"<<endl;
        }
        void sayHello(string name){
            cout<<"Hlloo "<<name<<endl;
        }
        
        //Operator Overloading.

        void operator+ (A obj){
            int val1 = this -> a;
            int val2 = obj.a;
            cout<<"output "<<val1+val2<<endl; 
        }

        void operator() (){
            cout<<"Main bracket hu "<<this->a<<endl;
        }
};

int main(){
    A obj1 , obj2 ;

    obj1.a = 10;
    obj2.a = 20;
    // obj1+obj2 ;
    obj1();

    // obj.sayHello("Raksham");
    return 0;
}