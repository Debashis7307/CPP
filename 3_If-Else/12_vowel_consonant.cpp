#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a character:";
    cin>>ch;
    int n=(int)ch;
    if(n>=65 && n<=91 || n>=97 && n<=123){
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
            cout<<"The character is vowel.";

        }
        else{
            cout<<"The character is consonant.";
        }
    }
    return 0;
}