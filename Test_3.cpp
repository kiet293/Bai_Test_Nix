#include <iostream>
#include <string>
using namespace std;

// Khai báo struct SinhVien
struct SinhVien {
    string ten;
    float toan, ly, hoa;
    float diemTB;
};

// cal avg 
void tinhDiemTB(SinhVien &sv) {
    sv.diemTB = (sv.toan + sv.ly + sv.hoa) / 3;
}

// check diem valid


int main() {
    int n;
    bool check = false;

    // check input
    while (!check) {
        cout << "Nhap so luong sinh vien n: ";
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

    SinhVien ds[n];
    // input student
    cout << "Nhap thong tin sinh vien:" << endl;
    cin.ignore();
    
    for (int i = 0; i < n; i++) {
        cout << "Sinh vien thu " << i + 1 << ":" << endl;
        cout << "Ten: ";
        getline(cin, ds[i].ten);
        
        // input and check diem Toan
        do {
            cout << "Diem Toan: ";
            if (!(cin >> ds[i].toan) || ds[i].toan < 0 || ds[i].toan > 10) {
                cout << "Diem phai la so thuc tu 0 den 10. Nhap lai!" << endl;
                cin.clear();
                cin.ignore(10000, '\n');
            } else {
                break;
            }
        } while (true);

        // input and check diem Ly
        do {
            cout << "Diem Ly: ";
            if (!(cin >> ds[i].ly) || ds[i].ly < 0 || ds[i].ly > 10) {
                cout << "Diem phai la so thuc tu 0 den 10. Nhap lai!" << endl;
                cin.clear();
                cin.ignore(10000, '\n');
            } else {
                break;
            }
        } while (true);

        // input and check diem Hoa
        do {
            cout << "Diem Hoa: ";
            if (!(cin >> ds[i].hoa) || ds[i].hoa < 0 || ds[i].hoa > 10) {
                cout << "Diem phai la so thuc tu 0 den 10. Nhap lai!" << endl;
                cin.clear();
                cin.ignore(10000, '\n');
            } else {
                break;
            }
        } while (true);

        tinhDiemTB(ds[i]);
        cin.ignore();
    }

    // display avg >= 8
    cout << "\nDanh sach sinh vien co diem TB >= 8:" << endl;
    bool svGioi = false;
    for (int i = 0; i < n; i++) {
        if (ds[i].diemTB >= 8) {
            svGioi = true;
            cout << "Ten: " << ds[i].ten << ", Diem TB: " << ds[i].diemTB << endl;
        }
    }
    if (!svGioi) {
        cout << "Khong co sinh vien nao co diem TB >= 8" << endl;
    }

    return 0;
}
