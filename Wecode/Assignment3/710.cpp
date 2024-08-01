#include <iostream>
using namespace std;

#define MAXR 100
#define MAXC 100

void NhapMatran1(float[][MAXC], int&, int&);
void NhapMatran2(float[][MAXC], int&, int&);
void MultiplyMaxtrix(float[][MAXC], float[][MAXC], float[][MAXC], int&, int&);
void XuatMaTran(float[][MAXC], int&, int&);

void NhapMatran1 (float a[][MAXC], int& m, int& n) {
    cin >> m >> n; 
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
}

void NhapMatran2 (float b[][MAXC], int& p, int& q) {
    cin >> p >> q;  
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            cin >> b[i][j];
        }
    }
}

void MultiplyMaxtrix (float a[][MAXC], float b[][MAXC], float c[][MAXC], int m, int n, int p, int q) {
    if (n == p) {
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < q; j++) {
                c[i][j] = 0;
                for (int k = 0; k < n; k++) c[i][j] = c[i][j] + (a[i][k] * b[k][j]);
                
            }
        }
    }
}

void XuatMaTran (float c[][MAXC], int& m, int& n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) cout << c[i][j] << " ";
        cout << endl;
    }
    cout << endl;
}

int main () {
    float a[MAXR][MAXC], b[MAXR][MAXC], c[MAXR][MAXC];
    int m, n, p, q;

    NhapMatran1 (a, m, n);
    NhapMatran2 (b, p, q);

    MultiplyMaxtrix(a, b, c, m, n, p, q);
    XuatMaTran(c, m, q);

    return 0;
}