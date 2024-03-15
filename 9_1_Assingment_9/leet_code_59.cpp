#include <iostream> // leet code - 59
#include <vector>
using namespace std;

vector<vector<int>> generateMatrix(int n) {
        int count=1;
        int total=n*n;
        vector<vector<int>>matrix(n,vector<int>(n));

        int startingrow=0;
        int startingcol=0;
        int endingrow=n-1;
        int endingcol=n-1;

        int k=1;

        while(count<=total)
        {
            for(int i=startingcol;count<=total && i<=endingcol;i++)
            {
                matrix[startingrow][i]=count;
                count++;
            }
            startingrow++;

            for(int i=startingrow;count<=total && i<=endingrow;i++)
            {
                matrix[i][endingcol]=count;
                count++;
            }
            endingcol--;

            for(int i=endingcol;count<=total && i>=startingcol;i--)
            {
                matrix[endingrow][i]=count;
                count++;
            }
            endingrow--;

            for(int i=endingrow;count<=total && i>=startingrow;i--)
            {
                matrix[i][startingcol]=count;
                count++;
            }
            startingcol++;

        }
        // printing the spril matrix
  for (int i= 0;i<n;i++){
    for(int j=0;j<n;j++) {
        cout<<matrix[i][j]<<" ";
    }
    cout<<endl;
  }
    }

int main()
{
  int n;
  cout << "Enter the integer no : ";
  cin >> n;

 vector<vector<int> > v(n,vector<int>(n));
 generateMatrix(n);
  return 0;
}