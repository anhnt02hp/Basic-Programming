#include <bits/stdc++.h>
using namespace std;

int main() {
    //Input number n;
    int n;
    cout << "Enter a number n: ";
    cin >> n;

    //sum of all digit
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }

    //Ouput
    cout << "Sum of all digits of n is: " << sum << endl;
    return 0;
}