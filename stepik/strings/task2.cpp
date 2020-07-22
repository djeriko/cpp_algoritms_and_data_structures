#include <iostream>
#include <string>

using namespace std;

int main () {
  char c;
  cin >> c;
  if (c >= 'a' && c <= 'z') {
    char cBig = c - 'a' + 'A';
    cout << cBig;
  } else {
    cout << c;
  }
  return 0;
}