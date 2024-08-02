#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    float s1, s2, s3, s4, s5;
    for (int i = 1; i <= n; i++) s1 += i;
    for (int i = 1; i <= n; i++) s2 += i * i;
    for (int i = 1; i <= n; i++) s3 += 1 /(float)i;
    for (int i = 2; i <= n; i++) s4 *= i;

    float giai_thua = 1;
    for (int i = 2; i <= n; i++) {
        giai_thua *= i;
        s5 += giai_thua;
    }
    cout << "s1 = " << s1 << endl;
    cout << "s2 = " << s2 << endl;
    cout << "s3 = " << s3 << endl;
    cout << "s4 = " << s4 << endl;
    cout << "s5 = " << s5 << endl;

    return 0;
}