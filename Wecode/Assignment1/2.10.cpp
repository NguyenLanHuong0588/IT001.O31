#include <iostream>
using namespace std;

bool IsLeapYear (int nm) {
    return (nm % 4 == 0 && nm % 100 != 0) || (nm % 400 == 0);
}

bool ValidYear (int nm) {
    return nm > 0;
}

bool ValidMonth(int th) {
    return th >= 1 && th <= 12;
}

bool ValidDate (int ng, int th, int nm) {
    int DayInMonth [] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (IsLeapYear (nm)) DayInMonth[2] = 29;
    if (th < 1 || th > 12) return false;
    return ng>=1 && ng <= DayInMonth[th];
}

int main () {
    int ng, th, nm;
    cin >> ng >> th >> nm;
    if (!ValidYear(nm)) cout << "Nam khong hop le.";
    else if (!ValidMonth(th)) cout << "Thang khong hop le.";
    else if (!ValidDate(ng, th, nm)) cout << ng << "/" << th << "/" << nm << " la ngay khong hop le." << endl;
    else cout << ng << "/" << th << "/" << nm << " la ngay hop le." << endl;
    return 0;
}