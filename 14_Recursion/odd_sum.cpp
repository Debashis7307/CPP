#include<iostream>
using namespace std;
int sum_of_odds(int a, int b){
  if(a>b) return 0;
  if(a%2!=0) return a + sum_of_odds(a+1, b);
  else return sum_of_odds(a+1, b);
}

int main(){
  int a, b;
  cout << "Enter two numbers (a and b) to find the sum of odd numbers between them: ";
  cin >> a >> b;
  if(a > b) {
    cout << "Invalid input. 'a' should be less than or equal to 'b'." << endl;
    return 1;
  }
  int result = sum_of_odds(a, b);
  cout << "The sum of odd numbers between " << a << " and " << b << " is: " << result << endl;
  return 0;
}