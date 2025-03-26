#include <bits/stdc++.h>
using namespace std;

int main() {
    //Create a string of 100 characters
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);

    //Count the number a letter appears
    int cnt = 0;
    for (int i = 0; i <= strlen(str) - 1; i++){
        if(str[i] == 'a'){
            cnt++;
        }
    }

    //print output
    cout << "The number of 'a' in the string is: " << cnt << endl;
    return 0;
}