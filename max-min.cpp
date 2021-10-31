#include <iostream>
using namespace std;
int main()
{
  int n;
  cout << "enter n: ";
  cin >> n;
  int add;
  cout << "enter add: ";
  cin >> add;
  int min = add;
  int max = add;
  for (int i = 2; i <= n; i++)
  {
    cout << "enter add: ";
    cin >> add;
    if (min > add)
    {
      min = add;
    }
    else if (max < add)
    {
      max = add;
    }
  }
  cout << "max = " << max << endl;
  cout << "min = " << min;
  return 0;
}
