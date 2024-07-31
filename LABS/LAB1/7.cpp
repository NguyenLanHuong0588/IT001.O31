#include <iostream>
using namespace std;

int main () {
    float d, s = 0;
    cin >> d;
    if (d <= 0) cout << "Not valid";
    else if (d <= 1) s = 15000;
    else if (d <= 5) s = 15000 + (d - 1) * 13500;
    else s = 15000 + 4 * 13500 + (d - 5) * 11000;

    if (d > 120) s *= 0.9;

    cout << "Total cost: " << s << "vnd";

    return 0;
}