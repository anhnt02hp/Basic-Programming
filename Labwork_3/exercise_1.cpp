#include <bits/stdc++.h>
using namespace std;

int main() {
    //enter n
    int n;
    cout << "Enter n: ";
    cin >> n;

    //find all divisor of n
    cout << "All divisors of " << n << " are: ";
    for (int i = 1; i <= n/2; i++){
        if (n % i == 0){
            cout << i << " ";
        }
    }
    return 0;
}