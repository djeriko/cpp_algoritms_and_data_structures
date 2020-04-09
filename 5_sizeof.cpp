#include <iostream>

int main()
{
  using namespace std;
  
  struct t_Pair
  {
    int a;
    int b;
  };
  
  bool x;  
  int y;
  long long int z;
  float a;
  double b;
  t_Pair p;

  cout << sizeof(x) << '\n';
  cout << sizeof(int) << '\n';
  cout << sizeof(z) << endl;
  cout << sizeof(a) << endl;
  cout << sizeof(b) << endl;
  cout << sizeof(p) << endl;

  cout << sizeof(&x) << endl;
  cout << sizeof(&y) << endl;
  cout << sizeof(&z) << endl;
  cout << sizeof(&a) << endl;
  cout << sizeof(&b) << endl;
  cout << sizeof(&p) << endl;

  return 0; 
}
