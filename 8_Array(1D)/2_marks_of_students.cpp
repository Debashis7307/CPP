#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the numbers of students:";
    cin>>n;
    int marks[n];
    cout<<"Enter their marks:";
    for(int i=0;i<=n-1;i++){
        cin>>marks[i];
    }
    cout<<"The index of fail students:"<<endl;  // fail means marks<35;
    for(int i=0;i<=n-1;i++){
        if(marks[i]<35){
            cout<<i<<" ";
        }
    }
    return 0;
}