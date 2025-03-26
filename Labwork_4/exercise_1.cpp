#include <bits/stdc++.h>
using namespace std;

// int gcd(int a, int b) {
//     if (b == 0) return a;
//     return gcd(b, a % b);
// }

int gcd(int a, int b) {
    while (b != 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int main() {
    //Input 2 numbers
    int a, b;
    cout << "Enter 2 numbers: ";
    cin >> a >> b;

    //Output the greatest common divisor of 2 numbers
    cout << "Greatest common divisor of " << a << " and " << b << " is: " << gcd(a, b) << endl;
    return 0;
}