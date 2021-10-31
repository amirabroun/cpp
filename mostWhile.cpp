#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter n: ";
    cin >> n;
    int a[n], b[n] = {0};

    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << "--enter number(a): ";
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i] == a[j])
            {
                b[i]++;
            }
        }
    }

    int big = 0;
    for (int i = 0; i < n; i++)
    {
        if (b[i] >= big)
        {
            big = b[i];
        }
    }

    int Number;
    for (int i = 0; i < n; i++)
    {
        if (big == b[i])
        {
            Number = a[i];
        }
    }

    cout << Number;
    return 0;
}
