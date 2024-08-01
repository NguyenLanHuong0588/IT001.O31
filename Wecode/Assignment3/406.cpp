#include <iostream>
using namespace std;

// int ucln (int a, int b) {
//     while (b != 0) {
//         int temp = b;
//         b = a;
//         a = temp;
//     }
//     return a;
// }

// int main () {
//     int m, n;
//     cin >> m >> n;
//     cout << ucln (m, n);
//     return 0;
// }

void input (int& n) {
    cin >> n;
}

int input () {
    int n;
    cin >> n;
    return n;
}

int gcd (int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
	int m, n;
	input(n);
	m=input();
	cout << gcd(m, n);
}
