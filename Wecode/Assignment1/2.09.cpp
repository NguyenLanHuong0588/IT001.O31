#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;
    if (a + b > c && a + c > b && b + c > a) {
        // Xác định loại tam giác
        if (a == b && b == c)
            cout << "Tam giac deu";
        else if (a == b || a == c || b == c)
            cout << "Tam giac can";
        else if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)
            cout << "Tam giac vuong";
        else
            cout << "Tam giac thuong";

        // Tính diện tích tam giác
        double p = (a + b + c) / 2.0;
        double area = sqrt(p * (p - a) * (p - b) * (p - c));
        cout << ", dien tich = " << fixed << setprecision(2) << area << endl;
    } else {
        cout << "Khong phai tam giac" << endl;
    }
    
    return 0;
}
