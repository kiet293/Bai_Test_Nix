#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    cout << "Nhap so nguyen duong n: ";
    cin >> n;
    
    if (n <= 2) {
        cout << "Khong co so nguyen to" << endl;
        return 0;
    }
    
    cout << "Cac so nguyen to nho hon " << n << " la: ";
    for (int i = 2; i < n; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}
