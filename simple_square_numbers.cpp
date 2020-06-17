#include <math.h>
#include <iostream>

using namespace std;

int main()
{
  long n = 10;
  cout << "Enter number = " << endl;
  cin >> n;
  long N = 1;

  for (int i = 0; i < 100000; i++) {
    long perfectSquare = pow(N + i, 2);
    // cout << perfectSquare << endl;
    
    if (sqrt(n + perfectSquare) == (long)(sqrt(n + perfectSquare))) {
      cout << "Perfect square is " <<perfectSquare << endl; 
      return 0;
    }
  }
  
  cout << "There is no perfect square" << endl;
  return 0;
}