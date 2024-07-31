#include <iostream>
#include <cmath>
using namespace std;

int main () {
    float a, b, c, d;
    cout << "Nhap a, b, c cho phuong trinh bac nhat ax^2 + bx + c = 0:\n";
    cin >> a >> b >> c;
    cout << "Phuong trinh da nhap: " << a << "x^2 + " << b << "x + " << c << " = 0\n";

    d = b * b - 4 * a * c;
    if (d > 0) {
        float x1 = (-b + sqrt(d)) / (2 * a);
        float x2 = (-b - sqrt(d)) / (2 * a);
        cout << "Nghiem cua PT: x1 = " << x1 << "\tx2 = " << x2;
    }
    else if (d == 0) cout << "PT co nghiem kep: x1 = x2 = " << -b / (2 * a);
    else cout << "PT vo nghiem";
    
    return 0;
}