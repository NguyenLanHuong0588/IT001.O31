#include <iostream>
// #include <cmath>
// #include <iomanip>
using namespace std;



int main() {
    int n; cin >> n;
    int s = 0;
    int temp = n;
    while (temp > 0) {
        int d = temp % 10;
        s += d;
        temp /= 10;
    }
    cout << s;
    return 0;
}
