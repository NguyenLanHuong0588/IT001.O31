#include <iostream>
using namespace std;

int main() {
    int a, b, n, s = 0;
    cin >> a >> b >> n;
    for (int i = 1; i < n; i++) {
        if (i % a == 0 && i % b != 0) s += i;
    }
    cout << s << endl;
    return 0;
}