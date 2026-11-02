#include <iostream>
using namespace std;

int main() {
    int a[3][4];

    cout << "Vvedite 12 chisel dlya matricy 3x4:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> a[i][j];
        }
    }

    int max = a[0][0];
    int imax = 0;
    int jmax = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            if (a[i][j] > max) {
                max = a[i][j];
                imax = i;
                jmax = j;
            }
        }
    }

    cout << "max = " << max << endl;
    cout << "stroka = " << imax << endl;
    cout << "stolbec = " << jmax << endl;

    return 0;
}