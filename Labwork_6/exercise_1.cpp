#include <bits/stdc++.h>
using namespace std;

int main() {
    //Input 2 number
    int a, b;
    cin >> a >> b;
    //Input 2 pointers to 2 numbers
    int *ptr_a = &a;
    int *ptr_b = &b;

    //Sum of the two numbers by pointer
    int sum;
    sum = *ptr_a + *ptr_b;
    cout << "The sum of 2 number by pointer is: " << sum << endl;
}