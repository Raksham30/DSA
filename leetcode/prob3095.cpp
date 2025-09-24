#include <iostream>
#include <vector>
using namespace std;

int minimumSubarrayLength(vector<int>& nums, int k) {
    int size = nums.size();

    for(int i = 0; i < size; i++){
        if(nums[i] >= k) return 1;
    }

    int window_size = 2;
    while(window_size <= size) {
        for(int i = 0; i + window_size <= size; i++) {
            int OR = 0;
            for(int j = i; j < i + window_size; j++) {
                OR |= nums[j];
            }
            if(OR >= k){
                return window_size;
            }
        }
        window_size++;
    }
    return -1;
}

int main() {
    vector<int> nums = {2, 1, 8};
    int k = 10;
    int result = minimumSubarrayLength(nums, k);
    cout << result << endl;
    return 0;
}
