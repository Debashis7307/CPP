#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    int count =0;
    int a=n;
    while(n>0){
        n/=10;
        count++;
    }
    if(a==0) cout<<"The number is 1 digit.";
    else cout<<"The number is "<<count<<" digit.";
    return 0;
}