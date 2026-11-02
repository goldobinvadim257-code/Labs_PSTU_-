#include <iostream>
using namespace std;

int main() {
    int a[8];

    cout << "Vvedite 8 chisel:" << endl;
    for (int i = 0; i < 8; i++) {
        cin >> a[i];
    }

    bool F = false;
    int i = 0;

    while (i < 7 && !F) {
        if (a[i] > a[i + 1]) {
            F = true;
        }
        i++;
    }

    if (!F) {
        cout << "Massiv uporyadochen po vozrastaniyu" << endl;
    } else {
        cout << "Massiv NE uporyadochen po vozrastaniyu" << endl;
    }

    return 0;
}