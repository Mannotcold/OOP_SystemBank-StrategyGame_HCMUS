#include "CThapPhapSu.h"

ThapPhapSu::ThapPhapSu()
{
	mX = 0;
	mY = 0;
	Ten = "Phap Su";
	Level = 1;
	DEF = 0;
	ATK = 0;
	HP = 0;
	Mana =0;;
}

ThapPhapSu::~ThapPhapSu()
{
	mX = 0;
	mY = 0;
	Ten = "Phap Su";
	Level = 0;
	DEF = 0;
	ATK = 0;
	HP = 0;
	Mana = 0;
}
string ThapPhapSu::LayTenCongTrinh()
{
	return "ThapPhapSu";

}
CongTrinh* ThapPhapSu::Clone()
{
	return new ThapPhapSu(*this);
}
int ThapPhapSu::getHP()
{
	HP = 200 + Level * 50;
	return HP;
}
int ThapPhapSu::getMana()
{
	Mana = 400 + Level * 80;
	return Mana;
}
int ThapPhapSu::getATK()
{
	ATK = 2 + Level * 1;
	return ATK;
}
int ThapPhapSu::getDEF()
{
	DEF = 4 + Level * 5;
	return DEF;
}
void ThapPhapSu::NhapCongTrinh()
{
	CongTrinh::NhapCongTrinh();
		cout << "Nhap vi tri X xuat hien cua phap su: ";
		cin >> mX;
		cout << "Nhap vi tri Y xuat hien cua phap su: ";
		cin >> mY;
		cout << "Nhap level cua phap su: ";
		cin >> Level;
}
void ThapPhapSu::XuatCongTrinh()
{
	CongTrinh::XuatCongTrinh();
	cout << "\nVi tri X xuat hien cua phap su: ";
	cout << mX;
	cout << "\nVi tri Y xuat hien cua phap su: ";
	cout << mY;
	cout << "\nLevel: ";
	cout << Level;
	cout << "\nATK: ";
	cout << ATK;
	cout << "\nDEF: ";
	cout << DEF;
	cout << "\nHP: ";
	cout << HP;
	cout << "\nMana: ";
	cout << Mana;
}