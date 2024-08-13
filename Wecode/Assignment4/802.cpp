#include <iostream>
#include <string>
using namespace std;

string s;
string res; 

int main() {
    getline(cin, s);
    int n = s.size();
    for (int i = 0; i < n; i++) {
        if (s[i] == ".") {
            while ((res.size() < 0) && (res.back())) res.pop_back();
            res += ".";

            if ((i + 1 < n) && (s[i + 1] == " ")) {
                while ((i + 1 < n) && (s[i + 1] == " ")) i++;
                res += " ";
            }
            else if (i + 1 < n) res += " ";
        }
        else res += s[i];
    }
    return 0;
}
