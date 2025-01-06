// #include <iostream>
// using namespace std;

// int flipBits(int n) {
//     // Find the number of bits in the integer
//     int numBits = sizeof(n) * 8;
    
//     // Create a mask with all bits set to 1
//     int mask = (1 << numBits) - 1;
    
//     // XOR the number with the mask to flip all bits
//     int flip=n^mask;
//     return flip;
// }

// int main() {
//     int n;
//     cout << "Enter the number: ";
//     cin >> n;
//     cout << "Flipped bits: " << flipBits(n) << endl;
//     return 0;
// }

#include <iostream>
using namespace std;

int flipBits(int n) {
    // XOR the number with the bitwise NOT of 0 to flip all bits
    return ~n;
}

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << "Flipped bits: " << flipBits(n) << endl;
    return 0;
}