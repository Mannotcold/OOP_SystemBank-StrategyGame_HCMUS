#include "CPaymentAccount.h"
PaymentAccount::PaymentAccount()
{
    SoTaiKhoan = "";
    SoDu = 0;
    NgayPhatHanh = "";
    ListHistory;
}
PaymentAccount::PaymentAccount(const PaymentAccount& pa)
{
    SoTaiKhoan = pa.SoTaiKhoan;
    SoDu = pa.SoDu;
    NgayPhatHanh = pa.NgayPhatHanh;
    ListHistory = pa.ListHistory;
}
PaymentAccount::~PaymentAccount()
{
    SoTaiKhoan = "";
    SoDu = 0;
    NgayPhatHanh = "";
    ListHistory.clear();
}

double PaymentAccount::getBalance()
{
    return SoDu;
}
bool PaymentAccount::transferTo(double amount)
{

    int choice;
    cout << "\nChon 1: Nhan tien" << endl;
    cout << "\nChon 2: Chuen tien" << endl;
    cout << "\nNhap lua chon cua ban: ";
    cin >> choice;
    cin.ignore();
    if (choice == 1)
    {

        string ND;
        string STK;
        cout << "\nNhap so tai khoan chuyen: ";
        cin >> STK;
        cin.ignore();
        cout << "\nNhap noi dung chuyen tien: ";
        getline(cin, ND);
        string Ngay;
        cout << "\nNhap ngay chuyen tien(Dinh dang mm/nn/yyyy): ";
        cin >> Ngay;
        cin.ignore();

        SoDu += amount;
        PaymentHistory a(STK, amount, ND, Ngay);
        ListHistory.push_back(a);
        cout << "\nThanh cong";
        return true;

    }
    else if (choice == 2)
    {
        string ND;
        string Ngay;
        cout << "\nNhap noi dung chuyen tien: ";
        getline(cin, ND);
        cout << "\nNhap ngay chuyen tien (Dinh dang mm/nn/yyyy): ";
        cin >> Ngay;
        cin.ignore();
        if (amount > SoDu)
            return false;
        else
        {
            SoDu -= amount;
            PaymentHistory a(SoTaiKhoan, -1 * amount, ND, Ngay);
            ListHistory.push_back(a);
            cout << "\nThanh cong";
            return true;
        }
    }
    else
        cout << "Nhap sai lua chon!" << endl;

}

void PaymentAccount::TaoTaiKhoan()
{
    cout << "Nhap so tai khoan: ";
    cin >> SoTaiKhoan;
    cout << "Nhap so tien muon nap vao tai khoan: ";
    cin >> SoDu;
    cout << "Nhap ngay phai hanh: ";
    cin >> NgayPhatHanh;
}

void PaymentAccount::ThongTinTK()
{
    cout << "\nSo tai khoan: ";
    cout << SoTaiKhoan;
    cout << "\nSo tien trong tai khoan: ";
    cout << SoDu;
    cout << "\nNgay phai hanh: ";
    cout << NgayPhatHanh;
}

void PaymentAccount::showHistory()
{
    cout << "\n\t=======================HISTORY=======================\n" << endl;
    for (int i = 0;i < ListHistory.size();i++)
    {
        ListHistory[i].XuatHistory();
        cout << "\n==============================================\n" << endl;
    }
}