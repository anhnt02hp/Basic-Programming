#include <bits/stdc++.h>
using namespace std;

int main() {
    //Input array
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    //Sum of all elements in the array
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    //Output
    cout << "Sum of all elements in the array: " << sum << endl;
    return 0;
}