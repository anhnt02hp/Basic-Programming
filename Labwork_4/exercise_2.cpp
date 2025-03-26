#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    while(b > 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int main() {
    //Input 4 numbers
    int a, b, c, d;
    cout << "Enter 4 numbers: ";
    cin >> a >> b >> c >> d;

    //GCD of 4 numbers
    int gcd_ab = gcd(a, b);
    int gcd_cd = gcd(c, d);
    int gcd_abcd = gcd(gcd_ab, gcd_cd);
    
    cout << "GCD of " << a << ", " << b << ", " << c << ", " << d << " is " << gcd_abcd << endl;
    return 0;
}