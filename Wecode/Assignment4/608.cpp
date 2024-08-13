#include <iostream>
using namespace std;

int NewSizeArr(int a[], int n, int x) {
    int j = 0, temp[n];
    for (int i = 0; i < n; i++) {
        if (a[i] != x) {
            temp[j] = a[i];
            j++;
        }
    }
    for (int i = 0; i < j; i++) {
        a[i] = temp[i];
    }
    return j;
}

int main() {
    int a[100], n, x;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    cin >> x;
    n = NewSizeArr(a, n, x);
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    return 0;
}