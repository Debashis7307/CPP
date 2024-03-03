#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int countTriplets(vector<int>& arr, int targetSum) {
    int n = arr.size();
    int count = 0;

    // Sort thehe array
    sort(arr.begin(), arr.end());

    for (int i = 0; i < n - 2; ++i) {
        int left = i + 1;
        int right = n - 1;

        while (left < right) {
            int currentSum = arr[i] + arr[left] + arr[right];

            if (currentSum == targetSum) {
                // Found a triplet
                ++count;
                ++left;
                --right;
            } else if (currentSum < targetSum) {
                ++left;
            } else {
                --right;
            }
        }
    }

    return count;
}

int main() {
    vector<int> arr = {0, -1, 2, -3, 1};
    int targetSum = -2;

    int result = countTriplets(arr, targetSum);

    cout << "Number of triplets with sum equal to " << targetSum << ": " << result << endl;

    return 0;
}
