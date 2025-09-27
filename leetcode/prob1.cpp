// #include <bits/stdc++.h>
#include <iostream>
#include<vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> v;
    int len = nums.size() - 1;
    for (int i = 0; i < len; i++) {
        for (int j = i + 1; j <= len; j++) {
            if (nums[i] + nums[j] == target) {
                v.push_back(i);
                v.push_back(j);
                return v;
            }
        }
    }
    return v;
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = twoSum(nums, target);
    if (!result.empty()) {
        cout << result[0] << " " << result[1] << endl;
    } else {
        cout << "No solution found" << endl;
    }
    return 0;
}
