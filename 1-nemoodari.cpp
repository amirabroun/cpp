#include <iostream>
using namespace std;
int main()
{
  int n = 5, max = 0;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cout << "enter number: ";
    cin >> arr[i];
    if (arr[i] > max)
    {
      max = arr[i];
    }
  }
  int sum = 20 - max;
  for (int i = 0; i < n; i++)
  {
    arr[i] += sum;
  }
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << endl;
  }

  return 0;
}