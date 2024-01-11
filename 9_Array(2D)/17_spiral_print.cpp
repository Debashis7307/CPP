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
    cout<<"the spiral form is:\n";
   int minr=0;int minc=0;
   int maxr=m-1;int maxc=n-1;
   while(minr<=maxr && minc<=maxc){
    //right------->
    for(int j=minc;j<=maxc;j++){
        cout<<arr[minr][j]<<" ";
    }
    minr++;
    if(minr>maxr && minc>maxc) break;
    //down.....
    for(int i=minr;i<=maxr;i++){
        cout<<arr[i][maxc]<<" ";
    }
    maxc--;
     if(minr>maxr && minc>maxc) break;
    //left.....
    for(int j=maxc;j>=minc;j--){
        cout<<arr[maxr][j]<<" ";
    }
    maxr--;
     if(minr>maxr && minc>maxc) break;
    //up.....
     for(int i=maxr;i>=minr;i--){
        cout<<arr[i][minc]<<" ";
    }
    minc++;
   }
    return 0;

}