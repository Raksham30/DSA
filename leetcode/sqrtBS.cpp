#include<iostream>
using namespace std;


int sqrt(int i){
    int s = 1;
    int e = i-1 ;
    int ans = -1;
    while(s<=e){
        int mid = (s+e)/2 ;
        if(mid*mid == i){
            return mid ;
        }else if(mid*mid < i){
            ans = mid ;
            s = mid+1;
        }else{
            // ans = mid;
            e = mid-1;
        }
    }
    return ans;
}


int main(){

    int res = sqrt(15);
    cout<<res<<endl;
    return 0;
}