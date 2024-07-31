#include <iostream>
using namespace std;

int main () {
    int a, b, n;
    cin >> a >> b >> n;
    int total = 0;
    for (int i = 1; i <= n; i++) {
        total += a*b;
        a++;
        b++;
    }
    cout << total;
    return 0;
}