#include <bits/stdc++.h>
using namespace std;

int main() {
    //input a, b, c
    float a, b, c;
    cout << "Enter a, b, c: ";
    cin >> a >> b >> c;

    //Find Max in 3 numbers
    float max_num = a;
    if (b > max_num) {
        max_num = b;
    }
    if (c > max_num) {
        max_num = c;
    }

    //Find Min in 3 numbers
    float min_num = a;
    if (b < min_num) {
        min_num = b;
    }
    if (c < min_num) {
        min_num = c;
    }

    //Print out put
    cout << "Max number: " << max_num << endl;
    cout << "Min number: " << min_num << endl;
    return 0;
}