#include<iostream>
using namespace std;



//Normal Class with data member and data function..
class Student{
    public:
        int rollno;
        string name ;
    
        Student(string name ,int rollno){
            // char *name = new char[10];
            cout<<"Constructor bhai called"<<endl;
            this -> name = name ;               
            this -> rollno = rollno ;
        }
    string getName(){
        return name;
    }
    int getRollNumber(){
        return rollno;
    }

    // void setName(char name[]){
    //     this -> name = name;
    // }

    void print(){
        cout<<endl;
        cout<<"[ Name: "<<name<<" ," ;
        cout<<" Roll Number: "<<rollno<< " ]";
        cout<<endl;
    }

    //Destructor. called only once just like constructor.

    ~Student(){
        cout<<"Destructor Bhai called."<<endl;
    }

};


int main(){


    
    Student s1("Raksham" , 1);
    s1.print();

    // Student s1(1) ;
    // char name[10] = "Raksham";
    // s1.setName(name);

    // s1.print();

    //use default copy constructor.

    // Student s2(s1) ;
    // s2.print();
    // s2.name[0] = 'A' ;
    // s2.print();
    // s1.print();


    //Assingment operator to copy objects;

    // Student s2(2) ;
    // char name2[10] = "Raksham2"; 
    // s2.setName(name2) ;
    // s2.print();

    // s2 = s1 ;
    // s2.print();



}