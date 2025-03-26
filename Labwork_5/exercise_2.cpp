#include <bits/stdc++.h>
using namespace std;

int main() {
    //Enter n = number of array
    int n;
    cout << "Enter n: ";
    cin >> n;

    //Enter array with value from 1 to n
    int a[n];
    for(int i = 1; i <= n; i++){
        a[i] = i;
    }

    //Sum of all odd and even numbers in the array
    int sum_odd = 0, sum_even = 0;
    for(int i = 1; i <= n; i++){
        if(a[i] % 2 == 0){
            sum_even += a[i];
        } else {
            sum_odd += a[i];
        }
    }

    //print the sum of all odd and even numbers in the array
    cout << "Sum of all odd numbers in the array: " << sum_odd << endl;
    cout << "Sum of all even numbers in the array: " << sum_even << endl;
    return 0;
}