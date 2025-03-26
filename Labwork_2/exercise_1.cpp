#include <bits/stdc++.h>
using namespace std;

int main() {
    //Input C degree
    float C;
    cout << "Enter the temperature in Celsius degree: C = ";
    cin >> C;

    //Convert C to F
    float F = C * 9 / 5 + 32;

    //Output F degree
    cout << "The temperature in Fahrenheit degree is: F = " << F << endl;
    return 0;
}