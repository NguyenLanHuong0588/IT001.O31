
#include <iostream>
#include <math.h>
using namespace std;
#define MAX 100

void NhapmangSNT(int a[], int &n);
int SoPhanTuChuaY(int a[], int n,int y);

bool IsPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

void NhapmangSNT(int a[], int &n) {
    int i = 2;
    cin >> n;
    for (int j = 0; j < n; j++) {
        while (!IsPrime(i)) {
            i++;
        }
        a[j] = i;
        i++;
    }
}

int SoPhanTuChuaY(int a[], int n, int y) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        int temp = a[i];
        while (temp > 0) {
            if (temp % 10 == y) {
                count++;
                break;
            }
            temp /= 10;
        }
    }
    return count;
}

int main()
{
	int a[MAX], n, y;
	cin >>y;
	NhapmangSNT(a,n);
	cout << SoPhanTuChuaY(a, n, y) << endl;;
	return 0;
}