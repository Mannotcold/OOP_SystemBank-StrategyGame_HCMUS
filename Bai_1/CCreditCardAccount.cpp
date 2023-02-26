#include "CCreditCardAccount.h"

CreditCardAccount::CreditCardAccount() {
    SoThe = "";
    NgayPhatHanh = "";
    creditLimit = 30000000;
    interestRate = 0;
    minPayment = 0;
    latePenalty = 2000000;
    balance = 30000000;
    ListHistory;
}
CreditCardAccount::CreditCardAccount(const CreditCardAccount& cr) {
    SoThe = cr.SoThe;
    NgayPhatHanh = cr.NgayPhatHanh;
    creditLimit = cr.creditLimit;
    interestRate = cr.interestRate;
    minPayment = cr.minPayment;
    latePenalty = cr.latePenalty;
    balance = cr.balance;
    ListHistory = cr.ListHistory;
}
CreditCardAccount::~CreditCardAccount() {
    SoThe = "";
    NgayPhatHanh = "";
    creditLimit = 30000000;
    interestRate = 0;
    minPayment = 0;
    latePenalty = 2000000;
    balance = 30000000;
    ListHistory.clear();
}

void CreditCardAccount::setBalance(double newBalance)
{
    balance = newBalance;
}

long long CreditCardAccount::getBalance()
{
    return balance;
}

long long CreditCardAccount::getCreditLimit()
{
    return creditLimit;
}

bool CreditCardAccount::charge(double amount)
{
    if (amount + balance <= creditLimit)
    {
        string ND;
        string Ngay;
        cout << "\nNhap noi dung chuyen tien: ";
        getline(cin, ND);
        cout << "\nNhap ngay chuyen tien (Dinh dang mm/nn/yyyy): ";
        cin >> Ngay;
        cin.ignore();
        balance += amount;
        PaymentHistory a("", amount, ND, Ngay);
        ListHistory.push_back(a);
        cout << "\nThanh cong";
        return true;
    }
    else
    {
        cout << "\nThat bai";
        return false;
    }
}
bool CreditCardAccount::payment(double amount)
{
    string ND;
    string Ngay;
    cout << "\nNhap noi dung chuyen tien: ";
    getline(cin, ND);
    cin.ignore();
    cout << "\nNhap ngay chuyen tien (Dinh dang mm/nn/yyyy): ";
    cin >> Ngay;
    cin.ignore();
    balance -= amount;
    PaymentHistory a("", -1 * amount, ND, Ngay);
    ListHistory.push_back(a);
    cout << "\nThanh cong";
    return true;
}

void CreditCardAccount::showHistory()
{
    cout << "\n\t=======================HISTORY=======================\n" << endl;
    for (int i = 0;i < ListHistory.size();i++)
    {
        ListHistory[i].XuatHistory();
        cout << "\n==============================================\n" << endl;
    }
}

void CreditCardAccount::Input()
{
    cout << "\nNhap lai xuat(%): ";
    cin >> interestRate;
    cout << "\nNhap % so tien toi thieu phai tra: ";
    cin >> minPayment;
}

void CreditCardAccount::Output()
{
    cout << "\nHan muc tin dung: ";
    cout << creditLimit;
    cout << "\nLai xuat: ";
    cout << interestRate;
    cout << "\nNhap % so tien toi thieu phai tra: ";
    cout << minPayment;
    cout << "\nPhi tra cham: ";
    cout << latePenalty;
    cout << "\nSo du hien tai: ";
    cout << balance;
}

void CreditCardAccount::MoThe()
{
    cin.ignore();
    cout << "Nhap so the muon mo: ";
    getline(cin, SoThe);
    cout << "Nhap ngay phat hanh(Dinh dang mm/nn/yyyy): ";
    getline(cin, NgayPhatHanh);
    
}

void CreditCardAccount::ThongTinThe()
{
    cout << "\nSo the: ";
    cout << SoThe;
    cout << "\nNgay phat hanh: ";
    cout << NgayPhatHanh;
}
