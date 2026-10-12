#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b;
    double p1, p2, p3, p4, p5, result;

    a = 100.0;
    b = 0.001;

    p1 = (a + b) * (a + b) * (a + b) * (a + b);
    p2 = a * a * a * a + 4 * a * a * a * b;
    p3 = 6 * a * a * b * b;
    p4 = 4 * a * a * a * b * b * b;
    p5 = b * b * b * b;

    result = (p1 - p2) / (p3 + p4 + p5);

    cout << "double result = " << result << endl;

    float a2, b2;
    float q1, q2, q3, q4, q5, result2;

    a2 = 100.0;
    b2 = 0.001;

    q1 = (a2 + b2) * (a2 + b2) * (a2 + b2) * (a2 + b2);
    q2 = a2 * a2 * a2 * a2 + 4 * a2 * a2 * a2 * b2;
    q3 = 6 * a2 * a2 * b2 * b2;
    q4 = 4 * a2 * a2 * a2 * b2 * b2 * b2;
    q5 = b2 * b2 * b2 * b2;

    result2 = (q1 - q2) / (q3 + q4 + q5);

    cout << "float result = " << result2 << endl;

    return 0;
}