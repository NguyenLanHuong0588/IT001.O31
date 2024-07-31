#include <iostream>
using namespace std;

int main () {
    float a, b;
    cout << "Nhap a va b cho phuong trinh bac nhat ax + b = 0:\n";
    cin >> a >> b;
    cout << "Phuong trinh da nhap: " << a << "x + " << b << " = 0\n";
    if (a == 0) {
        if (b == 0) cout << "PT co vo so nghiem";
        else cout << "PT vo nghiem";
    }
    else {
        cout << "Nghiem cua phuong trinh la: x = " << -b/a; 
    }
    return 0;
}