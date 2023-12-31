#include<iostream>
using namespace std;
void swap(int &a, int &b){  //pass by reference
    a=a+b;
    b=a-b;
    a=a-b;
 cout<<a<<" "<<b;
}
int main(){
    int x,y;
    cout<<"Enter the two number:";
    cin>>x>>y;
    cout<<"After swaping : ";
    swap(x,y);
    return 0;
}