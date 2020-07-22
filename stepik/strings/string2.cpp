#include <iostream>
#include <string>
using namespace std;

int main () {
  string s;
  getline(cin, s); 
  int first = s.find_first_of("?!.");
  int second = s.find_first_of("?!.", first + 1);
  cout << s.substr(first + 2, second - first - 2);
  return 0;
}