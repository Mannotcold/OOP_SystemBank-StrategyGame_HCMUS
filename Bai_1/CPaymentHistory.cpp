#include "CPaymentHistory.h"
PaymentHistory::PaymentHistory()
{
    SoTK = "";
    SoTienChuyenKhoan = 0;
    NoiDungChuyenKhoan = "";
    NgayGiaoDich = "";
}
PaymentHistory::PaymentHistory(string newSoTK, double newSoTienChuyenKhoan, string newNoiDungChuyenKhoan, string newNgayGiaoDich)
{
    SoTK = newSoTK;
    SoTienChuyenKhoan = newSoTienChuyenKhoan;
    NoiDungChuyenKhoan = newNoiDungChuyenKhoan;
    NgayGiaoDich = newNgayGiaoDich;
}
PaymentHistory::PaymentHistory(const PaymentHistory& h)
{
    SoTK = h.SoTK;
    SoTienChuyenKhoan = h.SoTienChuyenKhoan;
    NoiDungChuyenKhoan = h.NoiDungChuyenKhoan;
    NgayGiaoDich = h.NgayGiaoDich;
}
PaymentHistory::~PaymentHistory()
{
    SoTK = "";
    SoTienChuyenKhoan = 0;
    NoiDungChuyenKhoan = "";
    NgayGiaoDich = "";
};
void PaymentHistory::XuatHistory()
{
    cout << "\nSo tai khoan: ";
    cout << SoTK;
    cout << "\nSo tien chuyen khoan: ";
    cout << SoTienChuyenKhoan;
    cout << "\nNoi dung chuyen khoan: ";
    cout << NoiDungChuyenKhoan;
    cout << "\nNgay giao dich: ";
    cout << NgayGiaoDich;
}