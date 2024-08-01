#include <iostream>
using namespace std;

bool IsPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

int reverse (int n) {
    int r = 0;
    while (n > 0) {
        r = r * 10 + (n % 10);
        n /= 10;
    }
    return r;
}

int CountPrimePalindrome(int a, int b) {
    int dem = 0;
    for (int i = a; i <= b; ++i) {
        if (IsPrime(i) && IsPrime(reverse(i))) {
            dem++;
        }
    }
    return dem;
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << CountPrimePalindrome(a, b) << endl;
    return 0;
}