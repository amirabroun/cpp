#include <iostream>
using namespace std;
int main()
{
    int n = 50;
    int adad[n], dif = 0, save;
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << "- enter number: ";
        cin >> adad[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        int j = i + 1;
        if (adad[i] > adad[j])
        {
            save = adad[i] - adad[j];
        }
        else
        {
            save = adad[j] - adad[i];
        }
        if (save > dif)
        {
            dif = save;
        }
    }

    cout << "The biggest difference" << dif;

    return 0;
}