#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the first side:";
    cin>>a;
    cout<<"Enter the second side:";
    cin>>b;
    cout<<"Enter the third side:";
    cin>>c;
    if(a==b && b==c){
        cout<<"This is an Equilateral triangle.";
    }
    else if((a==b && b!=c)||(a==c && c!=b)||(b==c && c!=a)){
        cout<<"This is an Isosceles triangle.";
    }
    else{
        cout<<"This is an Scalene triangle.";
    }
    return 0;
}