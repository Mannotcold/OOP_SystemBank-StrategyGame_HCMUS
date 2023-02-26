#include"CGame.h"

int main()
{
	Game a;

	int choice;
	while (1) {
		system("cls");
		cout << "\t\t============================Menu===================================\n";
		cout << "\t\t1. Nhap thong tin cong trinh.\n";
		cout << "\t\t2. Nhap thong tin quai vat. \n";
		cout << "\t\t3. Ban do. \n";
		cout << "\t\t0. Thoat. \n" << endl;
		cout << "\t\t===================================================================\n";
		cout << "\t\tNhap lua chon : ";
		cin >> choice;
		switch (choice)
		{
		case 1:
		{
			a.NhapCongTrinh();
			break;
		}
		case 2:
		{

			a.NhapQuaiVat();
			break;
		}
		case 3:
		{
			a.XuatCongTrinh();
			a.XuatQuaiVat();
			system("pause");
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