#include <iostream>
using namespace std;

int main() {
    int A[7] = {5, 3, 9, 1, 7, 2, 8};

    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6 - i; j++) {
            if (A[j] > A[j + 1]) {
                int buf = A[j];
                A[j] = A[j + 1];
                A[j + 1] = buf;
            }
        }
    }

    for (int i = 0; i < 7; i++) {
        cout << A[i] << " ";
    }

    return 0;
}