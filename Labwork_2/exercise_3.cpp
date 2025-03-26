#include <bits/stdc++.h>
using namespace std;

int main() {
    //input 2 numbers
    float a, b;
    cout << "Enter 2 numbers: ";
    cin >> a >> b;

    //swap the values of a and b
    float c;
    c = a;
    a = b;
    b = c;

    //output the swapped values
    cout << "Swapped values: " << a << " " << b << endl;
    return 0;
}