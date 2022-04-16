#include "QuanLy.h"

QuanLy::QuanLy()
{

}

void QuanLy::themBienLai(BienLai bienLai) {
   ds.push_back(bienLai);
}

// Ham nhap danh sach
void QuanLy::nhapDanhSach() {
    int soLuongBienLai;
    cout << "Nhap vao so luong bien lai: "; cin >> soLuongBienLai;
    fflush(stdin);
    cout << "*****Nhap vao danh sach bien lai*****"<< endl;
    for (int i = 0; i < soLuongBienLai; i++) {
       cout << "Bien lai thu " << (i +1)  << ":" << endl;
        bienLai.nhapThongTin();
        themBienLai(bienLai);
    }
}

// Ham hien thi danh sach
void QuanLy::hienThiDanhSach() {
    int i = 0;
   for (BienLai bienLai : ds) {
       i++;
       cout << "Bien lai thu " << i << ":" << endl;
       bienLai.hienThiThongTin();
   }
}
