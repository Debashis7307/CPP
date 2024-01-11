#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter the row of matrix:";
    cin>>m;
     int n;
    cout<<"Enter the column of matrix:";
    cin>>n;
    int arr[m][n];
    cout<<"Enter the elements:";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"The wave form of the matrix is:\n";
    for(int i=0;i<m;i++){
        if(i%2!=0){
            for(int j=0;j<n;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
        else{
            for(int j=n-1;j>=0;j--){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;

}