#include <iostream>
#include <vector>
using namespace std;

class Solution {
private:
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
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int index = 0;
        solve(nums, ans, index);
        return ans;
    }
};

int main() {
    Solution obj;
    vector<int> nums = {1, 2, 3};

    vector<vector<int>> result = obj.permute(nums);

    cout << "All permutations are:" << endl;
    for (auto& permutation : result) {
        for (auto& num : permutation) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
