#include<iostream>
using namespace std;
void find(int x, int* y, int* z){
    *z=x%10;
    while(x>9){
        x/=10;
    }
    *y=x;
    return;
}
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    int first, last;
    int* f=&first;
    int* l=&last;
    find(n,f,l);
    cout<<"First digit : "<<first<<endl<<"last digit: "<<last;
    return 0;
}