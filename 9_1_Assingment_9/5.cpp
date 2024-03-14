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
    cout<<"Enter the metrices: ";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int index =-1;
    int max = INT_MIN;
    for(int i=0;i<m;i++){
      int sum =0;
        for(int j=0;j<n;j++){
         sum += arr[i][j];   
        }
        if(sum>max){
          max =sum;
        index =i;
        }
    }
    cout<<"The maximum sum of elements is in the row no : "<<index+1;
  return 0;
}