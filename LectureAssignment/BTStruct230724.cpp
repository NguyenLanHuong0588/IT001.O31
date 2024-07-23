// viết chương trình nhập vào 1 mảng gồm n phân số, sau đó tính tổng và in ra tổng mảng vừa nhập bằng

#include <iostream>
using namespace std; 
// Định nghĩa cấu trúc phân số
struct PhanSo {
    int tuSo;
    int mauSo;
};
typedef PhanSo PHANSO;

PHANSO nhapPhanSo() {
    PHANSO ps;
    cout << "Nhap tu so: ";
    cin >> ps.tuSo;
    cout << "Nhap mau so: ";
    cin >> ps.mauSo;
    return ps;
}

int UCLN(int a, int b) {
    // Tìm UCLN của a và b
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void rutGonPhanSo(PHANSO &ps) {
    int ucln = UCLN(ps.tuSo, ps.mauSo);
    ps.tuSo /= ucln;
    ps.mauSo /= ucln;
}

PHANSO tinhTongPhanSo(PhanSo a[], int n) {
    PHANSO kq = {0, 1}; // Khởi tạo tổng ban đầu là 0/1
    for (int i = 0; i < n; i++) {
        kq.tuSo = kq.tuSo * a[i].mauSo + a[i].tuSo * kq.mauSo;
        kq.mauSo *= a[i].mauSo;
    }
    rutGonPhanSo(kq);
    return kq;
}

void NhapMang(PHANSO a[], int n) {
    for (int i = 0; i < n; ++i) {
        cout << "Nhap phan so thu " << i + 1 << ":\n";
        a[i] = nhapPhanSo();
    }

}

int main() {
    int n;
    cout << "Nhap so luong phan so: ";
    cin >> n;

    PhanSo a[100]; 

    NhapMang(a, n);

    PhanSo tong = tinhTongPhanSo(a, n);

    cout << "Tong cua mang phan so la: " << tong.tuSo << "/" << tong.mauSo << std::endl;

    return 0;
}
