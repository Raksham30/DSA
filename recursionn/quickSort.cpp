#include <iostream>
using namespace std;

int partition(int arr[] , int s , int e){

    int pivot = arr[s];

    int count = 0 ;
    for(int i = s+1 ; i<=e ; i++){
        if(arr[i]<=pivot){
            count++;
        }
    }

    //right index for piviot.
    int piviotIndex = s + count ;

    //Placing Piviot at right index.
    swap(arr[piviotIndex] , arr[s]);

    // sort both left and right part according to piviot.
    int i = s , j = e ;

    while(i < piviotIndex && j>piviotIndex){
        
        while(arr[i] < pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i < piviotIndex && j > piviotIndex){
            swap(arr[i++] , arr[j--]);
        }
    }
    return piviotIndex;

}

void quickSort(int arr[] , int s , int e){

    //base case. 
    if(s>=e){
        return ;
    }
    //partition of an array
    int p = partition(arr , s , e);

    // Sort left part after partition.
    quickSort(arr , s , p-1);

    // Sort right part. 
    quickSort(arr, p+1 , e);

}


int main(){

    int arr[5] = {1,3,9,1,9};
    int n = 5 ;
    quickSort(arr , 0 , n-1) ;

    for(int i = 0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}