#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double a;
    int n;
    cin >> a >> n;
    double kq = (double)round(a*n)/n;
    cout << fixed << setprecision(10) << kq << endl;

    return 0;
}
