#include <iostream>
using namespace std;
int main()
{
    int n, adad;
    cout << "enter n: ";
    cin >> n;
    cout << "enter adad: ";
    cin >> adad;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cout << "enter number(a): ";
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] == adad)
        {
            a[i] = a[n - 1];
            break;
        }
    }
    for (int i = 0; i < n - 1; i++)
    {
        cout << a[i] << endl;
    }

    return 0;
}