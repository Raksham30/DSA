// #include <bits/stdc++.h>
#include <iostream>
#include<string>
#include<vector>
using namespace std;

void conv(string s , vector<int>& res){
    for(int i = 0 ; i<s.length() ; i++){
        if(s[i] == 'I'){
            res.push_back(1);
        }
        if(s[i] == 'V'){
            res.push_back(5);
        }
        if(s[i] == 'X'){
            res.push_back(10);
        }
        if(s[i] == 'L'){
            res.push_back(50);
        }
        if(s[i] == 'C'){
            res.push_back(100);
        }
        if(s[i] == 'D'){
            res.push_back(500);
        }
        if(s[i] == 'M'){
            res.push_back(1000);
        }
    }
}

int romanToInt(string s) {
    vector<int> res;
    conv(s,res);
    int ans = 0 ;
    for(int i = 0 ; i<res.size(); i++){
        if(i+1 < res.size() && res[i]< res[i+1]){
            int sum = res[i+1] - res[i];
            ans+= sum;
            i++;
        }else{
            ans+= res[i];
        }
    }
    return ans;
}

int main(){
    string roman;
    cin >> roman;
    cout << romanToInt(roman) << endl;
    return 0;
}
