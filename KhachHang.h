#ifndef KHACHHANG_H
#define KHACHHANG_H

#include "string.h"
#include <iostream>
using namespace std;

class KhachHang
{
protected:
    // Thuoc tinh
         string tenChuHo;
         int soNha;
         string maCongTo;
public:
        // Phuong thuc
        // Ham khoi tao khong doi so
         KhachHang();
        // Ham khoi tao co doi so
         KhachHang(string tenChuHo, int soNha, string maCongTo);

        // Ham nhap
         void nhapThongTin();

        // Hm hien thi
         void hienThiThongTin();
};

#endif // KHACHHANG_H
