#include<iostream>
using namespace std;
int main(){
    bool x;
    bool* p=&x;
    cout<<p<<endl;
    p++;
    cout<<p;
    return 0;
}