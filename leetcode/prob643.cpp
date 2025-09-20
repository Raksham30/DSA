#include <iostream>
#include <vector>
using namespace std;

double myMax(double a, double b) {
    return (a > b) ? a : b;
}

double findMaxAverage(vector<int> &nums, int k) {
    double res = 0;
    for (int i = 0; i < k; i++) {
        res += nums[i];
    }

    double avg = res / k;

    for (int i = k; i < nums.size(); i++) {
        res += nums[i];
        res -= nums[i - k];
        avg = myMax(avg, res / k);
    }

    return avg;
}

int main() {
    int n, k;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Enter window size k: ";
    cin >> k;

    double result = findMaxAverage(nums, k);
    cout << "Maximum average of subarray of length " << k << " is: " << result << endl;

    return 0;
}
