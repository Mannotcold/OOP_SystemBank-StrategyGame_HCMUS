#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class PaymentHistory
{
private:
    string SoTK;
    double SoTienChuyenKhoan;
    string NoiDungChuyenKhoan;
    string NgayGiaoDich;
public:
    PaymentHistory();
    PaymentHistory(string newSoTK, double newSoTienChuyenKhoan, string newNoiDungChuyenKhoan, string newNgayGiaoDich);
    PaymentHistory(const PaymentHistory& h);
    ~PaymentHistory();
    void XuatHistory();
};
