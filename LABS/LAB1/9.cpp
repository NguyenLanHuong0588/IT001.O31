#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;
    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c) cout << "Tam giac deu";
        else if (a == b || a == c || b == c) cout << "Tam giac can";
        else if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)
            cout << "Tam giac vuong";
        else cout << "Tam giac thuong";
    } else cout << "Khong phai tam giac" << endl;
    return 0;
}