#include<iostream>
using namespace std;
int main(){
    int l,b,a,p;
    cout<<"Enter the length of the rectangle:";
    cin>>l;
    cout<<"Enter the breadth of the rectangle:";
    cin>>b;
    a=(l*b);
    p=2*(l+b);
    if(a>p){
        cout<<"Area is greater than perimeter";
    }
    else{
        cout<<"Area is not greater than perimeter";
    }
    return 0;
}