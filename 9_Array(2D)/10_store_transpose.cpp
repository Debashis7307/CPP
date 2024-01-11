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
    }      // storing transpose matrix .....
    int tran[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            tran[i][j]=arr[j][i];
        }
    }       // printing transpose matrix....
    cout<<"The transpose is:\n";
   for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<tran[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}