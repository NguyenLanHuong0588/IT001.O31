#include <iostream>
using namespace std;


bool IsPrime(int n) {
    if (n < 2) return false;
    if (n == 2) return true;
    for (int i = 3; i * i <= n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

int reverse(int n) {
    int reversed = 0;
    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return reversed;
}

int count_reversible_primes(int a, int b) {
    int count = 0;
    for (int i = a; i <= b; i++) {
        if (IsPrime(i)) {
            int reversed = reverse(i);
            if (i != reversed && IsPrime(reversed)) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << count_reversible_primes(a, b) << endl;
    return 0;
}