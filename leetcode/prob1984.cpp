// #include <bits/stdc++.h>
#include <iostream>
#include<algorithm>
#include <vector>
using namespace std;

int minimumDifference(vector<int>& nums, int k) {
    sort(nums.begin(), nums.end());
    int ans = INT_MAX;
    for (int i = 0; i <= nums.size() - k; i++) {
        int res = nums[i + k - 1] - nums[i];
        ans = min(res, ans);
    }
    return ans;
}

int main() {
    vector<int> nums1 = {90};
    int k1 = 1;
    cout << minimumDifference(nums1, k1) << endl;

    vector<int> nums2 = {9, 4, 1, 7};
    int k2 = 2;
    cout << minimumDifference(nums2, k2) << endl;

    return 0;
}
