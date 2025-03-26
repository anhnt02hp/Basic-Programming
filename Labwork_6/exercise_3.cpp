#include <bits/stdc++.h>
using namespace std;

int main() {
    //Input array
    int a[] = {7, 8, 3, 5};

    //Input pointer
    int *ptr = a; //Save diachi of the first element 

    cout << "Array by using pointer: " << endl;
    for(int i = 0; i <= sizeof(a)/sizeof(a[0]) - 1; i++){
        cout << *(ptr + i) << " ";
    }
    cout << endl;
    return 0;
}