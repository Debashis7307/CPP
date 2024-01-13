#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the size of the array";
    cin>>x;
    int arr[x];
    cout<<"Enter the elements :";
    for(int i=0;i<x;i++){
        cin>>arr[i];
    }
    bool check = false;
    for(int i=1;i<=x;i++){
        if(arr[i-1]<arr[i]){
          check = true; 
        }
    }
    if(check==true){
        cout<<"Dammm! The given array is sorted";
    }
      else{
            cout<<"The given array is not shorted ):";
        }
    return 0;
}