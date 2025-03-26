#include <bits/stdc++.h>
using namespace std;

int main() {
    //Enter number
    int n;
    cout << "Enter number: ";
    cin >> n;

    //Find all prime factors
    cout << "Prime factors: ";
    for (int i = 2; i <= n; i++) {
        while (n % i == 0) {
            cout << i << " ";
            n /= i;
        }
    }
    return 0;
}