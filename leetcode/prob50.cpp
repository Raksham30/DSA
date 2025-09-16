#include <iostream>
using namespace std;

// Function to calculate x^n using fast exponentiation
double myPow(double x, long long n) {
    if (n == 0) return 1;

    double half = myPow(x, n / 2);
    if (n % 2 == 0) {
        return half * half;
    } else {
        return half * half * x;
    }
}

int main() {
    double x;
    int n;

    // Input base and exponent
    cout << "Enter base x: ";
    cin >> x;
    cout << "Enter exponent n: ";
    cin >> n;

    long long N = n;
    double result;

    if (N < 0) {
        N = -N;
        result = 1 / myPow(x, N);
    } else {
        result = myPow(x, N);
    }

    cout << x << " raised to power " << n << " is: " << result << endl;

    return 0;
}
