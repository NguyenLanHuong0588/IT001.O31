#include <iostream>

using namespace std;

int main() {
    int m, n;

    // Nhập kích thước ma trận A
    cout << "Nhap so dong va so cot cua ma tran A: ";
    cin >> m >> n;

    // Khai báo và nhập giá trị cho ma trận A
    float A[m][n];
    cout << "Nhap cac phan tu cua ma tran A:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }

    // Nhập kích thước ma trận B (kiểm tra kích thước luôn)
    int l, k;
    cout << "Nhap so dong va so cot cua ma tran B: ";
    cin >> l >> k;
    if (m != l || n != k) {
        cout << "Hai ma tran khong cung kich thuoc, khong the cong!" << endl;
        return 1;
    }

    // Khai báo và nhập giá trị cho ma trận B
    float B[m][n];
    cout << "Nhap cac phan tu cua ma tran B:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> B[i][j];
        }
    }

    // Tính tổng hai ma trận và lưu vào ma trận C
    float C[m][n];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    // In ra ma trận kết quả
    cout << "Ma tran ket qua:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}