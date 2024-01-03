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
    int even,odd;
    even=odd=0;
    for(int i=0;i<n;i++){
        if(i%2==0) even+=arr[i];
        if(i%2!=0) odd+=arr[i];
    }
    int ans=even-odd;
    cout<<"The difference between the sum of elements at even indices to the sum of elements at odd indices is: "<<ans<<endl;

    return 0;
}