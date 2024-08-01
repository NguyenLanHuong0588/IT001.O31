#include <iostream>
#include <cmath>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

bool IsPrime(int n) {
    if (n < 1) return false;
    if (n == 2) return true;
    for (int i = 3; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int sum_common_prime(int n, int m) {
    int gcd_value = gcd(n, m);
    int sum = 0;
    for (int i = 2; i <= gcd_value; ++i) {
        if (gcd_value % i == 0 && IsPrime(i)) {
            sum += i;
            while (gcd_value % i == 0) {
                gcd_value /= i;
            }
        }
    }
    return (sum > 0) ? sum : -1;
}

int main() {
    int m, n;
    cin >> n >> m;
    cout << sum_common_prime(n, m);
}