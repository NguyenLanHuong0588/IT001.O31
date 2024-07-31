#include <iostream>
#include <cmath>
using namespace std;

float factorial(float n) {
    if (n == 0 || n == 1) return 1; 
    else return n * factorial(n - 1);
}

int main() {
    unsigned long n, x;
    cin >> n >> x;
    float s1 = 1;
    float s2 = 1;
    float s3 = 1;
    
    for (int i = 1; i <= n; i++) {
        s1 += pow(x, i);
        s2 += pow(x, 2 * i);
        s3 += pow(x, i) / factorial(i);
    }
    cout << s1 << endl << s2 << endl << s3;
    return 0;
}