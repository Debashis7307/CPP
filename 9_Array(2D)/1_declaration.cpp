#include<iostream>
using namespace std;
int main(){
    int arr[3][3]={{11,22,33},{44,55,66},{77,88,99}}; // declaration...
   for(int i=0;i<3;i++){  // i is for row number...
    for(int j=0;j<3;j++){ // j is for column number...
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
   }
    return 0;
}