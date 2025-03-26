#include <bits/stdc++.h>
using namespace std;

int x_pow_n (float x, float n){
    if (n == 0) return 1;
    if (n == 1) return x;
    return x * x_pow_n(n - 1, x);
}

int main() {
    //Input x and n
    float x, n;
    cout << "Enter x, n: ";
    cin >> x >> n;

    //Output x^n
    cout << x << "^" << n << " = " << x_pow_n(x, n) << endl;
    return 0;
}