#include <iostream>
#include <string>

using namespace std;

int main()
{
  string s;
  getline(cin, s);
  int countPoint = 0;
  string number = "";
  for (auto c : s)
  {
    // Check to number
    if ((c < '0' || c > '9') && c != '.')
    {
      cout << "NO";
      return 0;
    }
    // Count points and write number
    if (c == '.')
    {
      countPoint++;
      number = "";
      // if (number.find("00")) {
      //   cout << "NO";
      //   return 0;
      // }
    }
    else
    {
      number += c;
      // Check is number 01 or 001 exist
      if (number[0] == '0' && number.size() > 1) {
        cout << "NO";
        return 0;
      }
      // Check is number less then 256
      if (stoi(number) > 255)
      {
        cout << "NO";
        return 0;
      }
    }
  }

  // Check is last char is .
  if (s.back() == '.' || s.front() == '.') {
    cout << "NO";
    return 0;
  }

  // Check is .. exist
  if (s.find("..") < 15)
  {
    cout << "NO";
    return 0;
  }
  

  if (countPoint != 3)
    cout << "NO";
  else
    cout << "YES";

  return 0;
}