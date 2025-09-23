#include <iostream>
using namespace std;

class Hero{
    private:
        char level;
    public: //Access Specifiers..
        int health ;
        
    //Constructor Called. Works on both static and dynamic..
    
    Hero(){
        cout<<"Constructor called";
    }
    
    //ParaMerterised Constructor..
    
    Hero(int health , char level){
         this -> health = health;
         this -> level = level;
    }
    
    //Copy Constructor..
    
        
        //Setter function..
    void setHealth(int h){
        health = h;
    }
        // Getter Function..
    char getLevel(){
        return level;
    }
    void setLevel(char a){
        level = a;
    }
    int getHealth(){
        return health;
    }
};

int main() {
    
    Hero h1(100 , 'A');
    
    //Copy Constructor..
    Hero h2(h1);
    
    cout<<h2.getHealth()<<endl;
    
    
    
    
    
    
    
    // //Static Allocation..
    // Hero h1(100);
    // cout<<h1.getHealth()<<endl;
    
    
    
    // //Dynamic Allocation..
    // // Hero *h2 = new Hero; 
    
    // // //For using dynamic object..
    // // (*h2).setLevel('B');
    // // cout<<(*h2).getLevel()<<endl;
    
    
    
    

    return 0;
}