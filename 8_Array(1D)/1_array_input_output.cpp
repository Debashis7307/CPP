#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the number:";
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    cout<<"The array is:"<<endl;
    for(int j=0;j<=n-1;j++){
        cout<<arr[j]<<" ";
    }
    return 0;
}