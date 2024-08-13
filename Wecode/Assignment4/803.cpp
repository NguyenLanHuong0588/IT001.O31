#include <iostream>
#include <string>

using namespace std;

string ChuanHoaCau(string s) {
    s.erase(0, s.find_first_not_of(" "));
    s.erase(s.find_last_not_of(" ") + 1);

    bool IsFirstLetter = true;
    for (char& c : s) {
        if (isspace(c)) IsFirstLetter = true;
        else {
            if (IsFirstLetter) {
                if (c >= 'a' && c <= 'z') c = c - 'a' + 'A';
                IsFirstLetter = false;
            } else {
                
                if (c >= 'A' && c <= 'Z') c = c - 'A' + 'a';
            }
        }
    }

    return s;
}

int main() {
    string s;
    cout << "Nhap chuoi: ";
    getline(cin, s);

    string kq = ChuanHoaCau(s);
    cout << kq << endl;

    return 0;
}