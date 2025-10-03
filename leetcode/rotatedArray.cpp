#include <iostream>
using namespace std;


int findPeak(int arr[] , int size){
        int s = 0;
        int e = size-1 ;
        int mid = s + (e-s)/2 ;
        while(s<e){
            if(arr[mid]<arr[mid+1]){
                s = mid+1;
            }else{
                e = mid;
            }
           mid = s + (e-s)/2 ; 
        }
        return mid;
}

int binarySearch(int arr[] , int s , int e , int target){
    while(s<=e){
        int mid = (s+e)/2 ;
        if(arr[mid] == target){
            return mid;
        }else if(arr[mid]<target){
            s = mid+1;
        }else{
            e = mid-1;
        }
    }
    return -1;
}


int main(){
    int arr[5] = {3,4,5,1,2};
    int size = 5 ;
    int target = 4;
    int peak = findPeak(arr , size);
    if(arr[0] <= target && arr[peak]>=target){
        cout<<binarySearch(arr , 0 , peak, target)<<endl;
    }else{
        cout<<binarySearch(arr , peak+1 , size-1 , target)<<endl;
    }
    return 0;
}