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

int myStrcmp(char s1[], char s2[]) {
    int i = 0;
    while (s1[i] != '\0' && s2[i] != '\0') {
        if (s1[i] != s2[i]) return s1[i] - s2[i];
        i++;
    }
    return s1[i] - s2[i];
}

int myStrlen(char s[], int k) {
    int length = 0;
    while (s[k + length] != '\0') {
        length++;
    }
    return length;
}

void myStrcpy(char s[], int vt, char s1[], int k) {
    for (int i = 0; i < k; ++i) {
        s1[i] = s[vt + i];
    }
    s1[k] = '\0';
}

void mySubstr(char s[], int b, int count, char ss[]) {
    for (int i = 0; i < count; ++i) {
        ss[i] = s[b + i];
    }
    ss[count] = '\0';
}

bool myStrcat(char s1[], char s2[]) {
    int i = 0;
    while (s1[i] != '\0') i++;
    int j = 0;
    while (s2[j] != '\0') {
        s1[i] = s2[j];
        i++;
        j++;
    }
    s1[i] = '\0';
    return true;
}

void StringReverse(char st[]) {
    int len = myStrlen(st, 0);
    char temp[MAX];
    int j = 0;
    char result[MAX] = "";

    for (int i = 0; i <= len; ++i) {
        if (st[i] == ' ' || st[i] == '\0') {
            temp[j] = '\0';
            for (int k = 0; k < j / 2; ++k) {
                char t = temp[k];
                temp[k] = temp[j - k - 1];
                temp[j - k - 1] = t;
            }
            myStrcat(result, temp);
            if (st[i] == ' ') {
                myStrcat(result, (char *)" ");
            }
            j = 0;
        } else {
            temp[j++] = st[i];
        }
    }
    myStrcpy(result, 0, st, myStrlen(result, 0));
}