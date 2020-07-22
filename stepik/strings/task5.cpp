#include <iostream>
#include <string>

using namespace std;

int main()
{
  string s;
  getline(cin, s);
  int lineSize = s.size();
  for (int i = 0; i < lineSize; i++) 
  {
    if (s[i] != s[lineSize - i - 1])
    {
      cout << "no";
      return 0;
    }
  }
  cout << "yes";

  return 0;
}