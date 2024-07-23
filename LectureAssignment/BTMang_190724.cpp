#include <iostream>
#include <cmath>
using namespace std;

void NhapMang (int a[], int n) {
    for (int i = 0; i < n; i++) {
        do {
            cin >> a[i];
        } while (a[i] <= 0);
    }
}

bool IsPrime (int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
            break;
        }
    }
    return true;
}

// int FindHighestPrime (int a[], int n) {
//     int max = a[0];
//     for (int i = 0; i < n; i++) {
//         if (IsPrime(a[i]))
//             max = a[i];
//     }
//     return max;
// }

void FindLastHighestPrime(int a[], int n) {
    int max_value = -1, max_index = -1;
    for (int i = 0; i < n; ++i) {
        if (IsPrime(a[i]) && a[i] >= max_value) { 
            max_value = a[i];
            max_index = i;        
        }
    }
    if (max_value != -1) {
        cout << "max = " << max_value << endl;
        cout << "index = " << max_index << endl;
    }
    else {
        cout << "Khong co so nguyen to trong mang" << endl;
    }
}

int main () {
    int a[100], n;
    do {
        cin >> n;
    } while (n <= 0);
    NhapMang(a, n);

    // int max_index, max_value = FindHighestPrime(a, n);
    // for (int i = n; i >= 0; i--) {
    //     if (max_value == a[i])
    //         max_index = i;
    // }
    // cout << "max = " << max_value << endl;
    // cout << "index = " << max_index << endl;  

    FindLastHighestPrime (a, n);
    return 0;
}