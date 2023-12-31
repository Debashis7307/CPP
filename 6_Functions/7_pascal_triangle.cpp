#include<iostream>
using namespace std;
int fact(int x){
    int fact=1;
    for(int i=2;i<=x;i++){
        fact*=i;
    }
    return fact;
}
    int combination(int n, int r){
        int com=fact (n)/(fact(r)*fact(n-r));
        return com;
    }

int main(){
    int n;
    cout<<"ENTER A NUMBER:";
    cin>>n;
  for(int i=0;i<=n;i++){
    for(int k=0;k<=n-i;k++){
        cout<<" ";
    }
        for(int j=0;j<=i;j++){
            cout<<combination(i,j)<<" ";  //icj
        }
        cout<<endl;
    }

}