#include <iostream>
using namespace std;
int main()
{
    int n = 1000, start_j = 0, id, average[7], sum = 0;
    for (int i = 0; i < n; i++)
    {
        int flag = 0;
        cout << endl << "daneshjooye shomare " << i + 1 << ": " << endl;
        for (int j = 0; j < 8; j++)
        {
            cout << "average in term(" << j + 1 << "): ";
            cin >> average[j];
            if (average[j] > 17)
            {
                start_j++;
                if (start_j >= 5)
                {
                    flag = 1;
                }
            }
            else
            {
                start_j = 0;
            }
        }
        if (flag == 1)
        {
            sum++;
        }
    }
    cout << "tedad taghdir: " << sum;
    return 0;
}