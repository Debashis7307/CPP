#include<iostream>  // leet-code :- 73
#include<vector>
using namespace std;

void setZeroes(vector<vector<int> >& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
         vector<int> row(m,0);
         vector<int> col(n,0);
        for(int i =0;i<m;i++){
            for(int j =0;j<n;j++){
                if(matrix[i][j]==0){
                    row[i]=1;col[j]=1;
                }
            }
        }
        for(int i =0;i<m;i++){
            for(int j =0;j<n;j++){
                if(row[i] || col[j]) matrix[i][j]=0;
                }
            }
            cout<<endl;
         for(int i =0;i<m;i++){
            for(int j =0;j<n;j++){
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }
    }

int main(){
    int m;
    cout<<"Enter the row numbers:";
    cin>>m;
    int n;
    cout<<"Enter the columns numbers:";
    cin>>n;
    vector<vector<int> > ans(m,vector<int>(n));
    cout<<"Enter the metrix: ";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>ans[i][j];
        }
    }
    setZeroes(ans);
    return 0;
}