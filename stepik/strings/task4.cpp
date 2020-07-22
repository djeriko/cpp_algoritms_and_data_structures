#include <iostream>
#include <string>

using namespace std;

int main()
{
  string s;
  getline(cin, s);
  int counter = 1;
  int index = 0;
  for (auto c : s)
  {
    if (c == ' ') counter++;
  }
  cout << counter;
  return 0;
}