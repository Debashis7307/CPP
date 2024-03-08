#include<iostream>
#include<vector>
using namespace std;


int matrixScore(vector<vector<int>>& grid) {
      int row = grid.size();  
      int col = grid[0].size();  
      //converting all first columns elements into one
      for(int i=0;i<row;i++){
          if(grid[i][0]==0){
              for(int j=0;j<col;j++){
                  if(grid[i][j]==0) grid[i][j]=1;
                  else grid[i][j]=0;
              }
          }
      }
      //check if no 0's > no 1's
      for(int j = 0;j<col;j++){
          int no0 =0;
          int no1 =0;
        for(int i = 0;i<row;i++){
            if(grid[i][j]==0) no0++;
            else no1++;
        }
        if(no0>no1){
           for(int i=0;i<row;i++){
                  if(grid[i][j]==0) grid[i][j]=1;
                  else grid[i][j]=0;
              } 
        }
      }
      //calculating the sum from binary numbers
      int sum =0;
      for(int i =0;i<row;i++){
        int ind =1;
        for(int j =col-1;j>=0;j--){
            sum += grid[i][j]*ind;
            ind*=2; 
        } 
       }
     return sum;
    }

int main(){
  int m,n;
  cin>>m;
  cin>>n;
  vector<vector<int> > grid(m,vector<int> (n));
  for(int i= 0;i<m;i++){
    for(int j =0;j<n;j++){
      cin>>grid[i][j];
    }
  }
  cout<<matrixScore(grid);
  return 0;
}