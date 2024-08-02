#include <iostream>
using namespace std;

int main() {
    cout << "Cac so co 2 chu so thoa man dk: ";
    for (int i = 10; i <= 99; ++i) {
        int a = i / 10; // hang chuc
        int b = i % 10; // hang dv
        if (a * b == 2 * (a + b)) cout << i << " ";
    }
    cout << endl;
    return 0;
}