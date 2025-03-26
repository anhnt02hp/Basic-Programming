#include <bits/stdc++.h>
using namespace std;

int main() {
    //Input array a
    int a[5] = {1, 2, 3, 4, 5};

    //find maximum element and minimum element in array a
    int max = a[0], min = a[0];
    for (int i = 1; i <= 4; i++ ){
        if (a[i] > max) max = a[i];
        if (a[i] < min) min = a[i];
    }

    //Output maximum element and minimum element in array a
    cout << "Maximum element in array a: " << max << endl;
    cout << "Minimum element in array a: " << min << endl;
    return 0;
}