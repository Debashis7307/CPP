#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter the row or column numbers(it should be square matrix):";
    cin>>m;
    int arr[m][m];
    cout<<"Enter the metrices: ";
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            if(i==m/2 || j == m/2) cout<<arr[i][j]<<" ";
            else cout<<"  ";
        }
        cout<<endl;
    }
    return 0;
}