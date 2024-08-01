#include <iostream>
#include <math.h>
using namespace std;

// bool IsPrime(int n) {
//     if (n < 1) return false;
//     if (n == 2) return true;
//     for (int i = 3; i * i <= n; i++) {
//         if (n % i == 0) return false;
//     }
//     return true;
// }

bool IsPrime(int num) {
    if (num <= 1) return false;
    if (num <= 3) return true;
    if (num % 2 == 0 || num % 3 == 0) return false;

    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0)
            return false;
    }
    return true;
}

int main() {
    int n;
    do {
        cin >> n;
        if (n <= 0 || n > 50) {
            cout << "Gia tri vua nhap la " << n << ", khong hop le. Vui long nhap lai.\n";
        }
    } while (n <= 0 || n > 50);
    int dem = 0, num = 2, s = 0;
    while (dem < n) {
        if (IsPrime(num)) {
            s += num;
            dem++;
        }
        num++;
    }
    cout << "Tong " << n << " so nguyen to dau tien la: " << s << endl;
    return 0;
}