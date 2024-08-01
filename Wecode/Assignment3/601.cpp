#include <iostream>
using namespace std;
#define MAX 100

void Nhapmang(int a[], int &n) {
    for (int i = 0; i < n; i++) cin >> a[i];
}

bool isBenford(int a[], int n) {
    int count[10] = {0}; // Mảng đếm tần suất các chữ số đầu tiên

    for (int i = 0; i < n; i++) {
        int num = a[i];
        while (num >= 10) num /= 10;
        count[num]++;
    }
    return count[1] == 3 && count[4] == 1;
}

int main()
{
	int a[MAX], n = 10;
	Nhapmang(a, n);
	if (isBenford(a, n) == true)
		cout << "TRUE" << endl;
	else
		cout << "FALSE" << endl;
	return 0;
}
