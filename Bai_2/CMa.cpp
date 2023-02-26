#include "CMa.h"
Ma::Ma()
{
	TenQuaiVat = "Ma";
	Level = 1;
	DiemNo = 0;
	DEF = 0;
	ATK = 0;
	HP = 0;
}

Ma::~Ma()
{
	TenQuaiVat = "Ma";
	Level = 1;
	DiemNo = 0;
	DEF = 0;
	ATK = 0;
	HP = 0;
}
string Ma::LayTenQuaiVat()
{
	return "Ma";

}
QuaiVat* Ma::Clone()
{
	return new Ma(*this);
}
int Ma::getDiemNo()
{
	DiemNo = 2 + Level * 3;
	return DiemNo;
}
int Ma::getDEF()
{
	DEF = 1 + Level * 5;
	return DEF;
}
int Ma::getATK()
{
	ATK = 5 + DiemNo * 2;
	return ATK;
}
int Ma::getHP()
{
	HP = 50 + Level * 50;
	return HP;
}
void Ma::NhapQuaiVat()
{
	QuaiVat::NhapQuaiVat();
	cout << "Nhap level cua quy soi: ";
	cin >> Level;
}
void Ma::XuatQuaiVat()
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