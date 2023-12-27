#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    for(int i=2;i<=(n-1);i++){
        if(n%i==0){   //if divisable then i is a factor of n;
            cout<<n<<" is a Composite Number."<<endl;
            break;
        }
        else{
            cout<<n<<" is a Prime number.";
            break;
        }
    }
     if(n==1){
            cout<<"1 is neither prime nor composite.";
        }
        if(n==2){
            cout<<"2 is Prime number.";
        }
        else if(n==0){
            cout<<"0 is neither prime nor composite.";
        }
    return 0;
}