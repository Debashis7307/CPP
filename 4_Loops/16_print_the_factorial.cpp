#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"ENTER A NUMBER:";
    cin>>n;
    int facto=1;
    for(int i=1;i<=n;i++){
        facto*=i;
    }
    cout<<"The factorial of "<<n<<" is "<<facto<<endl;
    return 0;
}