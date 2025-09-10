// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

// Sum of all numbers in an array using Recursion..

int sum(int arr[] , int size){
    if(size == 0 ){
        return 0;
    }
    return arr[0] + sum(arr+1 , size-1);
}

//Linear search using Recursion..

bool find(int arr[] , int size , int target){
    if(size==0){
        return false;
    }
    if(arr[0] == target){
        return true;
    }else{
        bool ans = find(arr+1 , size-1 , target);
        return ans;
    }
}

//Binary Search Using Recursion..
//Find index of the given element..

int binarySearch(int arr[] , int start, int end , int target){
    if(start>end){
        return -1;
    }
    int mid = (start + end) / 2 ;
    if(arr[mid] == target){
        return mid;
    }else if(arr[mid]>target){
        return binarySearch(arr , start , mid-1 , target);
    }else{
       return binarySearch(arr , mid+1 , end , target);
    }
}

int main() {
    
    int arr[6] = {1,2,3,4,5,10};
    
    cout<<sum(arr , 6)<<endl;
    bool isPresent = find(arr , 6 , 0);
    if(isPresent){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
    cout<<binarySearch(arr , 0 , 5 , 99);
    return 0;
}