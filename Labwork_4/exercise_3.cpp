#include <bits/stdc++.h>
using namespace std;

float f_x(float x){
    return 2.5 * x;
}

float g_xy(float x, float y){
    return x * y;
}

int main() {
    //Input 2 values x and y
    float x, y;
    cout << "Enter x, y: ";
    cin >> x >> y;

    //Calculate f(x) and g(x, y)
    cout << "f(x) = " << f_x(x) << endl;
    cout << "g(x, y) = " << g_xy(x, y) << endl;
    return 0;
}