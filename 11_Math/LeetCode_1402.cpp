#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxSatisfaction(vector<int>& satisfaction) {
    // Sort the satisfaction array in ascending order
    sort(satisfaction.begin(), satisfaction.end());
    int n = satisfaction.size();
    vector<int> suf(n, 0); // Suffix sum array

    // Calculate suffix sums
    suf[n - 1] = satisfaction[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        suf[i] = suf[i + 1] + satisfaction[i];
    }

    // Find the pivot index where suffix sum becomes non-negative
    int idx = -1;
    for (int i = 0; i < n; i++) {
        if (suf[i] >= 0) {
            idx = i;
            break;
        }
    }

    // If all suffix sums are negative, return 0
    if (idx == -1) return 0;

    // Calculate the result
    int result = 0;
    int no = 1;
    for (int i = idx; i < n; i++) {
        result += no * satisfaction[i];
        no++;
    }

    return result;
}

int main() {
    int n;
    cout << "Enter the number of dishes: ";
    cin >> n;

    vector<int> satisfaction(n);
    cout << "Enter the satisfaction values for the dishes: ";
    for (int i = 0; i < n; i++) {
        cin >> satisfaction[i];
    }

    int result = maxSatisfaction(satisfaction);
    cout << "Maximum Satisfaction: " << result << endl;

    return 0;
}
