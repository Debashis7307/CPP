#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the number of elements: ";
    cin >> n;
    int a[n];
    int ans = 0;
    cout<<"Enter the elements: ";
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        ans ^= a[i];
    }
    cout<<"The unique element is: ";
    cout << ans << endl;
    return 0;
}