#include<iostream>
using namespace std;
int main(){
    
    int n;
    cout<<"Enter the numbers of row/column:";
    cin>>n;
    int arr[n][n];
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }      
   cout<<"The squere matrix is:\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }  
      //transform this same matrix to its transpose....
      for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            // swap i,j and j,i.....
         int tem=arr[i][j];
         arr[i][j]=arr[j][i];
         arr[j][i]=tem;
        }
    }


    cout<<"The transpose is:\n";
   for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}