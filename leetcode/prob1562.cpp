// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

vector<int> decrypt(vector<int>& code, int k) {
    int n = code.size();
    vector<int> ans(n, 0);

    if (k == 0) return ans;

    int sum = 0;

    if (k > 0) {
        for (int i = 1; i <= k; i++) {
            sum += code[i % n];
        }
        ans[0] = sum;
        for (int j = 1; j < n; j++) {
            sum -= code[j];
            sum += code[(j + k) % n];
            ans[j] = sum;
        }
    } else {
        k = -k;
        for (int i = n - k; i < n; i++) {
            sum += code[i];
        }
        ans[0] = sum;
        for (int j = 1; j < n; j++) {
            sum -= code[(j - k - 1 + n) % n];
            sum += code[j - 1];
            ans[j] = sum;
        }
    }
    return ans;
}

int main() {
    vector<int> code = {5, 7, 1, 4};
    int k = 3;

    vector<int> result = decrypt(code, k);

    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
