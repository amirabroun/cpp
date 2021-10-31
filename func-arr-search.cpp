#include <iostream>
using namespace std;

int search(int[], int[], int, int);

int main()
{
    int n, x, place;
    cout << "enter n: ";
    cin >> n;
    cout << "enter x: ";
    cin >> x;
    int a[n], b[n];
    
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << "--enter number(a): ";
        cin >> a[i];
    }

    place = search(a, b, n, x);

    cout << "\n  tekrar dar: \n";
    for (int i = 0; i < place; i++)
    {
        cout << "   " << b[i] + 1 << endl;
    }

    return 0;
}

int search(int arr[], int arr2[], int n, int x)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            arr2[sum] = i;
            sum++;
        }
    }
    return sum;
}