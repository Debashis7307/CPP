#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter the size of the array";
    cin>>m;
    int arr[m];
    int count = 0;
    cout<<"Enter the elements of the array:- \n";
    for(int i = 0;i<m;i++){
        cin>>arr[i];
        if(arr[i]>5){
            count++;
        }
    }
    cout<<"Total number of elements greater than 5 is : "<<count;
return 0;
}