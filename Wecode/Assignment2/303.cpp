#include <iostream>
using namespace std;

int SumOfDivisor (int n) {
    int s = 0;
    for (int i = 1; i <= n/2; i++) {
        if (n % i == 0) s += i;
    }
    return s;
}


int main () {
    int n;
    cin >> n;
    if (n < 0 || n > 1000000000) return 1;

    cout << SumOfDivisor(n);
    return 0;
}