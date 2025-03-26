#include <bits/stdc++.h>
using namespace std;

int main() {
    //Input n
    int n;
    cout << "Enter n: ";
    cin >> n;

    //calculate sum of series
    float sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += 1.0 / i;
    }

    //Output sum
    cout << "Sum of the series is: " << sum << endl;
    return 0;
}