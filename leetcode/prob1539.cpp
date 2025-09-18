#include <iostream>
#include <vector>
using namespace std;

int findKthPositive(vector<int>& arr, int k) {
    int i = 0;
    int num = 1;
    int n = arr.size();
    while (true) {
        if (i < n && arr[i] == num) {
            i++;
        } else {
            k--;
            if (k == 0) {
                return num;
            }
        }
        num++;
    }
}

int main() {
    int n, k;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements in sorted order: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter value of k: ";
    cin >> k;

    int result = findKthPositive(arr, k);
    cout << "The " << k << "th missing positive number is: " << result << endl;

    return 0;
}
