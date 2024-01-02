#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the first number:";
    cin>>a;
    cout<<"Enter the second number;";
    cin>>b;
    int* a1=&a;
    int* b1=&b;
    cout<<"Product of the two numbers is: "<<(*a1)*(*b1);
    return 0;
}