#include <iostream>
using namespace std;

bool solve(int n) {
    // base cases
    if (n == 0) {
        return false;
    }
    if (n == 1) {
        return true;
    }

    if (n % 3 == 0) {
        return solve(n / 3);
    }

    return false;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (solve(n)) {
        cout << n << " is a power of 3." << endl;
    } else {
        cout << n << " is NOT a power of 3." << endl;
    }

    return 0;
}
