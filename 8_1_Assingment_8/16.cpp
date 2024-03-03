#include <iostream>

using namespace std;

int firstNonRepeating(int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        bool isRepeated = false;
        for (int j = 0; j < n; ++j) {
            if (i != j && arr[i] == arr[j]) {
                isRepeated = true;
                break;
            }
        }
        if (!isRepeated) {
            return arr[i];
        }
    }
    return -1; // If no non-repeating element found
}

int main() {
    int arr[] = {9, 4, 9, 6, 7, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = firstNonRepeating(arr, n);
    if (result != -1) {
        cout << "First non-repeating element: " << result << endl;
    } else {
        cout << "No non-repeating element found." << endl;
    }

    return 0;
}
