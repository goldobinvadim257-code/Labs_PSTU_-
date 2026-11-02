#include <iostream>
using namespace std;

int main() {
    int a[7] = {5, 3, 9, 1, 7, 2, 8};

    for (int i = 0; i < 6; i++) {
        int min = a[i];
        int imin = i;

        for (int j = i + 1; j < 7; j++) {
            if (a[j] < min) {
                min = a[j];
                imin = j;
            }
        }

        int temp = a[i];
        a[i] = a[imin];
        a[imin] = temp;
    }

    for (int i = 0; i < 7; i++) {
        cout << a[i] << " ";
    }

    return 0;
}