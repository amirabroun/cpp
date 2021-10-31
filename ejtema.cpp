#include <iostream>
using namespace std;
int main()
{
    int n, m, s;
    cout << "enter n: ";
    cin >> n;
    int sum = n;
    cout << "enter m: ";
    cin >> m;
    int c[n + m], a[n], b[m];
    for (int i = 0; i < n; i++)
    {
        cout << "enter number(a): ";
        cin >> a[i];
        c[i] = a[i];
    }
    for (int i = 0; i < m; i++)
    {
        int flag = 1;
        cout << "enter number(b): ";
        cin >> b[i];
        for (int j = 0; j < n; j++)
        {
            if (b[i] == c[j])
            {
                flag = 0;
            }
        }
        if (flag == 1)
        {
            c[sum] = b[i];
            sum++;
        }
    }
    cout << "c value: " << endl;
    for (int i = 0; i < sum; i++)
    {
        cout << c[i] << endl;
    }

    return 0;
}
