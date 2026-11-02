#include <iostream>
using namespace std;

int main() {
    int a[7] = {5, 3, 9, 1, 7, 2, 8};

    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6 - i; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < 7; i++) {
        cout << a[i] << " ";
    }

    return 0;
}