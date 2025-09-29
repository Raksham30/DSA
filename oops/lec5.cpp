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

class Male: public Human{
    public:
        string name;
    void setName(string name){
        this->name = name;
    }
};

int main(){

    // Student first ;

    return 0;
}