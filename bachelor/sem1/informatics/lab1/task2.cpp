#include <iostream>
using namespace std;

int main() {
    int m, n, o1, o2, o3;

    m = 6;
    n = 7;

    o1 = ++n * ++m;
    o2 = m++ < n;
    o3 = n++ > m;

    cout << o1 << endl;
    cout << o2 << endl;
    cout << o3 << endl;

    return 0;
}