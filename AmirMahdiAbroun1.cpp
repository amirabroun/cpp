#include <iostream>
using namespace std;
int main()
{
    int sal[70], sum = 0;
    for (int i = 0; i < 6; i++)
    {
        cout << i + 1 << "- sal enteshar: ";
        cin >> sal[i];
        if (sal[i] > 1385 && sal[i] < 1389)
        {
            sum++;
        }
    }

    cout << "tedad ketab beyne 1385, 1389: " << sum;

    return 0;
}