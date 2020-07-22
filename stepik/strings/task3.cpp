#include <iostream>
#include <string>

using namespace std;

int main () {
  char c;
  cin >> c;
  if (c >= 'a' && c <= 'z')  {
    char bigC = c - 'a' + 'A';
    cout << bigC; 
  } else if (c >= 'A' && c <= 'Z') {
    char smallC = c - 'A' + 'a';
    cout << smallC;
  } else {
    cout << c;
  }

  return 0;
}