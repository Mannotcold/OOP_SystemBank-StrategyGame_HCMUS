#pragma once
#include"CPaymentHistory.h"
class CreditCardAccount
{
protected:
    string SoThe;
    string NgayPhatHanh;
    long long creditLimit;
    double interestRate;
    double minPayment;
    long long latePenalty;
    long long balance;
    vector<PaymentHistory>ListHistory;
public:
    CreditCardAccount();
    CreditCardAccount(const CreditCardAccount& cr);
    ~CreditCardAccount();
    void setBalance(double newBalance);
    long long getBalance();
    long long getCreditLimit();
    bool payment(double amount);
    void showHistory();
    void Input();
    void Output();
    virtual bool charge(double amount);
    virtual void MoThe();
    virtual void ThongTinThe();
};

