#ifndef QUANLY_H
#define QUANLY_H

#include "BienLai.h"
#include <list>
class QuanLy
{
    // Thuoc tinh
         list<BienLai> ds;
         BienLai bienLai;
public:
        // Phuong thuc
        // Ham khoi tao
         QuanLy();

        // Ham them bien lai vao danh sach
         void themBienLai(BienLai bienLai);

        // Ham nhap danh sach
         void nhapDanhSach();

        // Ham hien thi danh sach
         void hienThiDanhSach();
};

#endif // QUANLY_H
