#include "BienLai.h"

BienLai::BienLai()
{

}

BienLai::BienLai(int chiSoMoi, int chiSoCu, double tien) {
   this->chiSoMoi = chiSoMoi;
   this->chiSoCu = chiSoCu;
   this->tien = tien;
}

BienLai::BienLai(string tenChuHo, int chiSoMoi, int chiSoCu, double tien) {
   this->tenChuHo = tenChuHo;
   this->chiSoMoi = chiSoMoi;
   this->chiSoCu = chiSoCu;
   this->tien = tien;
}

// Ham nhap
void BienLai::nhapThongTin() {
   KhachHang::nhapThongTin();
   cout << "\tNhap chi so moi: "; cin >> chiSoMoi;
   cout << "\tNhap chi so cu: "; cin >> chiSoCu;
   fflush(stdin);

   tien = (chiSoMoi - chiSoCu) * 5;
}

// Ham hien thi
void BienLai::hienThiThongTin() {
   KhachHang::hienThiThongTin();
   cout << "\tChi so moi: " << chiSoMoi << endl;
   cout << "\tChi so cu: " << chiSoCu << endl;
   cout << "\tTien dien: " << tien << endl;

}
