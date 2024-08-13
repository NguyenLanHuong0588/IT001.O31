#include <iostream>
#include <string>
using namespace std;
#define MAX 255

int myStrlen(char s[]);
bool myStrcat(char s1[], char s2[]);

int main()
{
	char s1[MAX], s2[MAX];
	cin.getline(s1,MAX);
	cin.getline(s2,MAX);
	bool kt = myStrcat(s1, s2);

    if (kt) cout << s1;
    else cout << "Khong noi duoc. Khong du bo nho.";
}

int myStrlen(char s[]) {
    int l = 0;
    while (s[l] != '\0') l++;
    return l;
}

bool myStrcat(char s1[], char s2[]) {
    int l1 = myStrlen(s1);
    int l2 = myStrlen(s2);
    if (l1 + l2 >= MAX) return false;

    for (int i = 0; i <= l2 - 1; i++) s1[l1 + i] = s2[i];
    s1[l1 + l2] = '\0';
    return true;
}

