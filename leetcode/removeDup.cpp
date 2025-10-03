#include<iostream>
using namespace std ;


void removeDu(int arr[] , int size , int res[]){
    int j = 0 ; 
    for(int i = 0 ; i<size-1 ; i++){
        if(arr[i] == arr[i+1]){
            res[j] = arr[i];
            j++;
        }
    }
    for(int i = 0 ; i<2 ; i++){
        cout<<res[i]<<" ";
    }
}


int main(){
    int arr[5] = {1,2,2,4,4};
    int res[4] ;
    int size = 5;

    removeDu(arr,size,res);
    // for(int i = 0 ; i<2 ; i++){
    //     cout<<res[i]<<" ";
    // }

    return 0;
}