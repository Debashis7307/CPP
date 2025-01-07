#include <iostream>
using namespace std;

void findTwoUniqueNumbers(int arr[], int n) {
    int xorSum = 0;
    for (int i = 0; i < n; i++) {
        xorSum ^= arr[i];
    }

    // Find the rightmost set bit in xorSum
    int setBit = xorSum & ~(xorSum - 1);

    int num1 = 0, num2 = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] & setBit) {
            num1 ^= arr[i];
        } else {
            num2 ^= arr[i];
        }
    }

    cout << "The two unique numbers are: " << num1 << " and " << num2 << endl;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    findTwoUniqueNumbers(arr, n);

    return 0;
}