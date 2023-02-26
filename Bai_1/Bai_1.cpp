#include "CCreditCardAccount.h"
#include "CPaymentAccount.h"
#include"CRewwardCardAccount.h"
#include"CCashBackCardAccount.h"


void MoThePhu()
{
    RewardCardAccount a;
    CashbackCardAccount b;
    int choice;
    while (1) {
        system("cls");
        cout << "\n------------------------MENU------------------------------\n";
        cout << "\n1 -  Mo the tich diem ";
        cout << "\n2 -  Kiem tra thong tin the tich diem ";
        cout << "\n3 -  Mo the hoan tien ";
        cout << "\n4 -  Kiem tra thong tin the hoan tien ";
        cout << "\n0 -  Quay lai ";
        cout << "\n---------------------------------------------------------";
        cout << "\nNhap lua chon cua ban: ";
        cout << endl << endl;
        cin >> choice;
        cout << endl;
        system("cls");
        switch (choice) {
        case 1: {
            a.MoThe();
            break;
        }
        case 2: {
            a.ThongTinThe();
            cout << endl;
            break;
        }
        case 3: {
            b.MoThe();
            break;
        }
        case 4: {
            b.ThongTinThe();
            cout << endl;
            break;
        }
        case 0:
            return;
        }
        system("pause");
    }
}

void MoTheTinDung()
{
    CreditCardAccount a;
    int choice;
    while (1) {
        system("cls");
        cout << "\n------------------------MENU------------------------------\n";
        cout << "\n1 -  Mo the tin dung ";
        cout << "\n2 -  Kiem tra thong tin the tin dung ";
        cout << "\n3 -  Mo cac the phu ";
        cout << "\n0 -  Quay lai ";
        cout << "\n---------------------------------------------------------";
        cout << "\nNhap lua chon cua ban: ";
        cout << endl << endl;
        cin >> choice;
        cout << endl;
        system("cls");
        switch (choice) {
        case 1: {
            a.MoThe();
            break;
        }
        case 2: {
            a.ThongTinThe();
            
            cout << endl;
            break;
        }
        case 3: {
            MoThePhu();
            cout << endl;
            break;
        }

        case 0:
            return;
        }
        system("pause");
    }
}

void TaiKhoanTheTichDiem()
{
    RewardCardAccount a;
    int choice;
    while (1) {
        system("cls");
        cout << "\n------------------------MENU------------------------------\n";
        cout << "\n1 -  Nhap uu dai cua the tich diem ";
        cout << "\n2 -  Kiem tra thong tin the tich diem ";
        cout << "\n3 -  Nap tien vao the ";
        cout << "\n4 -  Thanh toan voi diem dang co ";
        cout << "\n0 -  Quay lai ";
        cout << "\n---------------------------------------------------------";
        cout << "\nNhap lua chon cua ban: ";
        cout << endl << endl;
        cin >> choice;
        cout << endl;
        system("cls");
        switch (choice) {
        case 1: {
            a.Input();
            break;
        }
        case 2: {
            a.Output();
            cout << endl;
            break;
        }
        case 3: {
            double temp;
            cout << "Nhap so tien nap vao tai khoan: ";
            cin >> temp;
            a.charge(temp);
            cout << endl;
            break;
        }
        case 4: {
            double temp;
            cout << "Nhap so tien can thanh toan: ";
            cin >> temp;
            a.payWithPoints(temp);
            cout << endl;
            break;
        }
        case 0:
            return;
        }
        system("pause");
    }
}



void TaiKhoanTheHoanTien()
{
    CashbackCardAccount a;
    int choice;
    while (1) {
        system("cls");
        cout << "\n------------------------MENU------------------------------\n";
        cout << "\n1 -  Nhap ti le cua the hoan tien ";
        cout << "\n2 -  Kiem tra thong tin the hoan tien ";
        cout << "\n3 -  Tien hanh hoan tien ";
        cout << "\n0 -  Quay lai ";
        cout << "\n---------------------------------------------------------";
        cout << "\nNhap lua chon cua ban: ";
        cout << endl << endl;
        cin >> choice;
        cout << endl;
        system("cls");
        switch (choice) {
        case 1: {
            a.Input();
            break;
        }
        case 2: {
            a.Output();
            cout << endl;
            break;
        }

        case 3: {
            a.redeemCashBack();
            cout << endl;
            break;
        }
        case 0:
            return;
        }
        system("pause");
    }
}

void TaiKhoanThanhToan()
{
    PaymentAccount a;
    int choice;
    while (1) {
        system("cls");
        cout << "\n------------------------MENU------------------------------\n";
        cout << "\n1 -  Tao tai khoan thanh toan ";
        cout << "\n2 -  Kiem tra thong tin tai khoan ";
        cout << "\n3 -  Chuyen tien ";
        cout << "\n4 -  Xem lich su giao dich ";
        cout << "\n0 -  Quay lai ";
        cout << "\n---------------------------------------------------------";
        cout << "\nNhap lua chon cua ban: ";
        cout << endl << endl;
        cin >> choice;
        cout << endl;
        system("cls");
        switch (choice) {
        case 1: {
            a.TaoTaiKhoan();
            break;
        }
        case 2: {
            a.ThongTinTK();
            cout << endl;
            break;
        }
        case 3: {
            double temp;
            cout << "Nhap so tien chuyen khoan: ";
            cin >> temp;
            a.transferTo(temp);
            cout << endl;
            break;
        }
        case 4: {
            a.showHistory();
            cout << endl;
            break;
        }
        case 0:
            return;
        }
        system("pause");
    }
}

void TaiKhoanTinDung()
{
    CreditCardAccount a;
    int choice;
    while (1) {
        system("cls");
        cout << "\n------------------------MENU------------------------------\n";
        cout << "\n1 -  Nhap muc phi the ";
        cout << "\n2 -  Kiem tra thong tin the tin dung ";
        cout << "\n3 -  Nap tien vao the ";
        cout << "\n4 -  Thanh toan tien ";
        cout << "\n5 -  Xem lich su giao dich ";
        cout << "\n6 -  Tai khoan the tich diem ";
        cout << "\n7 -  Tai khoan the hoan tien ";
        cout << "\n8 -  Phat hanh the tin dung ";
        cout << "\n0 -  Quay lai ";
        cout << "\n---------------------------------------------------------";
        cout << "\nNhap lua chon cua ban: ";
        cout << endl << endl;
        cin >> choice;
        cout << endl;
        system("cls");
        switch (choice) {
        case 1: {
            a.Input();
            break;
        }
        case 2: {
            a.Output();
            cout << endl;
            break;
        }
        case 3: {
            double temp;
            cout << "Nhap so tien nap vao tai khoan: ";
            cin >> temp;
            a.charge(temp);
            cout << endl;
            break;
        }
        case 4: {
            double temp;
            cout << "Nhap so tien can thanh toan: ";
            cin >> temp;
            a.payment(temp);
            cout << endl;
            break;
        }
        case 5: {
            a.showHistory();
            cout << endl;
            break;
        }
        case 6: {
            TaiKhoanTheTichDiem();
            cout << endl;
            break;
        }
        case 7: {
            TaiKhoanTheHoanTien();
            cout << endl;
            break;
        }
        case 8: {
            MoTheTinDung();
            cout << endl;
            break;
        }
        case 0:
            return;
        }
        system("pause");
    }
}

int main()
{
	
	int choice;
	while (1) {
		system("cls");
		cout << "\t\t============================Menu===================================\n";
		cout << "\t\t1. Tai khoan thanh toan.\n";
		cout << "\t\t2. Tai khoan tin dung. \n";
		cout << "\t\t0. Thoat. \n" << endl;
		cout << "\t\t===================================================================\n";
		cout << "\t\tNhap lua chon : ";
		cin >> choice;
		switch (choice)
		{
		case 1:
		{
            TaiKhoanThanhToan();
			break;
		}
		case 2:
		{
			
            TaiKhoanTinDung();
			break;
		}
		
		case 0:
		{
			exit(0);
			break;

		}
		}
	}
	return 0;
}