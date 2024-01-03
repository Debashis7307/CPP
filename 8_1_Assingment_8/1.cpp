#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    cout<<"Enter the array: ";
    int arr[n];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int pro=1;
    for(int i=0;i<=n-1;i++){
    pro*=arr[i];
    }
    cout<<"The product of the element is: "<<pro;
    return 0;
}