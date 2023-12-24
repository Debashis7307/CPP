#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter an integer :";
    cin>>n;
    if(n>=0){
        cout<<"The absolute value is :"<<n;
    }
    else{
        cout<<"The absolute value is :"<<(n*(-1));
    }
    return 0;
}