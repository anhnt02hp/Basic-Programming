#include <bits/stdc++.h>
using namespace std;

int main() {
    //Input 2 numbers
    int a, b;
    cin >> a >> b;

    //Input 2 pointers manage 2 numbers
    int *ptr_a = &a;
    int *ptr_b = &b;

    //swap 2 value a, b by using pointer
    int tmp = *ptr_a;
    *ptr_a = *ptr_b;
    *ptr_b = tmp;

    //Outpout
    cout << a << " " << b << endl;

    return 0;
}