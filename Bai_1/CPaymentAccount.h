#pragma once
#include"CPaymentHistory.h"

class PaymentAccount
{
private:
    string SoTaiKhoan;
    double SoDu;
    string NgayPhatHanh;
    vector<PaymentHistory>ListHistory;
public:
    PaymentAccount();
    PaymentAccount(const PaymentAccount& pa);
    ~PaymentAccount();
    double getBalance();
    bool transferTo(double amount);
    void TaoTaiKhoan();
    void ThongTinTK();
    void showHistory();
};

