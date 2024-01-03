#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array:";
    cin>>n;
    cout<<"Enter the element of the array:";
    int arr[n];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int max= arr[0];
    for(int i=1;i<=n-1;i++){
        if(max>arr[i]) max=arr[i];
    }
    cout<<"The minimum element is: "<<max;
    return 0;
}