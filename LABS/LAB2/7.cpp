#include <iostream>

using namespace std;

int main() {
    int n, r = 0;
    cout << "Nhap so nguyen duong n: ";
    cin >> n;
    while (n != 0) {
        int d = n % 10;
        r = r * 10 + d;
        n /= 10;
    }
    cout << r << endl;
    return 0;
}