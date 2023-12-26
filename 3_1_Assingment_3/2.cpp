#include<iostream>
using namespace std;
int main(){
    float r,a,c,pi;
    pi=3.14159;
    cout<<"Enter the radius of the circle:";
    cin>>r;
    a=pi*r*r;
    c=2*pi*r;
    if(a>c){
        cout<<" Area is greater than circumference.";
    }
    else{
        cout<<"Area is not greater than circumference.";
    }
    return 0;
}