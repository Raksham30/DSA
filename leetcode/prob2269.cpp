// #include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

int divisorSubstrings(int num, int k) {
    string number = to_string(num);
    int count = 0;

    for (int i = 0; i + k <= number.size(); i++) {
        string el = number.substr(i, k);
        int val = stoi(el);
        if (val != 0 && num % val == 0) {
            count++;
        }
    }

    return count;
}

int main() {
    int num = 240;
    int k = 2;

    int result = divisorSubstrings(num, k);
    cout << "Number of divisor substrings: " << result << endl;

    return 0;
}
