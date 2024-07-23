#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double a;
    int n;
    cin >> a >> n;

    double kq = round(a*n);
    a = kq / n;

    cout.precision(10); 
    cout << a << endl;

    // cout << fixed << setprecision(10) << a << endl;


    return 0;
}


// int main() {
//     int n;
//     double a;
//     cin >> a >> n;
    
    // ((int(a*n+0.5)%n)==0 ) ? (cout << int (a)) : (( int(a*n+0.5) < n ) ? (cout<< int(double(a)*n+0.5)%n << "/" << n) : (cout << int(a) << " " << int(double(a)*n+0.5)%n << "/" << n)) ;

// }

// void RoundingNumbers(double a, int n) {
//     if ((int(floor(a * n)) / n) % n == 0) {
//         cout << double(floor(a * n)) / n;
//     } else if ((int(floor(a * n)) / n) % n < 0) {
//         cout << double(floor(a * n)) / n;
//     } else {
//         int res = int(double(floor(a * n) + 1) / n), count = 0;
//         while (res != 0) {
//             res /= 10;
//             count++;
//         }
//         cout << fixed << setprecision(10 - count) << double(floor(a * n) + 1) / n;
//     }
// }

// int main() {
//     int n;
//     double a;
//     cin >> a >> n;
//     RoundingNumbers(a, n);
//     return 0;
// }


// The floor() function in C++ is a mathematical function that helps you find the largest integer value that is less than or equal to a given floating-point number. In other words, it rounds down the input value to the nearest integer that is not greater than the original value.

// Here’s how it works:

// - If you call floor(x) where x is a positive floating-point number (e.g., 3.78), it will return the largest integer less than or equal to x. For example:
// floor(3.78) evaluates to 3.
// - If you call floor(x) where x is a negative floating-point number (e.g., -2.5), it will still return the largest integer less than or equal to x. For example:
// floor(-2.5) evaluates to -3.
// - If you call floor(x) where x is already an integer (e.g., 7.0), it simply returns the same integer value. For example:
// floor(7.0) evaluates to 7.


// floor(a): Lấy số nguyên lớn nhất nhưng bé hơn a
// Ceil(a): lấy số nguyên bé nhất nhưng lớn hơn a