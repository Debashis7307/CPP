#include<iostream>
using namespace std;

int maze(int sr,int sc, int er, int ec){
  if(sr >er || sc > ec) return 0; // Out of bounds
  if(sr == er && sc == ec) return 1; // Reached the end point
  // Move right or down
  int right = maze(sr, sc + 1, er, ec); // Move right
  int down = maze(sr + 1, sc, er, ec); // Move down
  int total = right + down; // Total paths from current position
  return total;
}

void maze_path(int sr,int sc, int er, int ec,string s){
  if(sr >er || sc > ec) return; // Out of bounds
  if(sr == er && sc == ec){
    cout << s << endl; // Print the path when reaching the end point
    return;
  } // Reached the end point
  maze_path(sr,sc+1,er,ec,s+"R"); // Move right
  maze_path(sr+1,sc,er,ec,s+"D"); // Move down
}

int maze2( int er, int ec){
  if(er < 0 || ec <0) return 0; // Out of bounds
  if(er==1 && ec==1) return 1; // Reached the end point
  // Move right or down
  int right = maze2(er, ec-1); // Move right
  int down = maze2(er-1, ec); // Move down
  int total = right + down; // Total paths from current position
  return total;
}

int main(){
  int er, ec;
  cout << "Enter the end row and column: ";
  cin >> er >> ec;
  int total_paths = maze(1, 1, er, ec); // Start from (0,0)
  int total_paths2 = maze2(er, ec);
  cout << "Total paths from (0,0) to (" << er << "," << ec << "): " << total_paths2 << endl;
  cout << "All paths from (0,0) to (" << er << "," << ec << "):" << endl;
  maze_path(1, 1, er, ec, ""); // Start from (0,0) with an empty path string
  return 0;
}