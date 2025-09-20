#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to calculate maximum score
int maxScore(vector<int>& cardPoints, int k) {
    int sum = 0;
    int n = cardPoints.size();

    // Sum first k cards
    for(int i = 0; i < k; i++) {
        sum += cardPoints[i];
    }

    int max_points = sum;
    int j = n - 1;

    // Slide window: remove from start, add from end
    for(int i = k - 1; i >= 0; i--) {
        sum -= cardPoints[i];
        sum += cardPoints[j--];
        max_points = max(sum, max_points);
    }

    sum = 0;
    // Sum last k cards
    for(int i = n - 1; i > n - 1 - k; i--) {
        sum += cardPoints[i];
    }
    max_points = max(sum, max_points);

    return max_points;
}

int main() {
    int n, k;
    cout << "Enter number of cards: ";
    cin >> n;

    vector<int> cardPoints(n);
    cout << "Enter card points: ";
    for(int i = 0; i < n; i++) {
        cin >> cardPoints[i];
    }

    cout << "Enter k: ";
    cin >> k;

    int result = maxScore(cardPoints, k);
    cout << "Maximum score: " << result << endl;

    return 0;
}
