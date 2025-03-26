#include <bits/stdc++.h>
#define PI 3.14159

using namespace std;

int main() {
    //input r
    float r;
    cout << "Enter radius r: r = ";
    cin >> r;

    //Calculate perimeter
    float p;
    p = 2 * PI * r;

    //Calculate area
    float s;
    s = PI * r * r;

    //Print
    cout << "Perimeter of the circle: P = " << p << endl;
    cout << "Area of the circle: S = " << s << endl;
    return 0;
}