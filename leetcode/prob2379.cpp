// #include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

int minimumRecolors(string blocks, int k) {
    int sum = 0;
    for (int i = 0; i < k; i++) {
        if (blocks[i] == 'W') {
            sum++;
        }
    }
    int min_count = sum;

    for (int i = k; i < blocks.length(); i++) {
        if (blocks[i] == 'W') {
            sum++;
        }
        if (blocks[i - k] == 'W') {
            sum--;
        }
        min_count = min(min_count, sum);
    }
    return min_count;
}

int main() {
    string blocks;
    int k;
    cout << "Enter blocks string (B/W): ";
    cin >> blocks;
    cout << "Enter k: ";
    cin >> k;

    int result = minimumRecolors(blocks, k);
    cout << "Minimum recolors required: " << result << endl;

    return 0;
}
