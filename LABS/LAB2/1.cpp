#include <iostream>
#include <cmath>
#include <string>
using namespace std;

bool IsPalindrome(int n) {
    string s = to_string(n);
    int left = 0, right = s.length() - 1;
    while (left < right) {
        if (s[left] != s[right]) return false;
        left++;
        right--;
    }
    return true; 
}

bool IsPerfectSquare(int n) {
    int sqrtN = sqrt(n);
    return sqrtN * sqrtN == n;
}

bool IsPrime (int n) {
    if (n < 2) return false;
    if (n == 2) return true;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}


int main () {
    int n;
    cin >> n;

    cout << "\nCo phai so doi xung: ";
    (IsPalindrome(n))? cout << "True" : cout << "False"; 
    cout << "\nCo phai so chinh phuong: ";
    (IsPerfectSquare(n))? cout << "True" : cout << "False"; 
    cout << "\nCo phai so nguyen to: ";
    (IsPrime(n))? cout << "True" : cout << "False"; 

    string s = to_string(n);
    char maxDigit = s[0], minDigit = s[0];
    for (char c : s) {
        maxDigit = max(maxDigit, c);
        minDigit = min(minDigit, c);
    }
    cout << "\nChu so lon nhat la: " << maxDigit << endl;
    cout << "Chu so nho nhat la: " << minDigit << endl;

    bool isIncreasing = true, isDecreasing = true;
    for (int i = 1; i < s.length(); i++) {
        if (s[i] > s[i - 1]) isDecreasing = false;
        else if (s[i] < s[i - 1]) isIncreasing = false;
    }
    if (isIncreasing) cout << "Cac chu so tang dan." << endl;
    else if (isDecreasing) cout << "Cac chu so giam dan." << endl;
    else cout << "Cac chu so khong tang dan cung khong giam dan." << endl;
    
    return 0;
}