#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter the row numbers:";
    cin>>m;
    int n;
    cout<<"Enter the columns numbers:";
    cin>>n;
    int arr[m][n];
    cout<<"Enter the elements: ";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"The transpose is:\n";
    for(int j=0;j<n;j++){
        for(int i=0;i<m;i++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
   
    return 0;
}