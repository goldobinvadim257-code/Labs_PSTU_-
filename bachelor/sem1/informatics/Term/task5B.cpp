#include <iostream>
using namespace std;

int main() {
    int A[7] = {5, 3, 9, 1, 7, 2, 8};

    for (int i = 0; i < 6; i++) {
        int imin = i;
        for (int j = i + 1; j < 7; j++) {
            if (A[j] < A[imin]) {
                imin = j;
            }
        }
        int buf = A[i];
        A[i] = A[imin];
        A[imin] = buf;
    }

    for (int i = 0; i < 7; i++) {
        cout << A[i] << " ";
    }

    return 0;
}