#include <iostream>
#include <string>
using namespace std;



//Brian Kernighan's Algorithm->

int maxPowerOf2(int n) {
  int temp = n;
    int count = 0;
    while (n != 0) {
       temp=n;
      n = n & (n - 1);
    }
    return temp;
}

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << "Max power of 2 is : " << maxPowerOf2(n) << endl;
    return 0;
}