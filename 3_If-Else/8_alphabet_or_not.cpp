#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a charecter :";
    cin>>ch;
    int n=(int)ch;
    if(n>=65 && n<=90 || n>=97 && n<=122){
        cout<<ch<<"  is a alphabet.";
    }
    else{
        cout<<ch<<"  is not a alphabet.";
    }
    return 0;
}