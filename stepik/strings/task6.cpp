#include <iostream>
#include <string>

using namespace std;

int main () {
  string s;
  getline(cin, s);
  int index = 0;
  string first = "";
  string second =  "";
  for (auto c : s){
    if (c == ' ') {
      if (second.size() > first.size()) first = second;
      second = "";
    } else {
      second += c;
    }
  }
  cout << first;
  return 0;
}