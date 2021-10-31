#include <iostream>
using namespace std;
int main()
{
  int add, a, remain, varoon = 0;
  cout << "enter add: ";
  cin >> add;
  if (add > a)
  {
    a = add;
  }
  else
  {
    a = -(add);
  }
  while (a > 0)
  {
    remain = a % 10;
    a /= 10;
    varoon = (varoon * 10) + remain;
  }
  cout << "add = " << add << endl;
  cout << "varoon = " << varoon;
  return 0;
}
