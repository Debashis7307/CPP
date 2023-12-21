#include<iostream>
using namespace std;
int main(){
    float r,h;
    cout<<"Enter the redious :";
    cin>>r;
    cout<<"Enter the hight :";
    cin>>h;
    float v,pi;
    pi=3.14159;
    v=pi*r*r*h;
    cout<<"The  volume of the cylinder :"<<v<<endl;
    return 0;
}