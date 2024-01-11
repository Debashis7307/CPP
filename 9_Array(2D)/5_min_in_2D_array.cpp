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
    int min =INT_MAX;
    
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(min>arr[i][j]) min=arr[i][j];
        }
    }
    cout<<"And the min element in the 2D array is:\n"<<min;
    return 0;
}