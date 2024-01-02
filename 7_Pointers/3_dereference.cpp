#include<iostream>
using namespace std;
int main(){
    int x=505;
    int* p=&x;
    
    cout<<p<<endl<<*p<<endl;
    *p=101;
    cout<<*p<<endl;
    return 0;
}