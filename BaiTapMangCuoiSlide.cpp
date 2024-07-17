#include <iostream>
using namespace std;

void NhapMang (int a[], int n) {
    cout << "Nhap mang: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];
}

void XuatMang (int a[], int n) {
    cout << "Xuat mang: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}

// bool KTChan (int n) {
//     return n % 2 == 0;
// }

// bool KTMangToanChan (int a[], int n) {
//     for (int i = 0; i < n; i++) {
//         if (!KTChan(a[i]))
//         return false;
//     }
//     return true;
// }

// bool IsPrime (int n) {
//     if (n < 2) return false;    
//     if (n == 2) return true;
//     if (n % 2 == 0) return false;
//     for (int i = 3; i * i < n; i+= 2) {
//         if (n % i == 0) 
//             return false;
//     } 
//     return true;
// }

// bool KTMangNguyenTo (int a[], int n) {
//     for (int i = 0; i < n; i++) {
//         if (!IsPrime(a[i]))
//         return false;
//     }
//     return true;
// }

// bool KTMangTangDan (int a[], int n) {
//     for (int i = 0; i < n - 1; i++) {
//         if (a[i] > a[i+1])
//             return false;
//     }
//     return true;
// }

// int CountSolution (int a[], int n) {
//     int count = 0;
//     for (int i = 0; i < n; i++) {
//         if (a[i] % 4 == 0 && a[i] % 5 != 0)
//             count++;
//     }
//     return count;
// }

// int TongSoNT (int a[], int n) {
//     int kq = 0;
//     for (int i = 0; i < n; i++) {
//         if (IsPrime(a[i]))
//             kq += a[i];
//     }
//     return kq;
// }

// int FindLast (int a[], int n, int x) { 
//     for (int i = n - 1; i >= 0; i--) {
//         if (a[i] == x) {
//             return i;
//         }
//     }
//     return -1;
// }

// int FindFirstPrimePosition(int a[], int n) {
//     for (int i = 0; i < n; i++) {
//         if (IsPrime(a[i])) {
//             return i;
//         }
//     }
//     return -1;
// }

// int FindMin(int a[], int n) {
//     int min = a[0];
//     for (int i = 1; i < n; i++) {
//         if (a[i] < min) {
//             min = a[i];
//         }
//     }
//     return min;
// }

// int FindMinPositive(int a[], int n) {
//     int MinPositive = a[0];
//     for (int i = 0; i < n; i++) {
//         if (a[i] >= 0 && a[i] < MinPositive)
//             MinPositive = a[i];
//     }
//     if (MinPositive >= 0) return MinPositive;
//     return -1;
// }

// void ExtractPrime (int a[], int n, int b[], int* m) {
//     *m = 0;
//     for (int i = 0; i < n; i++) {
//         if (IsPrime(a[i]))
//             b[(*m)++] = a[i];
//     }
// }

// void SplitArray (int a[], int n, int b[], int *m, int c[], int *p) {
//     *m = 0;
//     *p = 0;
//     for (int i = 0; i < n; i++) {
//         if (a[i] > 0)
//             b[(*m)++] = a[i];
//         else
//             c[(*p)++] = a[i];
//     }
// }

int PartitionDes (int a[], int min, int max) {
    int pivot = a[max];
    int i = min - 1;
    for (int j = min; j <= max - 1; j++) {
        if (a[j] >= pivot) {
            i++;
            swap (a[i], a[j]);
        }
    }
    swap (a[i + 1], a[max]);
    return (i + 1);
}

void QuickSortDecending (int a[], int min, int max) {
    if (min < max) {
        int p_index = PartitionDes(a, min, max);
        QuickSortDecending (a, min, p_index - 1);
        QuickSortDecending (a, p_index + 1, max);
    }
}

void QuickSortDecending (int a[], int n) {
    QuickSortDecending (a, 0, n - 1);
}

void ReqSort (int a[], int n) {
    int positive[1000], negative[1000], zero[1000];
    int p = 0, q = 0, r = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > 0) positive[p++] = a[i];
        else if (a[i] < 0) negative[q++] = a[i];
        else zero[r++] = a[i];
    }
    QuickSortDecending(positive, p);
    QuickSortDecending(negative, q);
    int index = 0;
    for (int i = 0; i < p; i++) a[index++] = positive[i];
    for (int i = 0; i < q; i++) a[index++] = negative[i];
    for (int i = 0; i < r; i++) a[index++] = zero[i];
}

// void ReplacePrime (int a[], int n) {
//     for (int i = 0; i < n; i++) {
//         if (IsPrime(a[i])) a[i] = 0;
//     }
// }

// void InsertZeroAfterPrime (int a[], int n) {
//     for (int i = 0; i < n; i++) {
//         if (IsPrime(a[i])) {
//             for (int j = 0; j > i; --j) a[j] = a[j - 1];
//             a[i + 1] = 0;
//             ++n;
//             ++i;
//         }
//     }
// }

// void RemovePrime (int a[], int n) {
//     int size = 0;
//     for (int i = 0; i < n; i++) {
//         if (!IsPrime(a[i]))
//             a[size++] = a[i];
//     }
//     n = size;
// }

int main() {
    int a[1000], n;
    cout << "\nNhap, Xuat mang:\n";
    cout << "Nhap so phan tu trong mang: ";
    cin >> n;
    NhapMang(a, n);
    XuatMang(a, n);


    // cout << "\nKiem tra:\n";
    // cout << "Ham Toan Chan? ";
    // if (KTMangToanChan(a,n)) cout << "Yes" << endl;
    // else cout << "No" << endl;
    // cout << "Ham Toan So Nguyen To? ";
    // if (KTMangNguyenTo(a,n)) cout << "Yes" << endl;
    // else cout << "No" << endl;
    // cout << "Ham Tang Dan? ";
    // if (KTMangTangDan(a,n)) cout << "Yes" << endl;
    // else cout << "No" << endl;


    // cout << "\nThao tac tinh toan:\n";
    // cout << "So phan tu chia het cho 4 nhung khong chia het cho 5: " << CountSolution(a, n) << endl;
    // cout << "Tong so nguyen to trong mang: " << TongSoNT(a, n) << endl;

    // cout << "\nTim Kiem:\n";
    // cout << "Nhap phan tu x: ";
    // int x;
    // cin >> x;
    // cout <<  "Vi tri cuoi cung cua phan tu x trong mang: " << FindLast(a ,n , x) << endl;
    // cout << "Vi tri so nguyen to dau tien trong mang: "<< FindFirstPrimePosition(a, n) << endl;
    // cout << "So nho nhat trong mang: " << FindMin(a, n) << endl;
    // cout << "So duong nho nhat trong mang: " << FindMinPositive(a, n) << endl;


    // Tu phan nay tro xuong, xong phan nao thi su dung "// "
    // cout << "\nThao tac xu li:\n";

    // int b[1000], m;
    // cout << "Tach so nguyen to co trong mang a dua qua mang b: ";
    // ExtractPrime (a, n, b, &m);
    // XuatMang(b ,m);

    // int b[1000], c[1000], m, p;
    // cout << "Tach mang a thanh 2 mang b va c (mang b chua so nguyen duong, mang c chua phan con lai): ";
    // SplitArray (a, n, b, &m, c, &p);
    // XuatMang(b, m);
    // XuatMang(c, p);
    
    // cout << "Sap xep mang giam dan: ";
    // QuickSortDecending (a, n);
    // XuatMang (a, n);

    cout << "Sap xep mang sao cho cac so duong dung dau mang giam dan, ke den la cac so am tang dan, cuoi cung la cac so 0:\n";
    ReqSort(a, n);
    XuatMang(a, n);

    // cout << "\nThao tac them/ xoa/ sua:\n";
    // cout << "Sua cac so nt co trong mang thanh so 0: ";
    // ReplacePrime(a, n);
    // XuatMang(a, n);

    // cout << "Chen so 0 dang sau cac so nguyen to trong mang: ";
    // InsertZeroAfterPrime (a, n);
    // XuatMang(a, n);

    // cout << "Xoa tat ca cac so nguyen to trong mang: ";
    // RemovePrime(a, n);
    // XuatMang(a, n);

    return 0;
}