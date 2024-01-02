#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter two numbers:";
    cin>>x>>y;
    int* p=&x;
    int* p1=&y;
    cout<<"The sum is: "<<*p+*p1<<endl;
    return 0;
}