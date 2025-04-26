#include <iostream>
#include <set>
using namespace std;

int main() {
    int n;
    bool check = false;
	// check input
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
	// input arr
    int arr[n];
    cout << "Nhap " << n << " so nguyen: ";
    for (int i = 0; i < n; i++) {
        while (!(cin >> arr[i])) {
            cout << "Vui long nhap mot so nguyen. Nhap lai phan tu thu " << i + 1 << ": ";
            cin.clear();
            cin.ignore(10000, '\n');
        }
    }
	// su dung set
    set<int> distinctValues;
    for (int i = 0; i < n; i++) {
        distinctValues.insert(arr[i]);
    }

	// display 
    cout << "So luong gia tri phan biet: " << distinctValues.size() << endl;

    return 0;
}
