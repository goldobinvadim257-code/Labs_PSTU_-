#include <iostream>
using namespace std;

int main() {
    int a[8] = {1, 2, 3, 4, 5, 6, 7, 8};
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