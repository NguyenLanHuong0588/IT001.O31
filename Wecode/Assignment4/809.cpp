#include <iostream>
#include <string.h>
using namespace std;
#define MAX 255

int myStrcmp(char s1[], char s2[]);

int main()
{
	char s1[MAX], s2[MAX];
	cin.getline(s1,MAX);
	cin.getline(s2,MAX);
	int kt = myStrcmp(s1, s2);
	cout << kt << endl;
	return 0;
}


int myStrcmp(char s1[], char s2[]) {
    int l1 = 0, l2 = 0;
    while (s1[l1] != '\0') l1++;
    while (s2[l2] != '\0') l2++;
    if (l1 < l2) return -1;
    if (l1 > l2) return 1;
    
    for (int i = 0; i < l1; i++) {
        if (s1[i] < s2[i]) return -1;
        if (s1[i] > s2[i]) return 1;
    }
    return 0;
}