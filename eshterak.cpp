#include <iostream>
using namespace std;
int main()
{
    int n, m, sum = 0;
    cout << "enter n: ";
    cin >> n;
    cout << "enter m: ";
    cin >> m;
    int c[n], a[n], b[m];
    for (int i = 0; i < n; i++)
    {
        cout << "enter number(a): ";
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cout << "enter number(b): ";
        cin >> b[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i] == b[j])
            {
                c[sum] = b[j];
                sum++;
            }
        }
    }
    for (int i = 0; i < sum; i++)
    {
        cout << "c value: " << c[i] << endl;
    }

    return 0;
}