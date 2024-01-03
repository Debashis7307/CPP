#include<iostream>
using namespace std;
int main() {
int n;
cout<<"Enter the size of array:";
cin>>n;
int arr[n];
cout<<"Enter elements:";
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int a=1;
bool flag=false;
for(int i=0;i<n;i++){
    if(arr[i]!=a){
        cout<<"Missing smalest positive is: "<<a<<endl;
        flag=true;
        break;
    }
    else a++;
}
if(flag==false) cout<<"Missing smalest positive is: "<<a<<endl;
 return 0;
}