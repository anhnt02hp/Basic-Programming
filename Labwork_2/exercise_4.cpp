#include <bits/stdc++.h>
using namespace std;

int main() {
    //Enter a year
    int year;
    cout << "Enter a year: ";
    cin >> year;

    //Check if the year is a leap year
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        cout << year << " is a leap year" << endl;
    } else {
        cout << year << " is not a leap year" << endl;
    }

    //ouput the result
    cout << year << " is a leap year" << endl;
    return 0;
}