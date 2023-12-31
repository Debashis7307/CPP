#include<iostream>
using namespace std;
void intro(){
    cout<<"Hi Everyone"<<endl<<"I am Debashis"<<endl;
}
int main(){
    int n;
    cout<<"Enter a number:";
        cin>>n;
    for(int i=1;i<=n;i++){
        
        intro();
       
        if(n==0 ||n<0) break;
    }
    return 0;
}
