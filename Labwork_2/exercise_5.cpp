#include <bits/stdc++.h>
using namespace std;

int main() {
    //input 6 value 
    float a, b, c, d, e, f;
    cout << "Enter 6 values: ";
    cin >> a >> b >> c >> d >> e >> f;

    //Solve for value x and y
    float x = (c * e - b * f) / (a * e - b * d);
    float y = (a * f - c * d) / (a * e - b * d);

    //Output the result
    if(a == d && b == e && c == f) {
        cout << "The equation has infinitely many solutions";
    } else {
        if (a * e - b * d == 0) {
            cout << "The equation has no solution";
        } else {
            cout << "x = " << x << ", y = " << y;
        }
    }

    return 0;
}