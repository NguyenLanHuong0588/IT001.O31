#include <iostream>
using namespace std;

int main () {
    unsigned long n;
    cin >> n;

    if (n < 0) return 1;

    float s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    for (unsigned long i = 1; i <= n; i++) {
        s1 += 1 / (2 * i);
        s2 += 1 / (2 * i - 1);
        s3 += 1 / (i * (i + 1));
        s4 += (float)i / (i + 1);
        int d = i * (i + 1) / 2;
        s5 += 1.0 / d;
    }
    cout << "s1 = " << s1 << endl;
    cout << "s2 = " << s2 << endl;
    cout << "s3 = " << s3 << endl;
    cout << "s4 = " << s4 << endl;
    cout << "s5 = " << s5 << endl;

    unsigned long long s = 0, S = 0;
    int dem = 0;
    cout << "\nLiet ke cac uoc so cua n: " << endl;
    for (int i = 1; i <= n; i++) { 
        if (n % i == 0) { 
            cout << i << " ";
            s += i;
            dem++;
            if (i % 2 == 0) S += i;
        }
    }
    cout << endl;
    cout << "\nTong cac uoc so cua n: " << s << endl;
    cout << "\nSo luong uoc so cua n: " << dem << endl;
    cout << "\nTong cac uoc so chan cua n: " << S << endl;

    return 0;
}