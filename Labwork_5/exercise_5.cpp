#include <bits/stdc++.h>
using namespace std;

int main() {
    //Input size of matrin
    int n;
    cout << "Enter size of matrix: ";
    cin >> n;
    int a[n][n];

    //Input elements of matrix
    cout << "Enter elements of matrix: " << endl;
    for (int i = 0; i < n; i++) {
        cout << "Enter elements of row " << i + 1 << ": ";
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    //Sum of all elements of matrix
    int sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            sum += a[i][j];
    }
    //Output sum of all elements of matrix
    cout << "Sum of all elements of matrix: " << sum << endl;

    //Transpose of matrix
    cout << "Transpose of matrix: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << a[j][i] << " ";
        cout << endl;
    }
    return 0;
}