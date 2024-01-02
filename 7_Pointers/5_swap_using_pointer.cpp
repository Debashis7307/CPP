#include<iostream>
using namespace std;
void swap(int* a, int* b){
    int temp=*a;
    *a=*b;
    *b=temp;
    return;
}
int main(){
    int x,y;
    cout<<"Enter two number:";
    cin>>x>>y;
    swap(&x,&y);
    cout<<"After swaping:  "<<x<<" "<<y;
    return 0;
}