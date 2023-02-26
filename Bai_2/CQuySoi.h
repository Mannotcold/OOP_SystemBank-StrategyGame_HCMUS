#pragma once
#include"CQuaiVat.h"
//Lop quai thu thu nhat
class QuySoi:public QuaiVat
{
private:
	string TenQuaiVat;
	int Level;
	int DEF;
	int ATK;
	int HP;
	int DiemNo;
public:
	QuySoi();
	~QuySoi();
	string LayTenQuaiVat();
	QuaiVat* Clone();//Trả về đối tượng cần nhân bản theo cơ chế đa hình
	int getDiemNo();
	int getDEF();
	int getATK();
	int getHP();
	void NhapQuaiVat();//Nhap thong tin cua quai thu
	void XuatQuaiVat();//Xuat thong tin cua quai thu
};

