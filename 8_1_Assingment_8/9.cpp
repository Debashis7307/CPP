#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the element of the array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Is the array sorted?"<<endl;
 for(int i=1;i<=n;i++){
    if(arr[i-1]>arr[i]){
        cout<<"No"<<endl;
        return 0;
    }
    
 }
 cout<<"Yes"<<endl;
    return 0;
}