#include <iostream>
#include <cmath>
using namespace std;

int main() {
    unsigned long n;
    cin >> n;
    float s1 = 0;
    float s2 = 0;
    float s3 = 0;
    unsigned long p = 1;
    float j = 0;
    
    for (unsigned long i = 1; i <= n; i++) {
        p *= i;
        j += i;
        s1 += pow(i, i);
        s2 += p;
        s3 += 1.0 / j;
    }
    cout << s1 << endl << s2 << endl << s3;
    return 0;
}