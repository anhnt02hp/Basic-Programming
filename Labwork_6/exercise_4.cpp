#include <bits/stdc++.h>
using namespace std;

int main() {
    //Input number of element array
    int n; cin >> n;

    //Declare array a
    int *arr = new int[n];

    //Input value in array
    for(int i = 0; i <= n - 1; i++){
        cin >> arr[i];
    }

    //Cout array
    for(int i = 0; i <= n - 1; i++){
        cout << *(arr + i) << " ";
    }

    delete[] arr;
    
    return 0;
}