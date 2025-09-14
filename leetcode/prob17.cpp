#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
private:
    void solve(string digit, string output, int index, vector<string>& ans, string mapping[]) {
        // Base Case
        if (index >= digit.length()) {
            ans.push_back(output);
            return;
        }
        int number = digit[index] - '0';
        string value = mapping[number];
        for (int i = 0; i < value.length(); i++) {
            output.push_back(value[i]);
            solve(digit, output, index + 1, ans, mapping);
            output.pop_back();
        }
    }
public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if (digits.length() == 0) {
            return ans;
        }
        string output;
        int index = 0;
        string mapping[10] = {"" , "" , "abc" , "def", "ghi", "jkl", "mno" , "pqrs", "tuv" , "wxyz"};
        solve(digits, output, index, ans, mapping);
        return ans;
    }
};

int main() {
    Solution obj;
    string digits;
    cout << "Enter digits (2-9): ";
    cin >> digits;

    vector<string> result = obj.letterCombinations(digits);

    cout << "Letter Combinations are: " << endl;
    for (string s : result) {
        cout << s << " ";
    }
    cout << endl;

    return 0;
}
