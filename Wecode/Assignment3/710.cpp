#include <iostream>
using namespace std;

#define MAXR 1000
#define MAXC 1000

void NhapMatran (float a[][MAXC], int& m, int& n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
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

void XuatMaTran (float a[][MAXC], int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++)
            cout << a[i][j];
        cout << endl;
    }
    cout << endl;
}

int main () {
    float a[MAXR][MAXC], b[MAXR][MAXC], c[MAXR][MAXC];
    int m, n, p, q;

    cin >> m >> n; 

    cin >> p >> q;  
    NhapMatran(b, p, q);

    MultiplyMaxtrix(a, b, c, m, n, p, q);
    XuatMaTran(c, m, q);

    return 0;
}