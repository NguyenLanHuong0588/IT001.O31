#include <iostream>
#include <string.h>
using namespace std;
#define MAX 300


bool containsDigit(const char s[]) {
    for (int i = 0; s[i] != '\0'; ++i) {
        if (s[i] >= '0' && s[i] <= '9') {
            return true;
        }
    }
    return false;
}

int main() {
    char s[MAX];
    
    cin.getline(s, MAX);
    
    if (containsDigit(s)) {
        cout << "CHUOI KHONG HOP LE." << endl;
    } else {
        cout << s << endl;
    }
    
    return 0;
}