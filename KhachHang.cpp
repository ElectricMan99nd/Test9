#include "KhachHang.h"

KhachHang::KhachHang()
{

}

KhachHang::KhachHang(string tenChuHo, int soNha, string maCongTo) {
   this->tenChuHo = tenChuHo;
   this->soNha = soNha;
   this->maCongTo = maCongTo;
}

// Ham nhap
void KhachHang::nhapThongTin() {
    cout << "\tNhap ten chu ho: "; getline(cin, tenChuHo);
    cout << "\tNhap so nha: "; cin >> soNha;
    fflush(stdin);
    cout <<"\tNhap ma cong to: "; getline(cin, maCongTo);
}

// Hm hien thi
void KhachHang::hienThiThongTin() {
    cout << "\tTen chu ho: " << tenChuHo << endl;
    cout << "\tSo nha: " << soNha << endl;
    cout << "\tMa cong to: " << maCongTo << endl;
}
