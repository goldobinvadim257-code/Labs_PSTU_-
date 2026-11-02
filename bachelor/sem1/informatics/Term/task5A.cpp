#include <iostream>
using namespace std;

int main() {
    int A[7] = {5, 3, 9, 1, 7, 2, 8};

    for (int i = 1; i < 7; i++) {
        int buf = A[i];
        int j = i - 1;
        while (j >= 0 && A[j] > buf) {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = buf;
    }

    for (int i = 0; i < 7; i++) {
        cout << A[i] << " ";
    }

    return 0;
}