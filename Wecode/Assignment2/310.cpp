#include <iostream>
#include <vector>
using namespace std;

bool IsPrime (int n) {
    if (n < 2) return false;
    if (n == 2) return true;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

// void findTwinPrimes(int limit) {
//     vector<int> twinPrimes;
//     for (int i = 3; i < limit; ++i) {
//         if (IsPrime(i) && IsPrime(i + 2)) {
//             twinPrimes.push_back(i);
//             twinPrimes.push_back(i + 2);
//         }
//     }

//     // In ra từng cặp số nguyên tố sinh đôi
//     for (size_t j = 0; j < twinPrimes.size(); j += 2) {
//         cout << twinPrimes[j] << ", " << twinPrimes[j + 1] << endl;
//     }

//     cout << "Tong: " << twinPrimes.size() / 2 << " cap so sinh doi < " << limit << endl;
// }

// void findTwinPrimes(int limit) {
//     int count = 0; // Đếm số cặp số nguyên tố sinh đôi
//     for (int i = 3; i < limit; ++i) {
//         if (IsPrime(i) && IsPrime(i + 2)) {
//             cout << i << ", " << i + 2 << endl;
//             count++;
//         }
//     }
//     cout << "Tong: " << count << " cap so sinh doi < " << limit << endl;
// }


int main () {
    int n;
    cin >> n;
    // if (n < 1000) findTwinPrimes(n);

    int x = 1;
    int dem = 0;
    while (x + 2 < n) {
        if (IsPrime(x) && IsPrime(x + 2)) {
            dem++;
            cout << x << ", " << x + 2 << endl;
        }
        x++;
    }
    cout << "Tong: " << dem << " cap so sinh doi < " << n << endl;
    return 0;
}