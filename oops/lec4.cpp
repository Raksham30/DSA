#include <iostream>
using namespace std; 

class Game {
    public: 

        //Normal data member.
        int time;
        //Static Key word (Static data member).
        //They dont have this keyword..
        static int size ;
    
    //Static function
    static int random(){
        cout<<size<<endl; //They can only access static member;
    }

};

//Scope resolution operator.
int Game::size = 100;



int main(){
    //Calling Static member..
    Game g1 ;
    g1.random();


}