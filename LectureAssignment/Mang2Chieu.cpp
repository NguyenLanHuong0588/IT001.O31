#include <iostream>
using namespace std;

#define MAXR 1000
#define MAXC 1000

void NhapMatran (int a[][MAXC], int m, int n) {
    cout << "Nhap hang:";
    cin >> m;
    cout << "Nhap cot:";
    cin >> n;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Nhap a[" << i << "][" << j << "]";
            cin >> a[i][j];
        }
    }
}

void XuatMaTran (int a[][MAXC], int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++)
            cout << a[i][j];
        cout << endl;
    }
    cout << endl;
}

int TimKiem (int a[][MAXC], int m, int n, int x) {
    int i, j;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            if (a[i][j] == x)
                return 1;
        }
    }
    return -1;
}

int FindMax (int a[][MAXC], int m, int n) {
    int i, j, max;
    max = a[0][0];
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            if (a[i][j] > max)
                max = a[i][j];
        }
    }
    return max;
}

int FindMin (int a[][MAXC], int m, int n) {
    int i, j, min;
    min = a[0][0];
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            if (a[i][j] < min)
                min = a[i][j];
        }
    }
    return min;
}

int LaSNT (int n) {
    int i, dem = 0;
    for (i = 1; i <= n; i++) {
        if (n % i == 0) 
            dem++;
    }
    if (dem == 2) return 1;
    else return 0;   
}

int KTMaTranToanSNT (int a[][MAXC], int m, int n) {
    int i, j, dem = 0;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            if (LaSNT(a[i][j]) == 1)
                dem++;
        }
    }
    if (dem == n*n) return 1;
    else return 0;
}

bool KTMaTranDonVi (int a[][MAXC], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                if (a[i][j] != 1) 
                    return false;
            }
            else {
                if (a[i][j] != 0) 
                    return false;
            }
        }
    }
    return true;
}

bool KTDoiXung (int a[][MAXC], int n) {
    for (int i = 0; i < n / 2; ++i) {
        if (a[i] != a[n - i - 1]) 
            return false;
        
    }
    return true;
}

int TongHang (int a[][MAXC], int m, int n, int hang) {
    int j, sum = 0;
    for (j = 0; j < n; j++)
        sum += a[hang][j];
    return sum;
}

int TongCot (int a[][MAXC], int m, int n, int cot) {
    int i, sum = 0;
    for (i = 0; i < m; i++)
        sum += a[i][cot];
    return sum;
}

int TongDCChinh (int a[][MAXC], int n) {
    int i, sum = 0;
    for (i = 0; i < n; i++)
        sum += a[i][i];
    return sum;
}

int TongTrenDCChinh (int a[][MAXC], int n) {
    int i, j, sum = 0;
    for (i = 0; i < n; i++){
        for (int j = 0; j < n; j++) {
            if (i < j) sum += a[i][j];
        }
    }
    return sum;
}

int TongDuoiDCChinh (int a[][MAXC], int n) {
    int i, j, sum = 0;
    for (i = 0; i < n; i++){
        for (int j = 0; j < n; j++) {
            if (i <= j) sum += a[i][j];
        }
    }
    return sum;
}

int TongDCPhu (int a[][MAXC], int n) {
    int i, sum = 0;
    for (i = 0; i < n; i++)
        sum += a[i][n - i - 1];
    return sum;
}

// void AddMatrix (int a[][MAXC], int b[][MAXC], int c[][MAXC], int m, int n) {
//     for (int i = 0; i < m; i++) {
//         for (int j = 0; j < n; j++)
//             c[i][j] = a[i][j] + b[i][j];
//     }
// }

void MultiplyMaxtrix (int a[][MAXC], int b[][MAXC], int c[][MAXC], int m, int n, int p) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            c[i][j] = 0;
            for (int k = 0; k < n; k++)
                c[i][j] += a[i][k] * b[k][j];
        }
    }
}

int main () {
    int a[1000][1000], n, m;
     cout << "Nhap ma tran A:\n";
    NhapMatran (a, m, n);
    XuatMaTran(a, m, n);

    cout << "\nTim kiem:\n";
    cout << "Nhap phan tu can tim: ";
    int x;
    cin >> x;
    if (TimKiem(a, m, n, x) == 1)
        cout << "Phan tu " << x << " co trong ma tran" << endl;
    else
        cout << "Khong ton tai" << endl;

    cout <<"\nKiem tra:\n";
    cout << "Ma tran co toan so nguyen to ? ";
    (KTMaTranToanSNT(a, m, n) == 1) ? cout << "Yes\n" : cout << "No\n";
    cout << "Phan tu lon nhat trong ma tran: " << FindMax(a, m, n) << endl;
    cout << "Phan tu nho nhat trong ma tran: " << FindMin(a, m, n) << endl;
    cout << "Ma tran co phai la ma tran don vi khong ? ";
    (KTMaTranDonVi(a, n))?  cout << "Yes\n" : cout << "No\n";
    cout << "Ma tran co doi xung qua duong cheo chinh khong ? ";
    (KTDoiXung(a, n)) ?  cout << "Yes\n" : cout << "No\n";


    cout << "\nTinh:\n";
    int hang, cot;
    cout << "Hang muon tinh: ";
    cin >> hang;
    cout << "Tong hang cua ma tran: " << TongHang(a, m, n, hang) << endl;
    cout << "Cot muon tinh: ";
    cin >> cot;
    
    cout << "Tong cot cua ma tran: " << TongCot(a, m, n, cot) << endl;
    cout << "Tong duong cheo chinh: " << TongDCChinh(a, n) << endl;
    cout << "Tong tren duong cheo chinh: " << TongTrenDCChinh(a, n) << endl;
    cout << "Tong tren duoi cheo chinh: " << TongDuoiDCChinh(a, n) << endl;
    cout << "Tong duong cheo phu: " << TongDCPhu(a, n) << endl;

    int b[1000][1000], c[1000][1000];

    // cout << "Nhap ma tran B:\n";
    // NhapMatran(b, m, n);
    // AddMatrix(a, b, b , m, n);
    // cout << "Tong ma tran (C = A + B):\n";
    // XuatMaTran(c, m, n);

    int p;
    cout << "Nhap ma tran B:\n";
    NhapMatran(b, n, p);
    MultiplyMaxtrix (a, b, b, m, n, p);
    cout << "Tich ma tran (C = A * B):\n";
    XuatMaTran (c, m, n);

    return 0;
}