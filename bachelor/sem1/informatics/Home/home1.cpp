#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int a[3][4];

    cout << "Vvedite 12 chisel dlya matricy 3x4:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> a[i][j];
        }
    }

    int sum[3];

    for (int i = 0; i < 3; i++) {
        sum[i] = 0;
        for (int j = 0; j < 4; j++) {
            sum[i] = sum[i] + a[i][j];
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << setw(4) << a[i][j];
        }
        cout << "   sum = " << sum[i] << endl;
    }

    return 0;
}