#include<iostream>
#include<climits>
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
    int g1,g2,g3;
    g1=arr[0];
    g2=INT_MIN;
     g3=INT_MIN;
     for(int i=0;i<n;i++){
        if(arr[i]>g1) g1=arr[i];
     }
     for(int i=0;i<n;i++){
        if(arr[i]>g2 && arr[i]!=g1) g2=arr[i];
     }
     for(int i=0;i<n;i++){
        if(arr[i]>g3 && arr[i]!=g1 && arr[i]!=g2) g3=arr[i];
     }
     cout<<"The largest three elements in the array are: "<<g1<<","<<g2<<","<<g3<<endl;
    return 0;
}