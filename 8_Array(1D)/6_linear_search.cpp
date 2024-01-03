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
   cout<<"Enter the number u want to search:";
   cin>>x;
   // search
   // cheah mark
   bool flag=false;
    for(int i=0;i<=n-1;i++){
       if(arr[i]==x) flag=true;
    }
    if(flag==true) cout<<"The element is present.";
    else cout<<"The element is not present.";
    return 0;
}