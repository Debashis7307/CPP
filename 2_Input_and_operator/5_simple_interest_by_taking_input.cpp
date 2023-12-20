#include<iostream>
using namespace std;
int main(){
    float p,r,t,si;
    cout<<"Enter the principul :";
    cin>>p;
    cout<<"Enter the rate :";
    cin>>r;
    cout<<"Enter the time :";
    cin>>t;
    si=(p*r*t)/100;
    cout<<"The simple interest is :"<<si<<endl;
    return 0;
}