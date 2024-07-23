#include <iostream>
using namespace std;

int IsPrime (int n) {
    if (n < 2) return -1;
    if (n == 2) return 1;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0)
            return 0; // Composite
    }
    return 1; // Prime
}

int main() {
    int n;
    cin >> n;
    cout << IsPrime(n);
    return 0;
}
