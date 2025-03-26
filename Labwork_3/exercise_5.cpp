#include <bits/stdc++.h>
using namespace std;

int main() {
    //Input n
    int n;
    cout << "Enter n: ";
    cin >> n;

    //Print all fibonacci numbers less than n
    int a = 0, b = 1, c = 0;
    while (c < n) {
        cout << c << " ";
        a = b;
        b = c;
        c = a + b;
    }
    return 0;
}