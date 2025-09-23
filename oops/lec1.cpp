#include <iostream>
using namespace std;

class Hero{
    private:
        char level;
    public: //Access Specifiers..
        int health ;
        
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
};

int main() {
    
    Hero h1;
    h1.setLevel('A');
    h1.setHealth(100);
    
    cout<<h1.health<<endl;
    cout<<h1.getLevel()<<endl;

    return 0;
}