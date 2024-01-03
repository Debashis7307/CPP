#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr1[] = { 1, 3, 5, 7 };
    int arr2[] = { 2, 4, 6, 8 };
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);

    int arr3[n + m];
    merge(arr1, arr1 + n, arr2, arr2 + m, arr3);

    cout << "Array after merging" << endl;
    for (int i = 0; i < n + m; i++)
        cout << arr3[i] << " ";

    return 0;
}