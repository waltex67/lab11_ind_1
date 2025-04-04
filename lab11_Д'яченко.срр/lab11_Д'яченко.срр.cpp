#include <iostream>
#include <windows.h>

using namespace std;

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int a, b;

    cout << "Введіть два цілих числа: ";
    cin >> a >> b;

    int* pa = &a;
    int* pb = &b;

    if (*pa > *pb) {
        *pa = *pa * 5;
        *pb = *pb - 5;
    }
    else {
        *pb = *pb * 5;
        *pa = *pa - 5;
    }

    cout << "Значення після обробки:\n";
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}