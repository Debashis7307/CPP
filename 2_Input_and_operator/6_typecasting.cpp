#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a upper letter :";
    cin>>ch;
    int x;
    x=(int)ch;
    cout<<"The position of the letter is :"<<x-64<<"th";
    return 0;
}