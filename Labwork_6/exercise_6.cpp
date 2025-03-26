#include <bits/stdc++.h>
using namespace std;

int add(int a, int b){
    return a + b;
}

int main() {
    int (*ptr)(int, int); //khai bao con tro prt la 1 con tro tro den 1 ham co 2 tham so voi kdl la int voi kdl tra ve cua ham la int

    //gan dia chi ham add vao con tro prt
    ptr = add;

    //goi ham thong qua con tro
    int result = (*ptr)(5, 10);

    cout << result;
    return 0;
}