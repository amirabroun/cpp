#include <iostream>
using namespace std;
int main()
{
    int n, adad, flag = 0;
    cout << "enter n: ";
    cin >> n;
    cout << "enter adad: ";
    cin >> adad;
    int a[n + 1];
    for (int i = 0; i < n; i++)
    {
        cout << "enter number(a): ";
        cin >> a[i];
    }
    for (int i = n; i >= 0; i--)
    {
        if (a[i] > adad)
        {
            a[i + 1] = a[i];
        }
        else
        {
            a[i] = adad;
            break;
        }
    }
    for (int i = 0; i < n - 1; i++)
    {
        cout << a[i] << endl;
    }

    return 0;
}