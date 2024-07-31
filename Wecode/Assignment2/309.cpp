#include <iostream>
using namespace std;

bool DoiXung(int n) {
    int origin = n;
    int r = 0;
    while (n > 0) {
        int d = n % 10;
        r = r * 10 + d;
        n /= 10;
    }
    // So sánh số đảo ngược với số gốc
    return (r == origin);
}

int main() {
    int n;
    cin >> n;
    if (DoiXung(n)) cout << "true";
    else cout << "false";

    return 0;
}