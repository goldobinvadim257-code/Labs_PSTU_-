#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, sum, eps;
    int n;

    eps = 0.0001;
    a = 10.0;
    sum = 0.0;
    n = 1;

    while (fabs(a) >= eps) {
        sum = sum + a;
        n = n + 1;
        a = a * 10.0 / n;
    }

    cout << "Sum = " << sum << endl;

    return 0;
}