#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main() {
    //input a, b, c
    float a, b, c;
    cout << "Enter a, b, c: ";
    cin >> a >> b >> c;

    //define expression f
    float f;
    f = 3 * a  - pow(b, 3) - 2 * sqrt(c);

    //calculate output f
    cout << "f = " << f << endl;
    return 0;
}