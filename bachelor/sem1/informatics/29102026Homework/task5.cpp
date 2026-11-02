#include <iostream>
using namespace std;

int main() {
    int a[7] = {5, 3, 9, 1, 7, 2, 8};

    for (int i = 1; i < 7; i++) {
        int key = a[i];
        int j = i - 1;

        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }

    for (int i = 0; i < 7; i++) {
        cout << a[i] << " ";
    }

    return 0;
}