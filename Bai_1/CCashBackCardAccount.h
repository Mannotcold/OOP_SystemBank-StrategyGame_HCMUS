#pragma once
#include"CCreditCardAccount.h"
class CashbackCardAccount : public CreditCardAccount
{
private:
    
    float cashbackRate;
    float currentCashBack;
public:
    CashbackCardAccount();
    ~CashbackCardAccount();
    float getCurrentCashBack();
    bool charge(double amount);
    void redeemCashBack();
    void Input();
    void Output();
    void MoThe();
    void ThongTinThe();
};

