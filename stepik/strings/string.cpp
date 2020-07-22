#include <iostream>
#include <string>
using namespace std;

int main()
{
  int n;
  cin >> n;
  string s;
  getline(cin, s);
  for (int i = 0; i < n; i++)
  { // перевод регистра букв
    getline(cin, s);
    string s2 = "";
    for (auto c : s)
    {
      if (c >= 'a' && c <= 'z')
      {
        int al_num = c - 'a';
        s2 += 'A' + al_num;
      }
      else
      {
        s2 += c;
      }
    }

    if (s2.find('RKPT') != -1)
    { // поиск подходящей строки
      for (auto c : s2)
      {
        if (c >= '0' && c <= '9')
        {
          cout << c;
        }
      }
    }
  }
  char c;
  getline(cin, s);
  return 0;
}