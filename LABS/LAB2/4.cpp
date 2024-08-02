#include <iostream>
#include <cmath>

using namespace std;

bool IsPrime (int n) {
    if (n < 2) return false;
    if (n == 2) return true;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int n, s = 0;
    do {  
        cin >> n;
    } while (n < 0 && n > 50);
    for (int i = 1; i <= n; i++) {
        if (IsPrime(i)) s += i;
    }
    cout << s;
    return 0;
}