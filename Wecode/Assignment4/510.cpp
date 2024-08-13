#include <iostream>
using namespace std;
// int modulo(int m, int n){
//     if (m < n) return m;
//     else return modulo(m - n, n);
// }


// int main (){
//     int m, n; cin >> m >> n;
// 	cout << modulo(m, n);
// }

int main () {
    int n = 10;
    int *ptr = &n;
    *ptr = 50;
    cout << *ptr;
    return 0;
}