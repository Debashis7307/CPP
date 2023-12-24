#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number :";
    cin>>n;
    if(n%5==0){
        cout<<"Yes, divisible by 5.";
    }
    else{
        cout<<"No, not divisible by 5.";
    }
    return 0;
}