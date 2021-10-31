#include <iostream>
using namespace std;
int main()
{
  int fsum = 0, fcount = 0, fave, msum = 0, mcount = 0, mave, totalAverage;
  char code;
  int avarage;
  int n;
  cout << "enter n: ";
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cout << "enter code f/m: ";
    cin >> code;
    cout << "enter avarage: ";
    cin >> avarage;
    if (code == 'f')
    {
      fcount++;
      fsum += avarage;
    }
    else if (code == 'm')
    {
      mcount++;
      msum += avarage;
    }
    else
    {
      i--;
    }
  }
  if (fcount > 0)
  {
    fave = fsum / fcount;
  }
  if (mcount > 0)
  {
    mave = msum / mcount;
  }
  cout << "f: " << fave << endl;
  cout << "m: " << mave;
  totalAverage = (fave + mave) / n;
  return 0;
}
