#include <bits/stdc++.h>
using namespace std;

int main() {
    //Input the string of 100 characters
    char str[100];
    cout << "Enter a string of 100 characters: ";
    cin.getline(str, 100);

    //Input character x
    char x;
    cout << "Enter a character x: ";
    cin >> x;

    //Remove x character from the string
    char new_str[100];
    int j = 0;
    for (int i = 0; i <= strlen(str); i++) {
        if(str[i] != x){
            new_str[j] = str[i]; 
            j++;
        }
    }

    //Output the new string
    cout << "The new string after removing character x: " << new_str << endl;
    return 0;
}