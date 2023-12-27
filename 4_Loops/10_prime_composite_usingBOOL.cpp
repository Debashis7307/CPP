#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    bool valu=true;
    for(int i =2; i<=(n-1);i++){
        if(n%i==0){
            valu=false;
            break;
        }
    }
     if(n==0){
            cout<<"0 is neither prime nor composite.";
        }
       else if(n==1){
            cout<<"1 is neither prime nor composite.";
        }
        else if(valu==true){
            cout<<n<<" is a Prime Number.";
        }
        else if(valu==false){
            cout<<n<<" is a Composite Number.";
        }
    return 0;
}