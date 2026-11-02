#include <iostream>
using namespace std;

int main() {
    int a[10] = {5, 3, 9, 1, 9, 7, 1, 9, 2, 1};

    int min = a[0];
    int max = a[0];
    int imin = 0;
    int imax = 0;

    for (int i = 1; i < 10; i++) {
        if (a[i] < min) {
            min = a[i];
            imin = i;
        }
        if (a[i] > max) {
            max = a[i];
            imax = i;
        }
    }

    int kmin = 0;
    int kmax = 0;

    for (int i = 0; i < 10; i++) {
        if (a[i] == min) {
            kmin++;
        }
        if (a[i] == max) {
            kmax++;
        }
    }

    cout << "min = " << min << endl;
    cout << "max = " << max << endl;
    cout << "indeks min = " << imin << " (nomer " << imin + 1 << ")" << endl;
    cout << "indeks max = " << imax << " (nomer " << imax + 1 << ")" << endl;
    cout << "kolichestvo min = " << kmin << endl;
    cout << "kolichestvo max = " << kmax << endl;

    return 0;
}