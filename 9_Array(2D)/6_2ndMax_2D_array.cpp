#include<iostream>
#include<climits>
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
    int max =INT_MIN;
    
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(max<arr[i][j]) max=arr[i][j];
        }
    }
    int max2=INT_MIN;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(max2<arr[i][j] && arr[i][j]!=max) max2=arr[i][j];
        }
    }
    cout<<"And the 2nd max element in the 2D array is:\n"<<max2;
    return 0;
}