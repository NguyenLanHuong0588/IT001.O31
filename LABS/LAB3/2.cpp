#include <iostream>
using namespace std;

int DemChuSo(int n) {
    int dem = 0;
    while (n > 0) {
        n /= 10;
        dem++;
    }
    return dem;
}

int TongChuSo (int n) {
    int s = 0;
    while (n > 0) {
        s += n % 10;
        n /= 10;
    }
    return s;
}

int TongChuSoLe (int n) {
    int s = 0;
    while (n > 0) {
        int d = n % 10;
        if (d % 2 != 0) s += d;
        n /= 10;
    }
    return s;
}

int TongChuSoChan (int n) {
    int s = 0;
    while (n > 0) {
        int d = n % 10;
        if (d % 2 == 0) s += d;
        n /= 10;
    }
    return s;
}

int Reverse (int n) {
    int r = 0;
    while (n > 0) {
        int d = n % 10;
        r = r * 10 + d;
        n /= 10;
    }
    return r;
}

int main() {
    int n;
    cout << "Nhap so nguyen duong n: ";
    cin >> n;

    cout << "So luong chu so cua " << n << " la: " << DemChuSo(n) << endl;
    cout << "Tong cac chu so cua " << n << " la: " << TongChuSo(n) << endl;
    cout << "Tong cac chu so le cua " << n << " la: " << TongChuSoLe(n) << endl;
    cout << "Tong cac chu so chan cua " << n << " la: " << TongChuSoChan(n) << endl;
    cout << "So dao cua " << n << " la: " << Reverse(n) << endl;
    
    return 0;
}