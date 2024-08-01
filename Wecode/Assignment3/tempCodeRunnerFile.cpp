#include <iostream>
using namespace std;
#define MAX 1000

bool IsFrobeniusMatrix(float a[][MAX], int n) {
    bool specialColumn = false;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i == j) {
                // Kiểm tra đường chéo chính
                if (a[i][j] != 1) return false;
            } else {
                // Kiểm tra các phần tử khác
                if (a[i][j] != 0) {
                    if (specialColumn) return false;
                    specialColumn = true;
                }
            }
        }
    }

    return true;
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