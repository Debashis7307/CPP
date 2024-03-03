#include <iostream>
#include <vector>

using namespace std;

// Function to multiply an array (representing a large number) by an integer
void multiply(vector<int>& result, int num) {
    int carry = 0;
    for (int i = 0; i < result.size(); ++i) {
        int product = result[i] * num + carry;
        result[i] = product % 10;
        carry = product / 10;
    }
    while (carry) {
        result.push_back(carry % 10);
        carry /= 10;
    }
}

// Function to calculate factorial
void factorial(int n) {
    vector<int> result; // Initialize result array with 1
    result.push_back(1);

    for (int i = 2; i <= n; ++i) {
        multiply(result, i);
    }

    // Print the result (in reverse order)
    cout << "Factorial of " << n << " is: ";
    for (int i = result.size() - 1; i >= 0; --i) {
        cout << result[i];
    }
    cout << endl;
}

int main() {
    int num;
    cout << "Enter a non-negative integer: ";
    cin >> num;
    factorial(num);
    return 0;
}
