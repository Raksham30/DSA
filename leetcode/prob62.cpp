#include <iostream>
using namespace std;

int uniquePaths(int m, int n) {
    // if (m == 1 || n == 1) return 1;
    // return uniquePaths(m-1, n) + uniquePaths(m, n-1);
    long long res = 1;
    int N = m + n - 2;
    int k = min(m - 1, n - 1);

    for(int i = 1; i <= k; ++i) {
        res = res * (N - k + i) / i;
    }

    return (int)res;
}

int main() {
    int m, n;
    cin >> m >> n;
    int paths = uniquePaths(m, n);
    cout << paths << endl;
    return 0;
}
