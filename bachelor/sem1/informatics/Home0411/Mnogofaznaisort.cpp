#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[100];
    for (int i = 0; i < n; i++) cin >> a[i];

    int f[20], d[20];
    int k = 1;
    f[0] = 1; f[1] = 1;
    while (f[k] < n) {
        k++;
        f[k] = f[k-1] + f[k-2];
    }

    for (int i = 0; i < n; i++) d[i] = a[i];

    for (int step = k - 1; step >= 1; step--) {
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - 1 - i; j++) {
                if (d[j] > d[j+1]) {
                    int t = d[j];
                    d[j] = d[j+1];
                    d[j+1] = t;
                }
            }
        }
    }

    for (int i = 0; i < n; i++) cout << d[i] << " ";
    return 0;
}