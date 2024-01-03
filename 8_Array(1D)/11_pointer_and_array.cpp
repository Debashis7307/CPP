#include<iostream>
using namespace std;
int main(){
    int arr[]={5,8,7,6,4,2,3};
    int* ptr=arr;
    cout<<ptr<<endl;//giving the address 
    cout<<&arr[0]<<endl;
    ptr[6]=5;
    for(int i=0;i<=6;i++){
        cout<<ptr[i]<<" ";
    }
    return 0;
}