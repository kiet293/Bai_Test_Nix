#include <iostream>
using namespace std;

int main() {
    int n;
    bool check = false;

    while (!check) {
        cout << "Nhap so luong phan tu n: ";
        if (cin >> n) {
            if (n > 0) {
                check = true;
            } else {
                cout << "n phai lon hon 0. Vui long nhap lai!" << endl;
            }
        } else {
            cout << "Vui long nhap mot so nguyen. Vui long nhap lai!" << endl;
            cin.clear();
            cin.ignore(10000, '\n');
        }
    }

    int arr[n];
    cout << "Nhap " << n << " so nguyen: ";
    for (int i = 0; i < n; i++) {
        while (!(cin >> arr[i])) {
            cout << "Vui long nhap mot so nguyen. Nhap lai phan tu thu " << i + 1 << ": ";
            cin.clear();
            cin.ignore(10000, '\n');
        }
    }

    int maxDiv3 = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 3 == 0 && (maxDiv3 == -1 || arr[i] > maxDiv3)) {
            maxDiv3 = arr[i];
        }
    }

    if (maxDiv3 == -1) {
        cout << "Khong co" << endl;
    } else {
        cout << "So lon nhat chia het cho 3 la: " << maxDiv3 << endl;
    }

    return 0;
}
