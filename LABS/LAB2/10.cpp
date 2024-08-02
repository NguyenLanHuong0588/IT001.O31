#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a0 = 0, a1 = 1, an;

    cout << "Day Fibonacci " << n << " so dau tien la: ";
    for (int i = 0; i < n; i++) {
        cout << a0 << " ";
        an = a0 + a1;
        a0 = a1;
        a1 = an;
    }

    return 0;
}