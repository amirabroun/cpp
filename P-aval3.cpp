#include <iostream>
using namespace std;
int main()
{
  for (int j = 2; j < 1000; j++)
  {
    int flag = 1;
    for (int i = 2; i < j && flag == 1; i++)
    {
      if (j % i == 0)
      {
        flag = 0;
      }
    }
    if (flag == 1)
    {
      cout << j << endl;
    }
  }

  return 0;
}