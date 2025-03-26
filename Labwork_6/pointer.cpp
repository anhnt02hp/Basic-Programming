#include <bits/stdc++.h>
using namespace std;

int main() {
    int a = 100;
    int *ptr; // Gán giá trị ban đầu cho con trỏ

    if(ptr == nullptr) {
        cout << "Con tro null ! \n";
    }

    //gan gia tri cua con tro ptr1 vao bien a
    //int *ptr1;
    //ptr1 = &a;
    int *ptr1 = &a;

    //in ra dia chi cua bien a
    cout << "Dia chi cua bien a: " << &a << endl;
    cout << "Gia tri cua con tro: " << ptr1 << endl;

    //in ra gia tri cua bien a
    cout << "Gia tri cua bien a: " << a << endl;
    cout << "Gia tri cua bien ma con tro dang tro toi: " << *ptr1 << endl;

    //Sau 2 câu lệnh: int *ptr; và ptr = &a; thì a có thể coi là *ptr, nếu 1 trong 2 a và *ptr bị thay đổi thì giá trị của biến còn lại cũng thay đổi
    cout << a << " " << *ptr1 << endl; // 100 100
    (*ptr1)++; 
    cout << a << " " << *ptr1 << endl; // 101 101

    //MQH giua con tro va mang
    int arr[100]; //a duoc goi la hằng con trỏ
    cout << arr << endl; //in ra địa chỉ của phần tử đầu tiên của mảng
    

    return 0;
}
