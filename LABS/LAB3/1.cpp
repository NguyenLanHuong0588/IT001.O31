#include <iostream>
#include <cmath>
using namespace std;

char DoiKyTu(char c) {
    if (c >= 'A' && c <= 'Z') {
        return c + 32;
    }
    return c;
}

void GiaiPTBac1(float a, float b) {
    if (a == 0) {
        if (b == 0) cout << "PT co vo so nghiem" << endl;
        else cout << "PTVN" << endl;
    }
    else cout << "PT co nghiem x = " << -b / a << endl;
}

void GiaiPTBac2 (float a, float b, float c) {
    float d = b*b - 4*a*c;
    if (d < 0) cout << "PTVN" << endl;
    else if (d == 0) cout << "PT co nghiem kep x1 = x2 = " << -b / (2*a) << endl;
    else {
        cout << "PT co 2 nghiem phan biet:" << endl;
        cout << "x1 = " << (-b + sqrt(d)) / (2*a) << "\t";
        cout << "x2 = " << (-b - sqrt(d)) / (2*a) << endl;
    }
}

int min(int a, int b, int c, int d) {
    int min = a;
    if (b < min) min = b;
    if (c < min) min = c;
    if (d < min) min = d;
    return min;
}

void HoanVi(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void AccendingSort (int &a, int &b, int &c, int &d) {
    if (a > b) swap(a, b);
    if (a > c) swap(a, c);
    if (a > d) swap(a, d);
    if (b > c) swap(b, c);
    if (b > d) swap(b, d);
    if (c > d) swap(c, d);
}

int main () {
    char s;
    cout << "Nhap ki tu in hoa: ";
    cin >> s;
    cout << "Ki tu thuong: " << DoiKyTu(s) << endl << endl << endl;


    int a, b, c, d;
    cout << "- Nhap 4 so nguyen a, b, c , d de hoan thanh cac yeu cau sau:" << endl;
    cout << "- Giai PT bac nhat ax + b = 0" << endl;
    cout << "- Giai PT bac hai ax^2 + bx + c = 0" << endl;
    cout << "- Gia tri nho nhat cua 4 so nguyen a, b, c, d" << endl;
    cout << "- Hoan vi 2 so nguyen" << endl;
    cout << "- Sap xep 4 so nguyen tang dan" << endl;

    cin >> a >> b >> c >> d;
    cout << endl;
    
    GiaiPTBac1(a, b);
    GiaiPTBac2(a, b, c);
    cout << "min = " << min(a, b, c, d) << endl;
    HoanVi(a, b);
    cout << "a = " << a << ", b = " << b << endl;
    AccendingSort (a, b, c, d);
    cout << "4 so nguyen tang dan: " << a << " " << b << " " << c << " " << d << endl; 

    return 0;
}