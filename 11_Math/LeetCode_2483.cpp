#include <vector>
#include <string>
#include <algorithm>
#include <iostream>
using namespace std;

int bestClosingTime(string customers) {
    int n = customers.size(); 
    vector<int> pre(n + 1, 0); // Prefix penalties (penalty for 'N')
    vector<int> suf(n + 1, 0); // Suffix penalties (penalty for 'Y')

    // Compute prefix penalties
    for (int i = 0; i < n; i++) {
        pre[i + 1] = pre[i] + (customers[i] == 'N' ? 1 : 0);
    }

    // Compute suffix penalties
    for (int i = n - 1; i >= 0; i--) {
        suf[i] = suf[i + 1] + (customers[i] == 'Y' ? 1 : 0);
    }

    // Find the minimum penalty and its index
    int minPenalty = n;
    int bestIndex = 0;
    for (int i = 0; i <= n; i++) {
        int totalPenalty = pre[i] + suf[i];
        if (totalPenalty < minPenalty) {
            minPenalty = totalPenalty;
            bestIndex = i;
        }
    }

    return bestIndex;
}

int main() {
    string customers;
    cout << "Enter the string of customers (Y/N): ";
    cin >> customers;

    int result = bestClosingTime(customers);
    cout << "Best closing time: " << result << endl;

    return 0;
}
