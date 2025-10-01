#include <iostream>

using namespace std;
 
// class Student{
//     private:
//         string name ;
//         int age ;
//         int height ;
//     public:
//         int getAge(){
//             return this->age;
//         }
// };


//Inheritance..

class Human{
    public: 
        int height ;
        int weight ;
        int age;
    void setValue(int h , int w ,int a){
        height = h ;
        weight = w;
        age = a;
    }
};

//Public to Public inheritance.

class Male: public Human{
    public:
        string name;
    void setName(string name){
        this->name = name;
    }
};

//Public to Protected Inheritance
// class Male: protected Human{
//     public:
//         string name;
//     void setName(string name){
//         this->name = name;
//     }b 
// };
//Public to Private Inheritance
// class Male: private Human{
//     public:
//         string name;
//     void setName(string name){
//         this->name = name;
//     }
// };



int main(){

    Male m1 ;
    cout<<m1.height<<endl; 

    // Student first ;

    return 0;
}