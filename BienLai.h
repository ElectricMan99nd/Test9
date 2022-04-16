#ifndef BIENLAI_H
#define BIENLAI_H

#include "KhachHang.h"

class BienLai:  KhachHang
{
    // Thuoc tinh
         int chiSoMoi;
         int chiSoCu;
         double tien;
public:
        // Phuong thuc
        // Ham khoi tao khong doi so
         BienLai();

        // Ham khoi tao co doi so
         BienLai(int chiSoMoi, int chiSoCu, double tien);
         BienLai(string tenChuHo, int chiSoMoi, int chiSoCu, double tien);

        // Ham nhap
         void nhapThongTin();

        // Ham hien thi
         void hienThiThongTin();
};

#endif // BIENLAI_H
