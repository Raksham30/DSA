// #include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

bool isVowel(char ch) {
    string vowel = "aeiou";
    for (int i = 0; i < 5; i++) {
        if (ch == vowel[i]) {
            return true;
        }
    }
    return false;
}

int maxVowels(string s, int k) {
    int numVowels = 0;
    int maxNum = 0;

    // First window of size k
    for (int i = 0; i < k; i++) {
        if (isVowel(s[i])) {
            numVowels++;
        }
    }
    maxNum = numVowels;

    // Sliding window
    for (int i = k; i < s.length(); i++) {
        if (isVowel(s[i])) {
            numVowels++;
        }
        if (isVowel(s[i - k])) {
            numVowels--;
        }
        maxNum = max(maxNum, numVowels);
    }

    return maxNum;
}

int main() {
    string s;
    int k;

    cout << "Enter string: ";
    cin >> s;

    cout << "Enter window size k: ";
    cin >> k;

    int result = maxVowels(s, k);
    cout << "Maximum number of vowels in any substring of length " << k << " is: " << result << endl;

    return 0;
}
