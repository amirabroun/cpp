#include <iostream>
using namespace std;
int main()
{
  int n = 5;
  int number;
  int Pcount = 0, Ncount = 0;
  int postive[n], negetive[n];
  for (int i = 0; i < n; i++)
  {
    cout << "enter number: ";
    cin >> number;
    if (number > 0)
    {
      postive[Pcount] = number;
      Pcount++;
    }
    else
    {
      negetive[Ncount] = number;
      Ncount++;
    }
  }
  for (int i = 0; i < Pcount; i++)
  {
    cout << postive[i] << endl;
  }
  cout << "dshufusdfdafas" << endl;
  for (int i = 0; i < Ncount; i++)
  {
    cout << negetive[i] << endl;
  }

  return 0;
}