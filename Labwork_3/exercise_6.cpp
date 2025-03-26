#include <bits/stdc++.h>
using namespace std;

int main() {
    //Input n
    int n;
    cout << "Enter n: ";
    cin >> n;

    //factorial of n
    int factorial = 1;
    for(int i = 1; i <= n; i++){
        factorial *= i;
    }

    cout << "Factorial of " << n << " is: " << factorial << endl;
    return 0;
}