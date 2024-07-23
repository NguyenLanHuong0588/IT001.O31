#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float a, b, c;
    cin >> a >> b >> c;
    float dtb = (a + b + c)/3;
    cout << "DTB = " << fixed << setprecision(2) << dtb << endl;
    cout <<"\nLoai: ";
    if (dtb >=9 && dtb <= 10) cout << "XUAT SAC";
    else if (dtb >= 8) cout << "GIOI";
    else if (dtb >= 7) cout << "KHA";
    else if (dtb >= 6) cout << "TB KHA";
    else if (dtb >= 5) cout << "TB";
    else if (dtb >= 4) cout << "YEU";
    else cout << "KEM";
    
    return 0;
}
