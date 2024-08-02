// #include <iostream>
// using namespace std;
// #define MAX 1000

// bool IsFrobeniusMatrix(float a[][MAX], int n) {
//     for (int i = 0; i < n; i++) {
//         if (a[i][i] != 1) {
//             return false;
//         }
//     }
//     int count_cols = 0;
//     for (int j = 1; j < n; j++) {
//         bool has_non_zero_below = false;
//         for (int i = j + 1; i < n; i++) {
//             if (a[i][j] != 0) {
//                 has_non_zero_below = true;
//                 break;
//             }
//         }
//         if (has_non_zero_below) {
//             count_cols++;
//         }
//     }

//     return count_cols <= 1;
// }

// int main() {
//     float a[MAX][MAX];
//     int n;
//     cin >> n;

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             cin >> a[i][j];
//         }
//     }

//     if (IsFrobeniusMatrix(a, n)) cout << "Yes" << endl;
//     else cout << "No" << endl;

//     return 0;
// }

#include <iostream>
#include <vector>

using namespace std;

void NhapMaTran(vector<vector<double>>& matrix, int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
        }
    }
}

bool isFrobeniusMatrix(const vector<vector<double>>& matrix, int n) {
    for (int i = 0; i < n; ++i) {
        if (matrix[i][i] != 1.0) {
            return false;
        }
    }

    int nonZeroColumns = 0;
    int specialCol = -1;
    for (int j = 0; j < n; ++j) {
        bool hasNonZeroBelowDiagonal = false;
        for (int i = j + 1; i < n; ++i) {
            if (matrix[i][j] != 0.0) {
                hasNonZeroBelowDiagonal = true;
                break;
            }
        }
        if (hasNonZeroBelowDiagonal) {
            nonZeroColumns++;
            specialCol = j;
        }
    }

    if (nonZeroColumns > 1) {
        return false;
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i != j && j != specialCol && matrix[i][j] != 0.0) {
                return false;
            }
        }
    }

    return true;
}

int main() {
    int n;
    cin >> n >> n;

    vector<vector<double>> matrix(n, vector<double>(n));
    NhapMaTran(matrix, n);

    if (isFrobeniusMatrix(matrix, n)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}