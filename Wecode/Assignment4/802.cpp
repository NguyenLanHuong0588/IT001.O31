#include <iostream>
#include <cstring>
using namespace std;
#define MAX 300

void normalizeSentence(char s[]);

int main()
{
    char s[MAX];
    cin.getline(s, MAX);
    cout << s << endl;
    normalizeSentence(s);
    cout << s << endl;
    return 0;
}

void normalizeSentence(char s[])
{
    int length = 0;
    while (s[length] != '\0') {
        length++;
    }
    
    // Duyệt qua chuỗi từ trái qua phải
    for (int i = 0; i < length; ++i) {
        if (s[i] == '.' && (i > 0 && s[i-1] == ' ')) {
            int j = i - 1;
            while (j >= 0 && s[j] == ' ') {
                j--;
            }
            if (j >= 0 && s[j] != '.') {
                int k = i;
                while (s[k] != '\0') {
                    s[j + 1] = s[k];
                    j++;
                    k++;
                }
                s[j + 1] = '\0';
                length = strlen(s);
            }
        }
    }

    for (int i = 0; i < length; ++i) {
        if (s[i] == '.' && (i + 1 < length && s[i + 1] != ' ')) {
            int j = length;
            while (j >= i + 1) {
                s[j + 1] = s[j];
                j--;
            }
            s[i + 1] = ' ';
            length++;
            i++;
        }
    }

    if (length > 0 && s[length - 1] == ' ') {
        s[length - 1] = '\0';
    }
}