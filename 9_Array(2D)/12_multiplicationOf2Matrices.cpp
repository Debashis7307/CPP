#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter the row of 1st matrix:";
    cin>>m;
     int n;
    cout<<"Enter the column of 1st matrix:";
    cin>>n;
     int p;
    cout<<"Enter the row of 2nd matrix:";
    cin>>p;
     int q;
    cout<<"Enter the column of 2nd matrix:";
    cin>>q;
    if(n==p){
      int arr1[m][n];
      int arr2[p][q];
      cout<<"Enter the elements of the 1st matrix:\n";
      for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr1[i][j];
        }
      }
      cout<<"Enter the elements of the 2nd matrix:\n";
      for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            cin>>arr2[i][j];
        }
      }
      int ans[m][q];
      for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            ans[i][j]=0;
            for(int k=0;k<n;k++){
                ans[i][j]+=arr1[i][k]*arr2[k][j];
            }
        }
      }
      cout<<"The ans is:\n";
 
      for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
           cout<<ans[i][j]<<" ";
        }
        cout<<endl;
      }

    }
    else{
        cout<<"The given 2 matrices can not be multiplided.";
    }
    return 0;

}