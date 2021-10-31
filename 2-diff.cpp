#include <iostream>
using namespace std;
int main()
{
  int n = 5, max = 0, andis;
  int arr[n], sum;
  for (int i = 0; i < n; i++)
  {
    cout << "enter number: ";
    cin >> arr[i];
  }
  for (int i = 0; i < (n - 1); i++)
  {
    sum = arr[i] - arr[i + 1];
    if (sum < 0)
      sum *= -1;
    if (sum > max)
    {
      andis = i + 1;
      max = sum;
    }
  }
  cout << max << endl;
  cout << andis << " to " << andis + 1;
  return 0;
}