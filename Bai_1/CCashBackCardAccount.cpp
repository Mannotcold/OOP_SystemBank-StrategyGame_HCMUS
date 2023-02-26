#include "CCashBackCardAccount.h"
CashbackCardAccount::CashbackCardAccount()
{
    cashbackRate = 0;
    currentCashBack = 0;
}

CashbackCardAccount::~CashbackCardAccount()
{
    cashbackRate = 0;
    currentCashBack = 0;
}

float CashbackCardAccount::getCurrentCashBack()
{
    return currentCashBack;
}

bool CashbackCardAccount::charge(double amount)
{
    if (amount + getBalance() <= getCreditLimit())
    {
        currentCashBack += amount * cashbackRate;
        cout << "\nThanh cong";
        return true;
    }
    else
    {
        cout << "\nThat bai";
        return false;
    }

}

void CashbackCardAccount::redeemCashBack()
{
    float temp;
    temp = getBalance() - currentCashBack;
    setBalance(temp);
    string ND;
    string Ngay;
    cout << "\nNhap noi dung chuyen tien: ";
    getline(cin, ND);
    cin.ignore();
    cout << "\nNhap ngay chuyen tien (Dinh dang mm/nn/yyyy): ";
    cin >> Ngay;
    cin.ignore();
    PaymentHistory a("", currentCashBack, ND, Ngay);
    ListHistory.push_back(a);
    currentCashBack = 0;
}


void CashbackCardAccount::Input()
{
    cout << "\nNhap ti le hoan tien: ";
    cin >> cashbackRate;
}

void CashbackCardAccount::Output()
{
    cout << "\nTi le hoan tien: ";
    cout << cashbackRate;
    cout << "\nSo tien co the hoan lai trong tai khoan: ";
    cout << currentCashBack;
}

void CashbackCardAccount::MoThe()
{
    CreditCardAccount::MoThe();
}

void CashbackCardAccount::ThongTinThe()
{
    CreditCardAccount::ThongTinThe();
    cout << "\nTai khoan lien ket den: Tai Khoan Hoan Tien";
}
