#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter the size of the array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the element of the array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=0;
 cout<<"Give the terget element:";
 cin>>m;
 for(int i=0;i<n;i++){
    if(arr[i]>m) ans++;
 }
 cout<<"The numbers of strikly grater than elements are: "<<ans<<endl;
    return 0;
}