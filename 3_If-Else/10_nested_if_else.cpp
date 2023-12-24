#include<iostream>
using namespace std;
int main(){
    int x,y,z;
    cout<<"Enter the first number :";
    cin>>x;
    cout<<"Enter the second number :";
    cin>>y;
    cout<<"Enter the third number :";
    cin>>z;
    if(x>y){
        if(x>z){
            cout<<"The greatest number is:"<<x;
        }
       else{ cout<<"The greatest number is:"<<z;} 
    }
    else if(y>x){
        if(y>z){
             cout<<"The greatest number is:"<<y;
        }
        else{ cout<<"The greatest number is:"<<z;} 
    }
    return 0;
}