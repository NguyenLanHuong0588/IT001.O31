#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int s, n;
    cin >> s;
    do {
        cin >> n;
        if (n % 10 != 0) continue;
        s += n;
    } while (s < 110);
    cout << s;
    return 0; 
}

// 21 55 42 30 9 10 15 -10 50 7 -30 50 8 20