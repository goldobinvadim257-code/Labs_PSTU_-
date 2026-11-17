#include <iostream>
using namespace std;

int sumA(int a[10][10], int n)
{
    int s = 0;
    for (int i = 1; i < n; i++)
        for (int j = 0; j < i; j++)
            s = s + a[i][j];
    return s;
}

int main()
{
    int n, count;
    int a[10][10];

    cout << "n = ";
    cin >> n;
    cout << "count = ";
    cin >> count;

    int maxSum = 0;
    int maxIndex = 1;
    int first = 1;

    for (int k = 1; k <= count; k++)
    {
        cout << "matrix " << k << ":\n";
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                cin >> a[i][j];

        cout << "matrix " << k << ":\n";
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
                cout << a[i][j] << "\t";
            cout << "\n";
        }

        int s = sumA(a, n);
        cout << "sum = " << s << "\n";

        if (first == 1)
        {
            maxSum = s;
            maxIndex = k;
            first = 0;
        }
        else if (s > maxSum)
        {
            maxSum = s;
            maxIndex = k;
        }
    }

    cout << "max sum = " << maxSum << " matrix " << maxIndex << "\n";

    return 0;
}