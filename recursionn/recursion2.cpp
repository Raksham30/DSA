#include <iostream>
using namespace std;

//Reverse the string with Recursion.

void reverse(string&  str , int i , int j){
   //base case
   if(i>j){
    return ;
   }
   swap(str[i] , str[j]) ;
   i++;
   j--;

   //Recursive call 

   reverse(str , i , j) ;

}

//Check Pailndrom using Recursion

bool isPailndrom(string str , int i , int j ){
    if(str[i] != str[j]){
        return false;
    }else if(i>j){
        return true;
    }
    i++;
    j--;
    isPailndrom(str,i,j);
};

// Calculating Power of number using recursion.
int power(int num1 , int num2){
    //base case
   if(num2 == 0){
    return 1;
   }
   if(num2 == 1){
    return num1;
   }
   int ans = power(num1 , num2/2);
   //recursive calls
   if(num2%2==0){
    return ans*ans;
   }else{
    return num1 * ans * ans;
   }
}


int main(){

    string str = "abcde";

    //Reverse The string.
    reverse(str , 0 , str.length()-1);
    cout<<str<<endl; 

    //checking that the given string is Pailndrom.
    string str2 = "aabbaa";
    if(isPailndrom(str2,0,str.length()-1)){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
    //Calculating powers
    int num1 = 5 ;
    int num2 = 3 ;
    cout<<power(num1 , num2)<<endl ;

    return 0;
}


