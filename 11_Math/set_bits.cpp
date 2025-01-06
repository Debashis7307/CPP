#include <iostream>
#include <string>
using namespace std;

string desimal_to_binary(int num) {
    string binary = "";
    while (num > 0) {
        if (num % 2 == 0) {
            binary += '0';
        } else {
            binary += '1';
        }
        num >>= 1;  // Corrected line: num = num / 2;
    }
    return binary;
}

int setBits(int n) { // Complete the function
   
    // in built function for c++  -> return __builtin_popcount(n);
   
    string sh = desimal_to_binary(n);
    int count = 0;
    for (int i = 0; i < sh.length(); i++) {
        if (sh[i] == '1') {
            count++;
        }
    }
    return count;
}

//Brian Kernighan's Algorithm->

int setBits2(int n) {
    int count = 0;
    while (n > 0) {
        n = n & (n - 1);
        count++;
    }
    return count;
}

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << "Number of set bits: " << setBits(n) << endl;
    cout << "Number of set bits: " << setBits2(n) << endl;
    return 0;
}
// Time Complexity: O(log(n))
// Space Complexity: O(1)
