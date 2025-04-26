#include <iostream>
using namespace std;

// Hàm ð? quy tính s? Fibonacci
long long fibonacci(int n) {
    if (n <= 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    bool check = false;

    // check input
    while (!check) {
        cout << "Nhap so nguyen duong n (n <= 30): ";
        if (cin >> n) {
            if (n > 0 && n <= 30) {
                check = true;
            } else {
                cout << "n phai lon hon 0 va nho hon hoac bang 30. Vui long nhap lai!" << endl;
            }
        } else {
            cout << "Vui long nhap mot so nguyen. Vui long nhap lai!" << endl;
            cin.clear();
            cin.ignore(10000, '\n');
        }
    }

    // display fibonacci
    cout << "Day Fibonacci tu F(1) den F(" << n << "): ";
    for (int i = 1; i <= n; i++) {
        cout << fibonacci(i) << " ";
    }
    cout << endl;

    return 0;
}
