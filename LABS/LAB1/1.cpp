#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    if (n > 0 && n < 10) cout << "You just entered number: " << n << endl;
    else cout << "What number is that :)?" << endl;
    return 0;
}