#include <iostream>
#include <vector>
using namespace std;

void solve(vector<int> nums, vector<vector<int>>& ans, int index) {
    if (index >= nums.size()) {
        ans.push_back(nums);
        return;
    }
    for (int i = index; i < nums.size(); i++) {
        swap(nums[index], nums[i]);
        solve(nums, ans, index + 1);
        // backtrack
        swap(nums[index], nums[i]);
    }
}

vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> ans;
    int index = 0;
    solve(nums, ans, index);
    return ans;
}

int main() {
    vector<int> nums = {1, 2, 3};

    vector<vector<int>> result = permute(nums);

    cout << "All permutations are:" << endl;
    for (auto& permutation : result) {
        for (auto& num : permutation) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
