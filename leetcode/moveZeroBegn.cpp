#include<iostream>
using namespace std;

//Move all Zeros to begin.

void moveZeroB(int arr[] , int size){
    int i = 0 ;
    for(int j = 0; j<size ; j++){
        if(arr[j] != 0){
            swap(arr[i] , arr[j]);
            i++;
        }
    }
}

//Move all Zeros to end.
void moveZeroE(int arr[] , int size){
    int i = 0 ;
    for(int j = 0; j<size ; j++){
        if(arr[j] == 0){
            swap(arr[i] , arr[j]);
            i++;
        }
    }
}
int main(){

    int size =5 ;
    int arr[5] = {2,0,0,5,0};
    moveZeroB(arr,size);
    for(int i =  0 ; i<size ; i++){
        cout<<arr[i]<<" ";
    } 
    return 0;
}