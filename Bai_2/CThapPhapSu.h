#pragma once
#include"CCongTrinh.h"
//lop doi tuong cong trinh tao ra phap su
class ThapPhapSu :public CongTrinh
{
private:
	int mX;
	int mY;
	string Ten;
	int Level;
	int DEF;
	int ATK;
	int HP;
	int Mana;
public:
	ThapPhapSu();
	~ThapPhapSu();
	string LayTenCongTrinh();
	CongTrinh* Clone();//Trả về đối tượng cần nhân bản theo cơ chế đa hình
	int getHP();
	int getMana();
	int getATK();
	int getDEF();
	void NhapCongTrinh();//Nhap thong tin cua doi tuong
	void XuatCongTrinh();//xuat thong tin cua doi tuong
};

