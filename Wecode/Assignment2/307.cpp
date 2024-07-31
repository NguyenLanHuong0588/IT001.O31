#include <iostream>
#include <math.h>
using namespace std;

int main (){
    int n;
    cin >> n;
    float pi = 0.0;
    for (int i = 0; i <= n; i++) {
        pi += (1.0/ (2 * i + 1)) * pow(-1,i);
}
    pi *= 4;
    cout << pi;
    return 0;
}