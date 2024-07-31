#include <iostream>
using namespace std;

int main () {
    int m, y;
    cin >> m >> y;
    if (m < 1 || m > 12)  cout << "Invalid data";
    else {
        int d;
        switch (m) {
            case 2:
                if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) d = 29;
                else d = 28;
                break;
            case 4:
            case 6:
            case 8:
            case 11:
                d = 30;
                break;
            default:
                d = 31;
        }
        cout << m << "/" << y << " has total " << d << " days in month";
    }
    
    return 0;
}