#include <iostream>
using namespace std;

#define MAXR 1000
#define MAXC 1000

void NhapMatran (float a[][MAXC], int& m, int& n) {
    cin >> m;
    cin >> n;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
//            cout << "Nhap a[" << i << "][" << j << "]";
            cin >> a[i][j];
        }
    }
}

float TongDCChinh (float a[][MAXC], int n) {
    float s = 0;
    for (int i = 0; i < n; i++)
        s += a[i][i];
    return s;
}

int main () {
    float a[MAXR][MAXC];
    int n, m;
    NhapMatran (a, m, n);
    cout << TongDCChinh(a, n);
}