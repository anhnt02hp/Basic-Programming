#include <bits/stdc++.h>
using namespace std;

int main() {
    //input x
    float x;
    cout << "Enter x: x = ";
    cin >> x;

    //polynomial
    //define value a,b,c
    int a = 1;
    int b = 2;
    int c = 1;
    //define polynomial y
    float y;
    y = a * x * x + b * x + c;

    //Calculate y value
    cout << "y = " << y << endl;
    return 0;
}