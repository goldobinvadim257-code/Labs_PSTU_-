#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    int a[100]; 
    int size, i, j, k, val, found;

    cout << "Print razmer massive: ";
    cin >> size;
    cout << "Print znachenie delete: ";
    cin >> val;
    cout << "Print K : ";
    cin >> k;

    srand(time(0));

    cout << "Massuve nachalo:" << endl;
    for (i = 0; i < size; i++) {
        a[i] = rand() % 20;
        cout << a[i] << " ";
    }
    cout << endl;

    found = 0;
    for (i = 0; i < size; i++) {
        if (a[i] == val && found == 0) {
            for (j = i; j < size - 1; j++) {
                a[j] = a[j + 1];
            }
            size = size - 1;
            found = 1;
        }
    }

    if (found == 0) {
        cout << "Element so znacheniem " << val << " nety." << endl;
    } else {
        cout << "Massiv After Delete:" << endl;
        for (i = 0; i < size; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }

    if (size > 0) {
        k = k % size;
        for (j = 0; j < k; j++) {
            int temp = a[size - 1];
            for (i = size - 1; i > 0; i--) {
                a[i] = a[i - 1];
            }
            a[0] = temp;
        }
    }

    cout << "Massive posle sdviga vpravo na " << k << ":" << endl;
    for (i = 0; i < size; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}