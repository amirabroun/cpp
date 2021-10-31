#include <iostream>
using namespace std;
int main()
{
  int n;
  cout << "how many member: ";
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    int shomarehesab, mojoodi, tedadanjam, mablagh, kode;
    cout << "shomarehesab: ";
    cin >> shomarehesab;
    cout << "mojoodi: ";
    cin >> mojoodi;
    cout << "tarakonesh: ";
    cin >> tedadanjam;
    for (int j = 1; j <= tedadanjam; j++)
    {
      cout << "kode: " << endl
           << "   (1)bardasht, (2)variz: ";
      cin >> kode;
      cout << "mablagh: ";
      cin >> mablagh;
      if (kode == 1)
      {
        mojoodi -= mablagh;
      }
      else if (kode == 2)
      {
        mojoodi += mablagh;
      }
      else
      {
        cout << "error kode;";
      }
    }
    cout << "\nsomare hesab : " << shomarehesab << "\nmojoodi : " << mojoodi << endl << "\nagain\n";
  }

  return 0;
}
