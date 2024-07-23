#include <iostream>
using namespace std;

int main () {
    int age;
    char gender;
    cin >> age >> gender;

    if  (age <= 100 && age > 0) {
        if (age >= 21) {
            if (gender == 'M' || gender == 'm') cout << "1";
            else if (gender == 'F' || gender == 'f') cout << "2";
            else cout << "I do not know why";
        }
        else if (age < 21) {
            if (gender == 'M' || gender == 'm') cout << "3";
            else if (gender == 'F' || gender == 'f') cout << "4";
            else cout << "I do not know why";
        }
    }
    return 0;
}