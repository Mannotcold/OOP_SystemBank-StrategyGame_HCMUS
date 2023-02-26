#pragma once
#include"CCreditCardAccount.h"
class RewardCardAccount : public CreditCardAccount
{
private:
    float rewardRate;
    int currentPoints;
public:
    RewardCardAccount();
    ~RewardCardAccount();
    float  getCurrentPoints();
    bool charge(double amount);
    bool payWithPoints(int pAmount);
    void Input();
    void Output();
    void MoThe();
    void ThongTinThe();
};
