#include <iostream>
using namespace std;
int main() {
    char c1, c2;
    int diff;
    cout << "Enter two characters: ";
    cin >> c1 >> c2;
    diff = c1 - c2;
    if(diff<0)diff=diff*(-1);
    cout << "The difference between ASCII values of " << c1 << " and " << c2 << " is " << diff;
    return 0;
}