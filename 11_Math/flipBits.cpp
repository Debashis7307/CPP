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
#include <bitset>
using namespace std;

string decimalToBinary(int n) {
    return bitset<8>(n).to_string();
}

int flipBits(int n) {
    return ~n;
}

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    string originalBinary = decimalToBinary(n);
    int flippedNumber = flipBits(n);
    string flippedBinary = decimalToBinary(flippedNumber);

    cout << "Original binary: " << originalBinary << endl;
    cout << "Flipped binary: " << flippedBinary << endl;
    cout << "Flipped number: " << flippedNumber << endl;

    return 0;
}