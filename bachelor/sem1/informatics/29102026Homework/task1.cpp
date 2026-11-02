#include <iostream>
using namespace std;

int main() {
    int a[10] = {5, 3, 9, 1, 9, 7, 1, 9, 2, 1};

    int max = a[0];
    int min = a[0];
    int imax = 0;
    int imin = 0;

    for (int i = 1; i < 10; i++) {
        if (a[i] > max) {
            max = a[i];
            imax = i;
        }
        if (a[i] < min) {
            min = a[i];
            imin = i;
        }
    }

    int kmax = 0;
    int kmin = 0;

    for (int i = 0; i < 10; i++) {
        if (a[i] == max) {
            kmax++;
        }
        if (a[i] == min) {
            kmin++;
        }
    }

    cout << "max = " << max << endl;
    cout << "min = " << min << endl;
    cout << "pervyi indeks max = " << imax << endl;
    cout << "pervyi indeks min = " << imin << endl;
    cout << "kolichestvo max = " << kmax << endl;
    cout << "kolichestvo min = " << kmin << endl;

    return 0;
}