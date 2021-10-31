#include <iostream>
using namespace std;
int main()
{
  int n = 10, start_i = 0, flag = 0, id, average, sum = 0;
  for (int i = 0; i < n; i++)
  {
    cout << "id: ";
    cin >> id;
    for (int j = 0; j < 8 && flag == 0; i++)
    {
      cout << "average in " << j + 1;
      cin >> average;
      if (average > 17)
      {
        start_i++;
        if (start_i > 5)
          flag = 1;
      }
      else
        start_i = 0;
    }
    if (start_i >= 5)
    {
      sum++;
    }
  }
  cout << "tedad taghdir: " << sum;
  return 0;
}