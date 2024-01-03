#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array:"<<endl;
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
   int x;
   cout<<"Enter the number :";
   cin>>x;
   // search
   // cheah mark
   int count=0;
    for(int i=0;i<=n-1;i++){
       if(arr[i]>x) count++;
    }
    cout<<"The numbers of element which are greater than "<<x<<" is: "<<count;
    return 0;
}