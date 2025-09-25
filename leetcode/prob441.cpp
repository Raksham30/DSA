// #include <bits/stdc++.h>
#include <iostream>
using namespace std;

int arrangeCoins(int n) {
    long long s = 0, e = n, ans = 0;
    while (s <= e) {
        long long mid = (s + e) / 2;
        long long coins = mid * (mid + 1) / 2;

        if (coins == n) {
            return (int)mid;
        }
        else if (coins < n) {
            ans = mid;
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }
    }
    return (int)ans;
}

int main() {
    int n;
    cin >> n;
    cout << arrangeCoins(n) << endl;
    return 0;
}
