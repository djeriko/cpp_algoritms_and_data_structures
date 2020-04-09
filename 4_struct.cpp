#include <iostream>

struct t_Pair 
{
  int a;
  int b;
};

void modify_pair(t_Pair *p)
{
  p->a += 1;
  (*p).b += 10;
}

int main()
{
  t_Pair x;
  std::cin >> x.a >> x.b;

  t_Pair y;
  y = x;

  modify_pair(&x);

  std::cout << x.a << ' ' << x.b << '\n';
  std::cout << y.a << ' ' << y.b << '\n';

  return 0;
}
