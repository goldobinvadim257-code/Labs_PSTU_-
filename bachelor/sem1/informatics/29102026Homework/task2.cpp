#include <iostream>
using namespace std;

int main() {
    int a[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    bool flag = true;

    for (int i = 0; i < 7; i++) {
        if (a[i] > a[i + 1]) {
            flag = false;
            break;
        }
    }

    if (flag) {
        cout << "Massiv uporyadochen po vozrastaniyu" << endl;
    } else {
        cout << "Massiv NE uporyadochen po vozrastaniyu" << endl;
    }

    return 0;
}