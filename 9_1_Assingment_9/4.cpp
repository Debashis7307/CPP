// Recursive approach to check if an
// Array is sorted or not
#include <bits/stdc++.h>
using namespace std;
 
// Function that returns 0 if a pair
// is found unsorted
int arraySortedOrNot(int arr[], int n)
{
    // Array has one or no element or the
    // rest are already checked and approved.
    if (n == 1 || n == 0)
        return 1;
 
    // Unsorted pair found (Equal values allowed)
    if (arr[n - 1] < arr[n - 2])
        return 0;
 
    // Last pair was sorted
    // Keep on checking
    return arraySortedOrNot(arr, n - 1);
}
 
// Driver code
int main(){
    int x;
    cout<<"Enter the size of the array";
    cin>>x;
    int arr[x];
    cout<<"Enter the elements :";
    for(int i=0;i<x;i++){
        cin>>arr[i];
    }
    if (arraySortedOrNot(arr, x))
        cout << "Dammm! The given array is sorted\n";
    else
        cout << "No, The given array is not shorted ):\n";
    return 0;
}