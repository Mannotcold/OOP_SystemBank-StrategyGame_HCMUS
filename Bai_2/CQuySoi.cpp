#include "CQuySoi.h"
QuySoi::QuySoi()
{
	TenQuaiVat = "Quy Soi";
	Level = 1;
	DiemNo = 0;
	DEF = 0;
	ATK = 0;
	HP = 0;
}

QuySoi::~QuySoi()
{
	TenQuaiVat = "Quy Soi";
	Level = 0;
	DiemNo = 0;
	DEF = 0;
	ATK = 0;
	HP = 0;
}
string QuySoi::LayTenQuaiVat()
{
	return "QuySoi";

}
QuaiVat* QuySoi::Clone()
{
	return new QuySoi(*this);
}
int QuySoi::getDiemNo()
{
	DiemNo = 0 + Level * 3;
	return DiemNo;
}
int QuySoi::getDEF()
{
	DEF = 4 + Level * 5;
	return DEF;
}
int QuySoi::getATK()
{
	ATK = 1 + DiemNo * 2;
	return ATK;
}
int QuySoi::getHP()
{
	HP = 200 + Level * 50;
	return HP;
}
void QuySoi::NhapQuaiVat()
{
	QuaiVat::NhapQuaiVat();
	cout << "Nhap level cua quy soi: ";
	cin >> Level;
}
void QuySoi::XuatQuaiVat()
{
	QuaiVat::XuatQuaiVat();
	cout << "\nLevel: ";
	cout << Level;
	cout << "\nDiem no: ";
	cout << getDiemNo();
	cout << "\nATK: ";
	cout << getATK();
	cout << "\nDEF: ";
	cout << getDEF();
	cout << "\nHP: ";
	cout << getHP();
}