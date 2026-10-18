#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double a, b, h, x;
    double y, sum_n, sum_eps;
    double chlen, tochnoe;
    double eps = 0.0001;
    int n, i;

    a = 0.1;
    b = 0.8;
    h = (b - a) / 10.0;

    cout << "x\tTochnoe\t\tSum(n=3)\tSum(eps)" << endl;

    for (i = 0; i <= 10; i++) {
        x = a + i * h;

        tochnoe = 0.25 * log((1.0 + x) / (1.0 - x)) + 0.5 * atan(x);

        sum_n = 0.0;
        chlen = x;
        for (n = 0; n < 3; n++) {
            sum_n = sum_n + chlen;
            chlen = chlen * x * x * x * x * (4.0 * n + 1.0) / (4.0 * n + 5.0);
        }

        sum_eps = 0.0;
        chlen = x;
        n = 0;
        while (fabs(chlen) >= eps) {
            sum_eps = sum_eps + chlen;
            chlen = chlen * x * x * x * x * (4.0 * n + 1.0) / (4.0 * n + 5.0);
            n++;
        }

        cout << fixed << setprecision(4) << x << "\t" 
             << setprecision(6) << tochnoe << "\t\t" 
             << sum_n << "\t\t" 
             << sum_eps << endl;
    }

    return 0;
}