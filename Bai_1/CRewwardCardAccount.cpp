#include "CRewwardCardAccount.h"
RewardCardAccount::RewardCardAccount() {
    rewardRate = 0;
    currentPoints = 0;
}
RewardCardAccount::~RewardCardAccount() {
    rewardRate = 0;
    currentPoints = 0;
}
float  RewardCardAccount::getCurrentPoints()
{
    return currentPoints;
}

bool RewardCardAccount::charge(double amount)
{
    if (amount + getBalance() <= getCreditLimit())
    {
        int temp = 0;
        temp = amount * rewardRate;
        currentPoints += temp;
        temp = 0;
        return true;
    }
    else
    {
        return false;
    }

}

bool RewardCardAccount::payWithPoints(int pAmount)
{
    if (pAmount > currentPoints)
    {
        cout << "\nThat bai";
        return false;
    }
    else
    {
        currentPoints -= pAmount;
        cout << "\nThanh cong";
        return true;
    }
}

void RewardCardAccount::Input()
{
    cout << "\nNhap ti le hoan diem: ";
    cin >> rewardRate;
}

void RewardCardAccount::Output()
{
    cout << "\nTi le hoan diem: ";
    cout << rewardRate;
    cout << "\nSo diem hien tai trong tai khoan: ";
    cout << currentPoints;
}

void RewardCardAccount::MoThe()
{
    CreditCardAccount::MoThe();
}

void RewardCardAccount::ThongTinThe()
{
    CreditCardAccount::ThongTinThe();
    cout << "\nTai khoan lien ket den: Tai Khoan Tich Diem";
}
