#include <iostream>
using namespace std;
#define MAX 1000

bool IsFrobeniusMatrix(float a[][MAX], int n) {
    for (int i = 0; i < n; i++) {
        if (a[i][i] != 1) {
            return false;
        }
    }
    int count_cols = 0;
    for (int j = 1; j < n; j++) {
        bool has_non_zero_below = false;
        for (int i = j + 1; i < n; i++) {
            if (a[i][j] != 0) {
                has_non_zero_below = true;
                break;
            }
        }
        if (has_non_zero_below) {
            count_cols++;
        }
    }

    return count_cols <= 1;
}

int main() {
    float a[MAX][MAX];
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    if (IsFrobeniusMatrix(a, n)) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}