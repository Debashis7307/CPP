#include <iostream>
using namespace std;
int main() {
int n;
cout<<"Enter the size :";
cin>>n;
int arr[n];
cout<<"Enter the elements:";
for(int i=0;i<n;i++){
    cin>>arr[i];
}
for(int i=0;i<n;i++){
    int count=0;
    for(int j=0;j<n;j++){
        if(i!=j && arr[i]==arr[j]){
            count++;
        }
    }
    if(count==0) {cout<<arr[i]<<" is the unique element.\n"; break;}
}
 return 0;
}