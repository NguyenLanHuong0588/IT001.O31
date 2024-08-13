
#include <iostream>
#include <string.h>
using namespace std;
#define MAX 300

int myStrcmp(char s1[], char s2[]);
int myStrlen(char s[], int k);
void myStrcpy(char s[], int vt, char s1[], int k);
void mySubstr(char s[], int b, int count, char ss[]);
bool myStrcat(char s1[], char s2[]);
void StringReverse(char st[]);

int main()
{
	char s[MAX];
	cin.getline(s,MAX);
	if (myStrcmp(s, "") == 0)
		cout << "Chuoi rong." << endl;
	else
	{
		StringReverse(s);
		cout << s << endl;
	}
	return 0;
}

int myStrlen(char s[], int k) {
    int l = k;
    while (s[l] != '\0') l++;
    return l;
}

void subStringReverse (char st[], int u, int v) {
    int L = u, R = v;
    while (L < R) {
        char temp = st[L];
        st[L] = st[R];
        st[R] = temp;

        L++;
        R++; 
    }
}

void StringReverse(char st[]) {
    int n = myStrlen(st, 0);
    for (int i = 0; i < n; i++) {
        if (st[i] == " ") i++;
        else {
            int j = i;
            while ((j < n) && (st[j] != " ")) j++;
            subStringReverse (st, i, j - 1);
            i = j;
        }
    }
}