#include<iostream>
using namespace std;
int main(){
    int arr[]={1,5,3,2,4,87,54,1,6,4,6,4,54,4,51};
    int size= sizeof(arr)/sizeof(arr[0]);
    cout<<"The size of the array is: "<<size;
    return 0;
}