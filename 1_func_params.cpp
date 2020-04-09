#include <iostream>

void increment(int a) // При вызове появится временная переменная
{
  std::cout << a << '\n'; 
  a = a + 1;
  std::cout << a << '\n';
} // При выходе из функции переменная уничтожается

int main()
{
  using namespace std;
  int b = 3;

  increment(b);
  cout << b << endl;
  return 0;
}
