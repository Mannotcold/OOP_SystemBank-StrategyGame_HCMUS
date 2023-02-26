#include "CTraiBoBinh.h"
TraiBoBinh::TraiBoBinh()
{
	mX = 0;
	mY = 0;
	Ten = "Bo Binh";
	Level = 1;
	DEF = 0;
	ATK = 0;
	HP = 0;
}

TraiBoBinh::~TraiBoBinh()
{
	mX = 0;
	mY = 0;
	Ten = "Bo Binh";
	Level = 0;
	HP = 0;
	DEF = 0;
	ATK = 0;
}
string TraiBoBinh::LayTenCongTrinh()
{
	return "TraiBoBinh";
}
CongTrinh* TraiBoBinh::Clone()
{
	return new TraiBoBinh(*this);
}
int TraiBoBinh::getHP()
{
	HP = 300 + Level * 100;
	return HP;
}
int TraiBoBinh::getATK()
{
	ATK = 8 + Level * 1;
	return ATK;
}
int TraiBoBinh::getDEF()
{
	DEF = 12 + Level * 5;
	return DEF;
}
void TraiBoBinh::NhapCongTrinh()
{
	CongTrinh::NhapCongTrinh();
	cout << "Nhap vi tri X xuat hien cua bo binh: ";
	cin >> mX;
	cout << "Nhap vi tri Y xuat hien cua bo binh: ";
	cin >> mY;
	cout << "Nhap level cua bo binh: ";
	cin >> Level;
}
void TraiBoBinh::XuatCongTrinh()
{
	CongTrinh::XuatCongTrinh();
	cout << "\nVi tri X xuat hien cua bo binh: ";
	cout << mX;
	cout << "\nVi tri Y xuat hien cua bo binh: ";
	cout << mY;
	cout << "\nLevel: ";
	cout << Level;
	cout << "\nHP: ";
	cout << getHP();
	cout << "\nATK: ";
	cout << getATK();
	cout << "\nDEF: ";
	cout << getDEF();
}