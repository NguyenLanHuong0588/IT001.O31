#include <iostream>
using namespace std;


int removeElements(int a[], int n, int p, int k) {
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (i < p || i >= p + k) {
            a[j] = a[i];
            j++;
        }
    }
    return j; 
}

int main() {
    int a[100], n, p, k;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    cin >> p >> k;
    int j = removeElements(a, n, p, k);

    for (int i = 0; i < j; i++) cout << a[i] << " ";

    return 0;
}
