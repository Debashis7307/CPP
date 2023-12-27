#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"ENTER A NUMBER:";
    cin>>n;
    int lastdigit;
    while(n>0){
        lastdigit=n%10;
        cout<<lastdigit;
        n/=10;
    }
    return 0;
}