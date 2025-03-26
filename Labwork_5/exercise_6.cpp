#include <bits/stdc++.h>
using namespace std;

int main() {
    //Intput string
    char str[100];

    //Input string from keyboard
    cout << "Enter a string: ";
    cin.getline(str, 100);

    //Print reverse string
    cout << "Reverse string: ";
    for (int i = strlen(str) - 1; i >= 0; i--) {
        cout << str[i];
    }
    return 0;
}