#include <bits/stdc++.h>
using namespace std;

int factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}

int main() {
    //Input n
    int n;
    cout << "Enter n: ";
    cin >> n;

    //Calculate n!
    cout << n << "! = " << factorial(n) << endl;
    return 0;
}